#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNumber3__FPci
// Address: 0x2a6940 - 0x2a69c4
void GetNumber3__FPci_0x2a6940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNumber3__FPci_0x2a6940");
#endif

    switch (ctx->pc) {
        case 0x2a6970u: goto label_2a6970;
        case 0x2a6990u: goto label_2a6990;
        case 0x2a69a4u: goto label_2a69a4;
        case 0x2a69b0u: goto label_2a69b0;
        default: break;
    }

    ctx->pc = 0x2a6940u;

    // 0x2a6940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a6940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a6944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a6944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a6948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a6948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a694c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a6950: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a6950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6954: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a6954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6958: 0x2a01000a  slti        $at, $s0, 0xA
    ctx->pc = 0x2a6958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a695c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A695Cu;
    {
        const bool branch_taken_0x2a695c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A695Cu;
            // 0x2a6960: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a695c) {
            ctx->pc = 0x2A6978u;
            goto label_2a6978;
        }
    }
    ctx->pc = 0x2A6964u;
    // 0x2a6964: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a6964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a6968: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2A6968u;
    SET_GPR_U32(ctx, 31, 0x2A6970u);
    ctx->pc = 0x2A696Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6968u;
            // 0x2a696c: 0x24a5e508  addiu       $a1, $a1, -0x1AF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6970u; }
        if (ctx->pc != 0x2A6970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6970u; }
        if (ctx->pc != 0x2A6970u) { return; }
    }
    ctx->pc = 0x2A6970u;
label_2a6970:
    // 0x2a6970: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A6970u;
    {
        const bool branch_taken_0x2a6970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6970) {
            ctx->pc = 0x2A6990u;
            goto label_2a6990;
        }
    }
    ctx->pc = 0x2A6978u;
label_2a6978:
    // 0x2a6978: 0x2a010064  slti        $at, $s0, 0x64
    ctx->pc = 0x2a6978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2a697c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A697Cu;
    {
        const bool branch_taken_0x2a697c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a697c) {
            ctx->pc = 0x2A6990u;
            goto label_2a6990;
        }
    }
    ctx->pc = 0x2A6984u;
    // 0x2a6984: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a6984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a6988: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2A6988u;
    SET_GPR_U32(ctx, 31, 0x2A6990u);
    ctx->pc = 0x2A698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6988u;
            // 0x2a698c: 0x24a5e510  addiu       $a1, $a1, -0x1AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6990u; }
        if (ctx->pc != 0x2A6990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6990u; }
        if (ctx->pc != 0x2A6990u) { return; }
    }
    ctx->pc = 0x2A6990u;
label_2a6990:
    // 0x2a6990: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a6990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a6994: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a6994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6998: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2a6998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2a699c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2A699Cu;
    SET_GPR_U32(ctx, 31, 0x2A69A4u);
    ctx->pc = 0x2A69A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A699Cu;
            // 0x2a69a0: 0x24a5e518  addiu       $a1, $a1, -0x1AE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A69A4u; }
        if (ctx->pc != 0x2A69A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A69A4u; }
        if (ctx->pc != 0x2A69A4u) { return; }
    }
    ctx->pc = 0x2A69A4u;
label_2a69a4:
    // 0x2a69a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a69a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69a8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2A69A8u;
    SET_GPR_U32(ctx, 31, 0x2A69B0u);
    ctx->pc = 0x2A69ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A69A8u;
            // 0x2a69ac: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A69B0u; }
        if (ctx->pc != 0x2A69B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A69B0u; }
        if (ctx->pc != 0x2A69B0u) { return; }
    }
    ctx->pc = 0x2A69B0u;
label_2a69b0:
    // 0x2a69b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a69b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a69b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a69b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a69b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a69b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a69bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A69BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A69C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A69BCu;
            // 0x2a69c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A69C4u;
}
