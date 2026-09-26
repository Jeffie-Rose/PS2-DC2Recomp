#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_UV_SIZE__FP12RS_STACKDATAi
// Address: 0x2e5960 - 0x2e5a3c
void ps2__SPT_SET_UV_SIZE__FP12RS_STACKDATAi_0x2e5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_UV_SIZE__FP12RS_STACKDATAi_0x2e5960");
#endif

    switch (ctx->pc) {
        case 0x2e5988u: goto label_2e5988;
        case 0x2e5998u: goto label_2e5998;
        case 0x2e59a8u: goto label_2e59a8;
        case 0x2e59b8u: goto label_2e59b8;
        case 0x2e59c8u: goto label_2e59c8;
        case 0x2e59dcu: goto label_2e59dc;
        case 0x2e59e8u: goto label_2e59e8;
        case 0x2e59f0u: goto label_2e59f0;
        default: break;
    }

    ctx->pc = 0x2e5960u;

    // 0x2e5960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e5964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e5968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e5968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e596c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e5970: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e5970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e5974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5978: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e597c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e5980: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5980u;
    SET_GPR_U32(ctx, 31, 0x2E5988u);
    ctx->pc = 0x2E5984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5980u;
            // 0x2e5984: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5988u; }
        if (ctx->pc != 0x2E5988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5988u; }
        if (ctx->pc != 0x2E5988u) { return; }
    }
    ctx->pc = 0x2E5988u;
label_2e5988:
    // 0x2e5988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e598c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e598cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5990: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5990u;
    SET_GPR_U32(ctx, 31, 0x2E5998u);
    ctx->pc = 0x2E5994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5990u;
            // 0x2e5994: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5998u; }
        if (ctx->pc != 0x2E5998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5998u; }
        if (ctx->pc != 0x2E5998u) { return; }
    }
    ctx->pc = 0x2E5998u;
label_2e5998:
    // 0x2e5998: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e599c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e599cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e59a0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E59A0u;
    SET_GPR_U32(ctx, 31, 0x2E59A8u);
    ctx->pc = 0x2E59A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59A0u;
            // 0x2e59a4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59A8u; }
        if (ctx->pc != 0x2E59A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59A8u; }
        if (ctx->pc != 0x2E59A8u) { return; }
    }
    ctx->pc = 0x2E59A8u;
label_2e59a8:
    // 0x2e59a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e59a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e59acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e59b0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E59B0u;
    SET_GPR_U32(ctx, 31, 0x2E59B8u);
    ctx->pc = 0x2E59B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59B0u;
            // 0x2e59b4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59B8u; }
        if (ctx->pc != 0x2E59B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59B8u; }
        if (ctx->pc != 0x2E59B8u) { return; }
    }
    ctx->pc = 0x2E59B8u;
label_2e59b8:
    // 0x2e59b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e59b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e59bc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2e59bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e59c0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E59C0u;
    SET_GPR_U32(ctx, 31, 0x2E59C8u);
    ctx->pc = 0x2E59C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59C0u;
            // 0x2e59c4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59C8u; }
        if (ctx->pc != 0x2E59C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59C8u; }
        if (ctx->pc != 0x2E59C8u) { return; }
    }
    ctx->pc = 0x2E59C8u;
label_2e59c8:
    // 0x2e59c8: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2e59c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e59cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E59CCu;
    {
        const bool branch_taken_0x2e59cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E59D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59CCu;
            // 0x2e59d0: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59cc) {
            ctx->pc = 0x2E59E0u;
            goto label_2e59e0;
        }
    }
    ctx->pc = 0x2E59D4u;
    // 0x2e59d4: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E59D4u;
    SET_GPR_U32(ctx, 31, 0x2E59DCu);
    ctx->pc = 0x2E59D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59D4u;
            // 0x2e59d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59DCu; }
        if (ctx->pc != 0x2E59DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59DCu; }
        if (ctx->pc != 0x2E59DCu) { return; }
    }
    ctx->pc = 0x2E59DCu;
label_2e59dc:
    // 0x2e59dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e59dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e59e0:
    // 0x2e59e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E59E0u;
    {
        const bool branch_taken_0x2e59e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E59E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59E0u;
            // 0x2e59e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59e0) {
            ctx->pc = 0x2E5A0Cu;
            goto label_2e5a0c;
        }
    }
    ctx->pc = 0x2E59E8u;
label_2e59e8:
    // 0x2e59e8: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E59E8u;
    SET_GPR_U32(ctx, 31, 0x2E59F0u);
    ctx->pc = 0x2E59ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59E8u;
            // 0x2e59ec: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59F0u; }
        if (ctx->pc != 0x2E59F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E59F0u; }
        if (ctx->pc != 0x2E59F0u) { return; }
    }
    ctx->pc = 0x2E59F0u;
label_2e59f0:
    // 0x2e59f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E59F0u;
    {
        const bool branch_taken_0x2e59f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E59F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59F0u;
            // 0x2e59f4: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59f0) {
            ctx->pc = 0x2E5A00u;
            goto label_2e5a00;
        }
    }
    ctx->pc = 0x2E59F8u;
    // 0x2e59f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E59F8u;
    {
        const bool branch_taken_0x2e59f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E59FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59F8u;
            // 0x2e59fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59f8) {
            ctx->pc = 0x2E5A20u;
            goto label_2e5a20;
        }
    }
    ctx->pc = 0x2E5A00u;
label_2e5a00:
    // 0x2e5a00: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5a04: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e5a04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e5a08: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x2e5a08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
label_2e5a0c:
    // 0x2e5a0c: 0x0  nop
    ctx->pc = 0x2e5a0cu;
    // NOP
    // 0x2e5a10: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e5a14: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e5a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5a18: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E5A18u;
    {
        const bool branch_taken_0x2e5a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A18u;
            // 0x2e5a1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a18) {
            ctx->pc = 0x2E59E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E5A20u;
label_2e5a20:
    // 0x2e5a20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e5a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A34u;
            // 0x2e5a38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5A3Cu;
}
