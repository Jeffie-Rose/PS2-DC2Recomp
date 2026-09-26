#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAWEP2_ST_L__FP9SPI_STACKi
// Address: 0x194ba0 - 0x194c14
void ps2__DATAWEP2_ST_L__FP9SPI_STACKi_0x194ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAWEP2_ST_L__FP9SPI_STACKi_0x194ba0");
#endif

    switch (ctx->pc) {
        case 0x194bd0u: goto label_194bd0;
        case 0x194bdcu: goto label_194bdc;
        default: break;
    }

    ctx->pc = 0x194ba0u;

    // 0x194ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194ba4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194ba8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194bac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194bb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194bb4: 0x8f828b64  lw          $v0, -0x749C($gp)
    ctx->pc = 0x194bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194bb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194BB8u;
    {
        const bool branch_taken_0x194bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BB8u;
            // 0x194bbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bb8) {
            ctx->pc = 0x194BC8u;
            goto label_194bc8;
        }
    }
    ctx->pc = 0x194BC0u;
    // 0x194bc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x194BC0u;
    {
        const bool branch_taken_0x194bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BC0u;
            // 0x194bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bc0) {
            ctx->pc = 0x194BFCu;
            goto label_194bfc;
        }
    }
    ctx->pc = 0x194BC8u;
label_194bc8:
    // 0x194bc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x194bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_194bd0:
    // 0x194bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bd4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194BD4u;
    SET_GPR_U32(ctx, 31, 0x194BDCu);
    ctx->pc = 0x194BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194BD4u;
            // 0x194bd8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BDCu; }
        if (ctx->pc != 0x194BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BDCu; }
        if (ctx->pc != 0x194BDCu) { return; }
    }
    ctx->pc = 0x194BDCu;
label_194bdc:
    // 0x194bdc: 0x8f848b64  lw          $a0, -0x749C($gp)
    ctx->pc = 0x194bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194be0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x194be4: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x194be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x194be8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x194be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x194bec: 0xa482001c  sh          $v0, 0x1C($a0)
    ctx->pc = 0x194becu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x194bf0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x194BF0u;
    {
        const bool branch_taken_0x194bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194BF0u;
            // 0x194bf4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194bf0) {
            ctx->pc = 0x194BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194bd0;
        }
    }
    ctx->pc = 0x194BF8u;
    // 0x194bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194bfc:
    // 0x194bfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194c00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194c04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194c04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x194C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C0Cu;
            // 0x194c10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194C14u;
}
