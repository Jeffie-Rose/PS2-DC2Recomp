#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAWEP__FP9SPI_STACKi
// Address: 0x194a00 - 0x194a60
void ps2__DATAWEP__FP9SPI_STACKi_0x194a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAWEP__FP9SPI_STACKi_0x194a00");
#endif

    switch (ctx->pc) {
        case 0x194a24u: goto label_194a24;
        case 0x194a34u: goto label_194a34;
        case 0x194a44u: goto label_194a44;
        default: break;
    }

    ctx->pc = 0x194a00u;

    // 0x194a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194a0c: 0x8f828b64  lw          $v0, -0x749C($gp)
    ctx->pc = 0x194a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194a10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x194A10u;
    {
        const bool branch_taken_0x194a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194A10u;
            // 0x194a14: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a10) {
            ctx->pc = 0x194A2Cu;
            goto label_194a2c;
        }
    }
    ctx->pc = 0x194A18u;
    // 0x194a18: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x194a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x194a1c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x194A1Cu;
    SET_GPR_U32(ctx, 31, 0x194A24u);
    ctx->pc = 0x194A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194A1Cu;
            // 0x194a20: 0x24845270  addiu       $a0, $a0, 0x5270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A24u; }
        if (ctx->pc != 0x194A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A24u; }
        if (ctx->pc != 0x194A24u) { return; }
    }
    ctx->pc = 0x194A24u;
label_194a24:
    // 0x194a24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x194A24u;
    {
        const bool branch_taken_0x194a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194A24u;
            // 0x194a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a24) {
            ctx->pc = 0x194A50u;
            goto label_194a50;
        }
    }
    ctx->pc = 0x194A2Cu;
label_194a2c:
    // 0x194a2c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194A2Cu;
    SET_GPR_U32(ctx, 31, 0x194A34u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A34u; }
        if (ctx->pc != 0x194A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A34u; }
        if (ctx->pc != 0x194A34u) { return; }
    }
    ctx->pc = 0x194A34u;
label_194a34:
    // 0x194a34: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a3c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194A3Cu;
    SET_GPR_U32(ctx, 31, 0x194A44u);
    ctx->pc = 0x194A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194A3Cu;
            // 0x194a40: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A44u; }
        if (ctx->pc != 0x194A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194A44u; }
        if (ctx->pc != 0x194A44u) { return; }
    }
    ctx->pc = 0x194A44u;
label_194a44:
    // 0x194a44: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194a48: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x194a48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x194a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194a50:
    // 0x194a50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x194a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194a58: 0x3e00008  jr          $ra
    ctx->pc = 0x194A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194A58u;
            // 0x194a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194A60u;
}
