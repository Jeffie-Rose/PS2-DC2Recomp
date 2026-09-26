#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAWEP_SPE__FP9SPI_STACKi
// Address: 0x194c20 - 0x194d08
void ps2__DATAWEP_SPE__FP9SPI_STACKi_0x194c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAWEP_SPE__FP9SPI_STACKi_0x194c20");
#endif

    switch (ctx->pc) {
        case 0x194c4cu: goto label_194c4c;
        case 0x194c54u: goto label_194c54;
        case 0x194c68u: goto label_194c68;
        case 0x194c7cu: goto label_194c7c;
        case 0x194c90u: goto label_194c90;
        case 0x194ca4u: goto label_194ca4;
        case 0x194cc8u: goto label_194cc8;
        case 0x194ce8u: goto label_194ce8;
        default: break;
    }

    ctx->pc = 0x194c20u;

    // 0x194c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194c30: 0x8f828b64  lw          $v0, -0x749C($gp)
    ctx->pc = 0x194c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194c34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194C34u;
    {
        const bool branch_taken_0x194c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C34u;
            // 0x194c38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c34) {
            ctx->pc = 0x194C44u;
            goto label_194c44;
        }
    }
    ctx->pc = 0x194C3Cu;
    // 0x194c3c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x194C3Cu;
    {
        const bool branch_taken_0x194c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C3Cu;
            // 0x194c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c3c) {
            ctx->pc = 0x194CF4u;
            goto label_194cf4;
        }
    }
    ctx->pc = 0x194C44u;
label_194c44:
    // 0x194c44: 0xc05190c  jal         func_146430
    ctx->pc = 0x194C44u;
    SET_GPR_U32(ctx, 31, 0x194C4Cu);
    ctx->pc = 0x194C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C44u;
            // 0x194c48: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C4Cu; }
        if (ctx->pc != 0x194C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C4Cu; }
        if (ctx->pc != 0x194C4Cu) { return; }
    }
    ctx->pc = 0x194C4Cu;
label_194c4c:
    // 0x194c4c: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x194C4Cu;
    SET_GPR_U32(ctx, 31, 0x194C54u);
    ctx->pc = 0x194C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C4Cu;
            // 0x194c50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C54u; }
        if (ctx->pc != 0x194C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C54u; }
        if (ctx->pc != 0x194C54u) { return; }
    }
    ctx->pc = 0x194C54u;
label_194c54:
    // 0x194c54: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c5c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x194c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194c60: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194C60u;
    SET_GPR_U32(ctx, 31, 0x194C68u);
    ctx->pc = 0x194C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C60u;
            // 0x194c64: 0xa0620038  sb          $v0, 0x38($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C68u; }
        if (ctx->pc != 0x194C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C68u; }
        if (ctx->pc != 0x194C68u) { return; }
    }
    ctx->pc = 0x194C68u;
label_194c68:
    // 0x194c68: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c70: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x194c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194c74: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194C74u;
    SET_GPR_U32(ctx, 31, 0x194C7Cu);
    ctx->pc = 0x194C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C74u;
            // 0x194c78: 0xa0620046  sb          $v0, 0x46($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 70), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C7Cu; }
        if (ctx->pc != 0x194C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C7Cu; }
        if (ctx->pc != 0x194C7Cu) { return; }
    }
    ctx->pc = 0x194C7Cu;
label_194c7c:
    // 0x194c7c: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c84: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x194c84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194c88: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194C88u;
    SET_GPR_U32(ctx, 31, 0x194C90u);
    ctx->pc = 0x194C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C88u;
            // 0x194c8c: 0xa0620047  sb          $v0, 0x47($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 71), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C90u; }
        if (ctx->pc != 0x194C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C90u; }
        if (ctx->pc != 0x194C90u) { return; }
    }
    ctx->pc = 0x194C90u;
label_194c90:
    // 0x194c90: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c98: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x194c98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x194c9c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194C9Cu;
    SET_GPR_U32(ctx, 31, 0x194CA4u);
    ctx->pc = 0x194CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C9Cu;
            // 0x194ca0: 0xa0620039  sb          $v0, 0x39($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CA4u; }
        if (ctx->pc != 0x194CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CA4u; }
        if (ctx->pc != 0x194CA4u) { return; }
    }
    ctx->pc = 0x194CA4u;
label_194ca4:
    // 0x194ca4: 0x8f848b64  lw          $a0, -0x749C($gp)
    ctx->pc = 0x194ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194ca8: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x194ca8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x194cac: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x194cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x194cb0: 0x8f828b64  lw          $v0, -0x749C($gp)
    ctx->pc = 0x194cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194cb4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x194CB4u;
    {
        const bool branch_taken_0x194cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194CB4u;
            // 0x194cb8: 0xa0400048  sb          $zero, 0x48($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cb4) {
            ctx->pc = 0x194CD0u;
            goto label_194cd0;
        }
    }
    ctx->pc = 0x194CBCu;
    // 0x194cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x194cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194cc0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194CC0u;
    SET_GPR_U32(ctx, 31, 0x194CC8u);
    ctx->pc = 0x194CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194CC0u;
            // 0x194cc4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CC8u; }
        if (ctx->pc != 0x194CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CC8u; }
        if (ctx->pc != 0x194CC8u) { return; }
    }
    ctx->pc = 0x194CC8u;
label_194cc8:
    // 0x194cc8: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194ccc: 0xa0620048  sb          $v0, 0x48($v1)
    ctx->pc = 0x194cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 2));
label_194cd0:
    // 0x194cd0: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194cd4: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x194cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x194cd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x194CD8u;
    {
        const bool branch_taken_0x194cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194CD8u;
            // 0x194cdc: 0xa0600049  sb          $zero, 0x49($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cd8) {
            ctx->pc = 0x194CF0u;
            goto label_194cf0;
        }
    }
    ctx->pc = 0x194CE0u;
    // 0x194ce0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194CE0u;
    SET_GPR_U32(ctx, 31, 0x194CE8u);
    ctx->pc = 0x194CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194CE0u;
            // 0x194ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CE8u; }
        if (ctx->pc != 0x194CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194CE8u; }
        if (ctx->pc != 0x194CE8u) { return; }
    }
    ctx->pc = 0x194CE8u;
label_194ce8:
    // 0x194ce8: 0x8f838b64  lw          $v1, -0x749C($gp)
    ctx->pc = 0x194ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937444)));
    // 0x194cec: 0xa0620049  sb          $v0, 0x49($v1)
    ctx->pc = 0x194cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 73), (uint8_t)GPR_U32(ctx, 2));
label_194cf0:
    // 0x194cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194cf4:
    // 0x194cf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194d00: 0x3e00008  jr          $ra
    ctx->pc = 0x194D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194D00u;
            // 0x194d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194D08u;
}
