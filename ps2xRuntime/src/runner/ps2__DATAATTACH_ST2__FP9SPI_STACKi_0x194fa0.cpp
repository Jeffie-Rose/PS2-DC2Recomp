#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAATTACH_ST2__FP9SPI_STACKi
// Address: 0x194fa0 - 0x195014
void ps2__DATAATTACH_ST2__FP9SPI_STACKi_0x194fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAATTACH_ST2__FP9SPI_STACKi_0x194fa0");
#endif

    switch (ctx->pc) {
        case 0x194fd0u: goto label_194fd0;
        case 0x194fdcu: goto label_194fdc;
        default: break;
    }

    ctx->pc = 0x194fa0u;

    // 0x194fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194fa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194fa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194fac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194fb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194fb4: 0x8f828b6c  lw          $v0, -0x7494($gp)
    ctx->pc = 0x194fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937452)));
    // 0x194fb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194FB8u;
    {
        const bool branch_taken_0x194fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194FB8u;
            // 0x194fbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fb8) {
            ctx->pc = 0x194FC8u;
            goto label_194fc8;
        }
    }
    ctx->pc = 0x194FC0u;
    // 0x194fc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x194FC0u;
    {
        const bool branch_taken_0x194fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194FC0u;
            // 0x194fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194fc0) {
            ctx->pc = 0x194FFCu;
            goto label_194ffc;
        }
    }
    ctx->pc = 0x194FC8u;
label_194fc8:
    // 0x194fc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x194fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194fd0:
    // 0x194fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194fd4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194FD4u;
    SET_GPR_U32(ctx, 31, 0x194FDCu);
    ctx->pc = 0x194FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194FD4u;
            // 0x194fd8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FDCu; }
        if (ctx->pc != 0x194FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194FDCu; }
        if (ctx->pc != 0x194FDCu) { return; }
    }
    ctx->pc = 0x194FDCu;
label_194fdc:
    // 0x194fdc: 0x8f848b6c  lw          $a0, -0x7494($gp)
    ctx->pc = 0x194fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937452)));
    // 0x194fe0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194fe4: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x194fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x194fe8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x194fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x194fec: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x194fecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x194ff0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x194FF0u;
    {
        const bool branch_taken_0x194ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194FF0u;
            // 0x194ff4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194ff0) {
            ctx->pc = 0x194FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194fd0;
        }
    }
    ctx->pc = 0x194FF8u;
    // 0x194ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194ffc:
    // 0x194ffc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x195000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19500c: 0x3e00008  jr          $ra
    ctx->pc = 0x19500Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19500Cu;
            // 0x195010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195014u;
}
