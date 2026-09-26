#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRoboInfoType__13CGameDataUsedFv
// Address: 0x198390 - 0x1983f4
void GetRoboInfoType__13CGameDataUsedFv_0x198390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRoboInfoType__13CGameDataUsedFv_0x198390");
#endif

    switch (ctx->pc) {
        case 0x1983a8u: goto label_1983a8;
        default: break;
    }

    ctx->pc = 0x198390u;

    // 0x198390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x198398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x198398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19839c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19839cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983a0: 0xc065714  jal         func_195C50
    ctx->pc = 0x1983A0u;
    SET_GPR_U32(ctx, 31, 0x1983A8u);
    ctx->pc = 0x1983A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1983A0u;
            // 0x1983a4: 0x84840002  lh          $a0, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C50u;
    if (runtime->hasFunction(0x195C50u)) {
        auto targetFn = runtime->lookupFunction(0x195C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1983A8u; }
        if (ctx->pc != 0x1983A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboPartInfoData__Fi_0x195c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1983A8u; }
        if (ctx->pc != 0x1983A8u) { return; }
    }
    ctx->pc = 0x1983A8u;
label_1983a8:
    // 0x1983a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1983A8u;
    {
        const bool branch_taken_0x1983a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1983a8) {
            ctx->pc = 0x1983B8u;
            goto label_1983b8;
        }
    }
    ctx->pc = 0x1983B0u;
    // 0x1983b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1983B0u;
    {
        const bool branch_taken_0x1983b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1983B0u;
            // 0x1983b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983b0) {
            ctx->pc = 0x1983E4u;
            goto label_1983e4;
        }
    }
    ctx->pc = 0x1983B8u;
label_1983b8:
    // 0x1983b8: 0x82040004  lb          $a0, 0x4($s0)
    ctx->pc = 0x1983b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1983bc: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1983bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1983c0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1983C0u;
    {
        const bool branch_taken_0x1983c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1983C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1983C0u;
            // 0x1983c4: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983c0) {
            ctx->pc = 0x1983D0u;
            goto label_1983d0;
        }
    }
    ctx->pc = 0x1983C8u;
    // 0x1983c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1983C8u;
    {
        const bool branch_taken_0x1983c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1983C8u;
            // 0x1983cc: 0x8442001e  lh          $v0, 0x1E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983c8) {
            ctx->pc = 0x1983E4u;
            goto label_1983e4;
        }
    }
    ctx->pc = 0x1983D0u;
label_1983d0:
    // 0x1983d0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1983D0u;
    {
        const bool branch_taken_0x1983d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1983d0) {
            ctx->pc = 0x1983E0u;
            goto label_1983e0;
        }
    }
    ctx->pc = 0x1983D8u;
    // 0x1983d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1983D8u;
    {
        const bool branch_taken_0x1983d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1983D8u;
            // 0x1983dc: 0x84420020  lh          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983d8) {
            ctx->pc = 0x1983E4u;
            goto label_1983e4;
        }
    }
    ctx->pc = 0x1983E0u;
label_1983e0:
    // 0x1983e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1983e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1983e4:
    // 0x1983e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1983e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1983e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1983e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1983ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1983ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1983F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1983ECu;
            // 0x1983f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1983F4u;
}
