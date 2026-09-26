#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuEnterIMG__FiPUcPc
// Address: 0x2513a0 - 0x251410
void MenuEnterIMG__FiPUcPc_0x2513a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuEnterIMG__FiPUcPc_0x2513a0");
#endif

    switch (ctx->pc) {
        case 0x2513dcu: goto label_2513dc;
        case 0x2513f4u: goto label_2513f4;
        default: break;
    }

    ctx->pc = 0x2513a0u;

    // 0x2513a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2513a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2513a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2513a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2513a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2513a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2513ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2513acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2513b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2513b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2513b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2513b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2513b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513bc: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2513bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2513c0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2513C0u;
    {
        const bool branch_taken_0x2513c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2513C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2513C0u;
            // 0x2513c4: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513c0) {
            ctx->pc = 0x2513D0u;
            goto label_2513d0;
        }
    }
    ctx->pc = 0x2513C8u;
    // 0x2513c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2513C8u;
    {
        const bool branch_taken_0x2513c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2513CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2513C8u;
            // 0x2513cc: 0xa20001d8  sb          $zero, 0x1D8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513c8) {
            ctx->pc = 0x2513DCu;
            goto label_2513dc;
        }
    }
    ctx->pc = 0x2513D0u;
label_2513d0:
    // 0x2513d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2513d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513d4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2513D4u;
    SET_GPR_U32(ctx, 31, 0x2513DCu);
    ctx->pc = 0x2513D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2513D4u;
            // 0x2513d8: 0x260401d8  addiu       $a0, $s0, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2513DCu; }
        if (ctx->pc != 0x2513DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2513DCu; }
        if (ctx->pc != 0x2513DCu) { return; }
    }
    ctx->pc = 0x2513DCu;
label_2513dc:
    // 0x2513dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2513dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2513e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2513e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2513e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513ec: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2513ECu;
    SET_GPR_U32(ctx, 31, 0x2513F4u);
    ctx->pc = 0x2513F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2513ECu;
            // 0x2513f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2513F4u; }
        if (ctx->pc != 0x2513F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2513F4u; }
        if (ctx->pc != 0x2513F4u) { return; }
    }
    ctx->pc = 0x2513F4u;
label_2513f4:
    // 0x2513f4: 0xa20001d8  sb          $zero, 0x1D8($s0)
    ctx->pc = 0x2513f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 472), (uint8_t)GPR_U32(ctx, 0));
    // 0x2513f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2513f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2513fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2513fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251408: 0x3e00008  jr          $ra
    ctx->pc = 0x251408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25140Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251408u;
            // 0x25140c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251410u;
}
