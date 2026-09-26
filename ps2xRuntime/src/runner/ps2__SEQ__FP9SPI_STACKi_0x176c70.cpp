#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SEQ__FP9SPI_STACKi
// Address: 0x176c70 - 0x176d60
void ps2__SEQ__FP9SPI_STACKi_0x176c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SEQ__FP9SPI_STACKi_0x176c70");
#endif

    switch (ctx->pc) {
        case 0x176cc4u: goto label_176cc4;
        case 0x176cd0u: goto label_176cd0;
        case 0x176ce8u: goto label_176ce8;
        case 0x176d08u: goto label_176d08;
        case 0x176d24u: goto label_176d24;
        default: break;
    }

    ctx->pc = 0x176c70u;

    // 0x176c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x176c7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176c80: 0x8f8389c0  lw          $v1, -0x7640($gp)
    ctx->pc = 0x176c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176c84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x176C84u;
    {
        const bool branch_taken_0x176c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C84u;
            // 0x176c88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c84) {
            ctx->pc = 0x176C98u;
            goto label_176c98;
        }
    }
    ctx->pc = 0x176C8Cu;
    // 0x176c8c: 0x8f8289bc  lw          $v0, -0x7644($gp)
    ctx->pc = 0x176c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176c90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176C90u;
    {
        const bool branch_taken_0x176c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176c90) {
            ctx->pc = 0x176CA0u;
            goto label_176ca0;
        }
    }
    ctx->pc = 0x176C98u;
label_176c98:
    // 0x176c98: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x176C98u;
    {
        const bool branch_taken_0x176c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176C98u;
            // 0x176c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176c98) {
            ctx->pc = 0x176D4Cu;
            goto label_176d4c;
        }
    }
    ctx->pc = 0x176CA0u;
label_176ca0:
    // 0x176ca0: 0xa0600022  sb          $zero, 0x22($v1)
    ctx->pc = 0x176ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x176ca4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x176ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176ca8: 0x8f8289c0  lw          $v0, -0x7640($gp)
    ctx->pc = 0x176ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176cac: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x176cb0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x176cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x176cb4: 0xac450024  sw          $a1, 0x24($v0)
    ctx->pc = 0x176cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
    // 0x176cb8: 0x8f8289c0  lw          $v0, -0x7640($gp)
    ctx->pc = 0x176cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176cbc: 0xc05191c  jal         func_146470
    ctx->pc = 0x176CBCu;
    SET_GPR_U32(ctx, 31, 0x176CC4u);
    ctx->pc = 0x176CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176CBCu;
            // 0x176cc0: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CC4u; }
        if (ctx->pc != 0x176CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CC4u; }
        if (ctx->pc != 0x176CC4u) { return; }
    }
    ctx->pc = 0x176CC4u;
label_176cc4:
    // 0x176cc4: 0x8f8489c0  lw          $a0, -0x7640($gp)
    ctx->pc = 0x176cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176cc8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x176CC8u;
    SET_GPR_U32(ctx, 31, 0x176CD0u);
    ctx->pc = 0x176CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176CC8u;
            // 0x176ccc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CD0u; }
        if (ctx->pc != 0x176CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CD0u; }
        if (ctx->pc != 0x176CD0u) { return; }
    }
    ctx->pc = 0x176CD0u;
label_176cd0:
    // 0x176cd0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x176cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x176cd4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x176CD4u;
    {
        const bool branch_taken_0x176cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176CD4u;
            // 0x176cd8: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cd4) {
            ctx->pc = 0x176CF4u;
            goto label_176cf4;
        }
    }
    ctx->pc = 0x176CDCu;
    // 0x176cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176ce0: 0xc05190c  jal         func_146430
    ctx->pc = 0x176CE0u;
    SET_GPR_U32(ctx, 31, 0x176CE8u);
    ctx->pc = 0x176CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176CE0u;
            // 0x176ce4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CE8u; }
        if (ctx->pc != 0x176CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176CE8u; }
        if (ctx->pc != 0x176CE8u) { return; }
    }
    ctx->pc = 0x176CE8u;
label_176ce8:
    // 0x176ce8: 0x8f8289c0  lw          $v0, -0x7640($gp)
    ctx->pc = 0x176ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176cec: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x176cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x176cf0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x176cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_176cf4:
    // 0x176cf4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x176CF4u;
    {
        const bool branch_taken_0x176cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176CF4u;
            // 0x176cf8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176cf4) {
            ctx->pc = 0x176D14u;
            goto label_176d14;
        }
    }
    ctx->pc = 0x176CFCu;
    // 0x176cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176d00: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x176D00u;
    SET_GPR_U32(ctx, 31, 0x176D08u);
    ctx->pc = 0x176D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176D00u;
            // 0x176d04: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D08u; }
        if (ctx->pc != 0x176D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D08u; }
        if (ctx->pc != 0x176D08u) { return; }
    }
    ctx->pc = 0x176D08u;
label_176d08:
    // 0x176d08: 0x8f8389c0  lw          $v1, -0x7640($gp)
    ctx->pc = 0x176d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176d0c: 0xa0620022  sb          $v0, 0x22($v1)
    ctx->pc = 0x176d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x176d10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x176d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_176d14:
    // 0x176d14: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176D14u;
    {
        const bool branch_taken_0x176d14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x176D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D14u;
            // 0x176d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176d14) {
            ctx->pc = 0x176D2Cu;
            goto label_176d2c;
        }
    }
    ctx->pc = 0x176D1Cu;
    // 0x176d1c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x176D1Cu;
    SET_GPR_U32(ctx, 31, 0x176D24u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D24u; }
        if (ctx->pc != 0x176D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176D24u; }
        if (ctx->pc != 0x176D24u) { return; }
    }
    ctx->pc = 0x176D24u;
label_176d24:
    // 0x176d24: 0x8f8389c0  lw          $v1, -0x7640($gp)
    ctx->pc = 0x176d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176d28: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x176d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_176d2c:
    // 0x176d2c: 0x8f8389c0  lw          $v1, -0x7640($gp)
    ctx->pc = 0x176d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937024)));
    // 0x176d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176d34: 0x8f8489bc  lw          $a0, -0x7644($gp)
    ctx->pc = 0x176d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
    // 0x176d38: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x176d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x176d3c: 0xaf8389c0  sw          $v1, -0x7640($gp)
    ctx->pc = 0x176d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937024), GPR_U32(ctx, 3));
    // 0x176d40: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x176d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x176d44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x176d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176d48: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x176d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_176d4c:
    // 0x176d4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d58: 0x3e00008  jr          $ra
    ctx->pc = 0x176D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176D58u;
            // 0x176d5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176D60u;
}
