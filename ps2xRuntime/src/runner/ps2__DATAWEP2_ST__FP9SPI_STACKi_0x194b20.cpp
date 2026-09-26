#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAWEP2_ST__FP9SPI_STACKi
// Address: 0x194b20 - 0x194b94
void ps2__DATAWEP2_ST__FP9SPI_STACKi_0x194b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAWEP2_ST__FP9SPI_STACKi_0x194b20");
#endif

    switch (ctx->pc) {
        case 0x194b50u: goto label_194b50;
        case 0x194b5cu: goto label_194b5c;
        default: break;
    }

    ctx->pc = 0x194b20u;

    // 0x194b20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194b24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194b28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194b2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194b30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194b34: 0x8f828b64  lw          $v0, -0x749C($gp)
    ctx->pc = 0x194b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194b38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194B38u;
    {
        const bool branch_taken_0x194b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B38u;
            // 0x194b3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b38) {
            ctx->pc = 0x194B48u;
            goto label_194b48;
        }
    }
    ctx->pc = 0x194B40u;
    // 0x194b40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x194B40u;
    {
        const bool branch_taken_0x194b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B40u;
            // 0x194b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b40) {
            ctx->pc = 0x194B7Cu;
            goto label_194b7c;
        }
    }
    ctx->pc = 0x194B48u;
label_194b48:
    // 0x194b48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x194b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194b50:
    // 0x194b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b54: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194B54u;
    SET_GPR_U32(ctx, 31, 0x194B5Cu);
    ctx->pc = 0x194B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194B54u;
            // 0x194b58: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B5Cu; }
        if (ctx->pc != 0x194B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194B5Cu; }
        if (ctx->pc != 0x194B5Cu) { return; }
    }
    ctx->pc = 0x194B5Cu;
label_194b5c:
    // 0x194b5c: 0x8f848b64  lw          $a0, -0x749C($gp)
    ctx->pc = 0x194b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194b60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194b64: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x194b64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x194b68: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x194b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x194b6c: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x194b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x194b70: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x194B70u;
    {
        const bool branch_taken_0x194b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B70u;
            // 0x194b74: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194b70) {
            ctx->pc = 0x194B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194b50;
        }
    }
    ctx->pc = 0x194B78u;
    // 0x194b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194b7c:
    // 0x194b7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194b80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x194B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194B8Cu;
            // 0x194b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194B94u;
}
