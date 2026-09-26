#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpFISH_PLACE__FP9SPI_STACKi
// Address: 0x303c50 - 0x303d1c
void fpFISH_PLACE__FP9SPI_STACKi_0x303c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpFISH_PLACE__FP9SPI_STACKi_0x303c50");
#endif

    switch (ctx->pc) {
        case 0x303c80u: goto label_303c80;
        case 0x303ca8u: goto label_303ca8;
        case 0x303cc8u: goto label_303cc8;
        case 0x303cd8u: goto label_303cd8;
        case 0x303ce4u: goto label_303ce4;
        default: break;
    }

    ctx->pc = 0x303c50u;

    // 0x303c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x303c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x303c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x303c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x303c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x303c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x303c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303c60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303c64: 0x8f82a0fc  lw          $v0, -0x5F04($gp)
    ctx->pc = 0x303c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303c68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303C68u;
    {
        const bool branch_taken_0x303c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303C68u;
            // 0x303c6c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c68) {
            ctx->pc = 0x303C78u;
            goto label_303c78;
        }
    }
    ctx->pc = 0x303C70u;
    // 0x303c70: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x303C70u;
    {
        const bool branch_taken_0x303c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303C70u;
            // 0x303c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c70) {
            ctx->pc = 0x303D04u;
            goto label_303d04;
        }
    }
    ctx->pc = 0x303C78u;
label_303c78:
    // 0x303c78: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x303C78u;
    SET_GPR_U32(ctx, 31, 0x303C80u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C80u; }
        if (ctx->pc != 0x303C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C80u; }
        if (ctx->pc != 0x303C80u) { return; }
    }
    ctx->pc = 0x303C80u;
label_303c80:
    // 0x303c80: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303C80u;
    {
        const bool branch_taken_0x303c80 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x303C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303C80u;
            // 0x303c84: 0x28430005  slti        $v1, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c80) {
            ctx->pc = 0x303C90u;
            goto label_303c90;
        }
    }
    ctx->pc = 0x303C88u;
    // 0x303c88: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x303C88u;
    {
        const bool branch_taken_0x303c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x303c88) {
            ctx->pc = 0x303C94u;
            goto label_303c94;
        }
    }
    ctx->pc = 0x303C90u;
label_303c90:
    // 0x303c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303c94:
    // 0x303c94: 0x8f83a0fc  lw          $v1, -0x5F04($gp)
    ctx->pc = 0x303c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c9c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x303c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x303ca0: 0xc05191c  jal         func_146470
    ctx->pc = 0x303CA0u;
    SET_GPR_U32(ctx, 31, 0x303CA8u);
    ctx->pc = 0x303CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303CA0u;
            // 0x303ca4: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303CA8u; }
        if (ctx->pc != 0x303CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303CA8u; }
        if (ctx->pc != 0x303CA8u) { return; }
    }
    ctx->pc = 0x303CA8u;
label_303ca8:
    // 0x303ca8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x303CA8u;
    {
        const bool branch_taken_0x303ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303CA8u;
            // 0x303cac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ca8) {
            ctx->pc = 0x303CD4u;
            goto label_303cd4;
        }
    }
    ctx->pc = 0x303CB0u;
    // 0x303cb0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x303cb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303cb4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x303CB4u;
    {
        const bool branch_taken_0x303cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303cb4) {
            ctx->pc = 0x303CD0u;
            goto label_303cd0;
        }
    }
    ctx->pc = 0x303CBCu;
    // 0x303cbc: 0x8f85a0f8  lw          $a1, -0x5F08($gp)
    ctx->pc = 0x303cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942968)));
    // 0x303cc0: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x303CC0u;
    SET_GPR_U32(ctx, 31, 0x303CC8u);
    ctx->pc = 0x303CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303CC0u;
            // 0x303cc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303CC8u; }
        if (ctx->pc != 0x303CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303CC8u; }
        if (ctx->pc != 0x303CC8u) { return; }
    }
    ctx->pc = 0x303CC8u;
label_303cc8:
    // 0x303cc8: 0x8f83a0fc  lw          $v1, -0x5F04($gp)
    ctx->pc = 0x303cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303ccc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x303cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_303cd0:
    // 0x303cd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x303cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303cd4:
    // 0x303cd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x303cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303cd8:
    // 0x303cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303cdc: 0xc05190c  jal         func_146430
    ctx->pc = 0x303CDCu;
    SET_GPR_U32(ctx, 31, 0x303CE4u);
    ctx->pc = 0x303CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303CDCu;
            // 0x303ce0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303CE4u; }
        if (ctx->pc != 0x303CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303CE4u; }
        if (ctx->pc != 0x303CE4u) { return; }
    }
    ctx->pc = 0x303CE4u;
label_303ce4:
    // 0x303ce4: 0x8f83a0fc  lw          $v1, -0x5F04($gp)
    ctx->pc = 0x303ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303ce8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x303ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x303cec: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x303cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x303cf0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x303cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x303cf4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x303cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x303cf8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x303CF8u;
    {
        const bool branch_taken_0x303cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303CF8u;
            // 0x303cfc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303cf8) {
            ctx->pc = 0x303CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_303cd8;
        }
    }
    ctx->pc = 0x303D00u;
    // 0x303d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303d04:
    // 0x303d04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x303d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303d08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x303d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303d0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303d10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303d10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303d14: 0x3e00008  jr          $ra
    ctx->pc = 0x303D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303D14u;
            // 0x303d18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303D1Cu;
}
