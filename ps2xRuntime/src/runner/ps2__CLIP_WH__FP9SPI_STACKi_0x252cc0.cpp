#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CLIP_WH__FP9SPI_STACKi
// Address: 0x252cc0 - 0x252d30
void ps2__CLIP_WH__FP9SPI_STACKi_0x252cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CLIP_WH__FP9SPI_STACKi_0x252cc0");
#endif

    switch (ctx->pc) {
        case 0x252d00u: goto label_252d00;
        case 0x252d0cu: goto label_252d0c;
        default: break;
    }

    ctx->pc = 0x252cc0u;

    // 0x252cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252ccc: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252cd0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252CD0u;
    {
        const bool branch_taken_0x252cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252CD0u;
            // 0x252cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cd0) {
            ctx->pc = 0x252CE0u;
            goto label_252ce0;
        }
    }
    ctx->pc = 0x252CD8u;
    // 0x252cd8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x252CD8u;
    {
        const bool branch_taken_0x252cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252CD8u;
            // 0x252cdc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cd8) {
            ctx->pc = 0x252D24u;
            goto label_252d24;
        }
    }
    ctx->pc = 0x252CE0u;
label_252ce0:
    // 0x252ce0: 0x8f868780  lw          $a2, -0x7880($gp)
    ctx->pc = 0x252ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x252ce4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x252ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252ce8: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x252ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x252cec: 0x24d0ffff  addiu       $s0, $a2, -0x1
    ctx->pc = 0x252cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x252cf0: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x252CF0u;
    {
        const bool branch_taken_0x252cf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x252CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252CF0u;
            // 0x252cf4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cf0) {
            ctx->pc = 0x252D0Cu;
            goto label_252d0c;
        }
    }
    ctx->pc = 0x252CF8u;
    // 0x252cf8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252CF8u;
    SET_GPR_U32(ctx, 31, 0x252D00u);
    ctx->pc = 0x252CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252CF8u;
            // 0x252cfc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D00u; }
        if (ctx->pc != 0x252D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D00u; }
        if (ctx->pc != 0x252D00u) { return; }
    }
    ctx->pc = 0x252D00u;
label_252d00:
    // 0x252d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d04: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252D04u;
    SET_GPR_U32(ctx, 31, 0x252D0Cu);
    ctx->pc = 0x252D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252D04u;
            // 0x252d08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D0Cu; }
        if (ctx->pc != 0x252D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D0Cu; }
        if (ctx->pc != 0x252D0Cu) { return; }
    }
    ctx->pc = 0x252D0Cu;
label_252d0c:
    // 0x252d0c: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252d10: 0xa4700004  sh          $s0, 0x4($v1)
    ctx->pc = 0x252d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x252d14: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252d18: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x252d18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x252d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_252d24:
    // 0x252d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252d28: 0x3e00008  jr          $ra
    ctx->pc = 0x252D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D28u;
            // 0x252d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252D30u;
}
