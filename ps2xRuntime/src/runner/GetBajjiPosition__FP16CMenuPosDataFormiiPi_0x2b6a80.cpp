#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBajjiPosition__FP16CMenuPosDataFormiiPi
// Address: 0x2b6a80 - 0x2b6ad8
void GetBajjiPosition__FP16CMenuPosDataFormiiPi_0x2b6a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBajjiPosition__FP16CMenuPosDataFormiiPi_0x2b6a80");
#endif

    switch (ctx->pc) {
        case 0x2b6ab0u: goto label_2b6ab0;
        case 0x2b6ac4u: goto label_2b6ac4;
        default: break;
    }

    ctx->pc = 0x2b6a80u;

    // 0x2b6a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b6a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b6a84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2b6a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b6a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b6a8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b6a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b6a90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6a94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a98: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6A98u;
    {
        const bool branch_taken_0x2b6a98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A98u;
            // 0x2b6a9c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6a98) {
            ctx->pc = 0x2B6AC4u;
            goto label_2b6ac4;
        }
    }
    ctx->pc = 0x2B6AA0u;
    // 0x2b6aa0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b6aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b6aa4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2b6aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6aa8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B6AA8u;
    SET_GPR_U32(ctx, 31, 0x2B6AB0u);
    ctx->pc = 0x2B6AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6AA8u;
            // 0x2b6aac: 0x24a5efb0  addiu       $a1, $a1, -0x1050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6AB0u; }
        if (ctx->pc != 0x2B6AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6AB0u; }
        if (ctx->pc != 0x2B6AB0u) { return; }
    }
    ctx->pc = 0x2B6AB0u;
label_2b6ab0:
    // 0x2b6ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ab4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2b6ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6ab8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b6ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6abc: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B6ABCu;
    SET_GPR_U32(ctx, 31, 0x2B6AC4u);
    ctx->pc = 0x2B6AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6ABCu;
            // 0x2b6ac0: 0x26070004  addiu       $a3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6AC4u; }
        if (ctx->pc != 0x2B6AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6AC4u; }
        if (ctx->pc != 0x2B6AC4u) { return; }
    }
    ctx->pc = 0x2B6AC4u;
label_2b6ac4:
    // 0x2b6ac4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b6ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6AD0u;
            // 0x2b6ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6AD8u;
}
