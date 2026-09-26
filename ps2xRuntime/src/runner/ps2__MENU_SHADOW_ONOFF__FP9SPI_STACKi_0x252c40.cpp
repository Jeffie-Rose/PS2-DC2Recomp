#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_SHADOW_ONOFF__FP9SPI_STACKi
// Address: 0x252c40 - 0x252cbc
void ps2__MENU_SHADOW_ONOFF__FP9SPI_STACKi_0x252c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_SHADOW_ONOFF__FP9SPI_STACKi_0x252c40");
#endif

    switch (ctx->pc) {
        case 0x252c7cu: goto label_252c7c;
        case 0x252c9cu: goto label_252c9c;
        default: break;
    }

    ctx->pc = 0x252c40u;

    // 0x252c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252c44: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x252c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252c48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252c50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252c54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c58: 0x8f8297c0  lw          $v0, -0x6840($gp)
    ctx->pc = 0x252c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252c5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x252c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x252c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252c64: 0xa0450046  sb          $a1, 0x46($v0)
    ctx->pc = 0x252c64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 70), (uint8_t)GPR_U32(ctx, 5));
    // 0x252c68: 0x8f8297c0  lw          $v0, -0x6840($gp)
    ctx->pc = 0x252c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252c6c: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252C6Cu;
    {
        const bool branch_taken_0x252c6c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x252C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252C6Cu;
            // 0x252c70: 0xa0430047  sb          $v1, 0x47($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c6c) {
            ctx->pc = 0x252C88u;
            goto label_252c88;
        }
    }
    ctx->pc = 0x252C74u;
    // 0x252c74: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252C74u;
    SET_GPR_U32(ctx, 31, 0x252C7Cu);
    ctx->pc = 0x252C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252C74u;
            // 0x252c78: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C7Cu; }
        if (ctx->pc != 0x252C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C7Cu; }
        if (ctx->pc != 0x252C7Cu) { return; }
    }
    ctx->pc = 0x252C7Cu;
label_252c7c:
    // 0x252c7c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x252c7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x252c80: 0x8f8297c0  lw          $v0, -0x6840($gp)
    ctx->pc = 0x252c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252c84: 0xa0430046  sb          $v1, 0x46($v0)
    ctx->pc = 0x252c84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 70), (uint8_t)GPR_U32(ctx, 3));
label_252c88:
    // 0x252c88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x252c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252c8c: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252C8Cu;
    {
        const bool branch_taken_0x252c8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x252C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252C8Cu;
            // 0x252c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c8c) {
            ctx->pc = 0x252CA4u;
            goto label_252ca4;
        }
    }
    ctx->pc = 0x252C94u;
    // 0x252c94: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252C94u;
    SET_GPR_U32(ctx, 31, 0x252C9Cu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C9Cu; }
        if (ctx->pc != 0x252C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C9Cu; }
        if (ctx->pc != 0x252C9Cu) { return; }
    }
    ctx->pc = 0x252C9Cu;
label_252c9c:
    // 0x252c9c: 0x8f8397c0  lw          $v1, -0x6840($gp)
    ctx->pc = 0x252c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940608)));
    // 0x252ca0: 0xa0620047  sb          $v0, 0x47($v1)
    ctx->pc = 0x252ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 71), (uint8_t)GPR_U32(ctx, 2));
label_252ca4:
    // 0x252ca4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252cac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252cb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x252CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252CB4u;
            // 0x252cb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252CBCu;
}
