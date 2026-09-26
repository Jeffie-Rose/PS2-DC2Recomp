#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetupMints__FP6CSceneP16CUserDataManager
// Address: 0x1e9e40 - 0x1e9fc8
void SetupMints__FP6CSceneP16CUserDataManager_0x1e9e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupMints__FP6CSceneP16CUserDataManager_0x1e9e40");
#endif

    switch (ctx->pc) {
        case 0x1e9e6cu: goto label_1e9e6c;
        case 0x1e9e78u: goto label_1e9e78;
        case 0x1e9e84u: goto label_1e9e84;
        case 0x1e9ea4u: goto label_1e9ea4;
        case 0x1e9f04u: goto label_1e9f04;
        case 0x1e9f0cu: goto label_1e9f0c;
        case 0x1e9f3cu: goto label_1e9f3c;
        case 0x1e9f50u: goto label_1e9f50;
        case 0x1e9f6cu: goto label_1e9f6c;
        case 0x1e9f78u: goto label_1e9f78;
        default: break;
    }

    ctx->pc = 0x1e9e40u;

    // 0x1e9e40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e9e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e9e44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e9e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e9e48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e9e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e9e4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e9e50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e9e54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9e58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9e60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e9e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e64: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1E9E64u;
    SET_GPR_U32(ctx, 31, 0x1E9E6Cu);
    ctx->pc = 0x1E9E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E64u;
            // 0x1e9e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E6Cu; }
        if (ctx->pc != 0x1E9E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E6Cu; }
        if (ctx->pc != 0x1E9E6Cu) { return; }
    }
    ctx->pc = 0x1E9E6Cu;
label_1e9e6c:
    // 0x1e9e6c: 0x24500170  addiu       $s0, $v0, 0x170
    ctx->pc = 0x1e9e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1e9e70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e9e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e9e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e78:
    // 0x1e9e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9e7c: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1E9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E9E84u);
    ctx->pc = 0x1E9E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9E7Cu;
            // 0x1e9e80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E84u; }
        if (ctx->pc != 0x1E9E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9E84u; }
        if (ctx->pc != 0x1E9E84u) { return; }
    }
    ctx->pc = 0x1E9E84u;
label_1e9e84:
    // 0x1e9e84: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e9e88: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1e9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1e9e8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e9e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e9e90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e9e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9e94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9E94u;
    {
        const bool branch_taken_0x1e9e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9e94) {
            ctx->pc = 0x1E9EA4u;
            goto label_1e9ea4;
        }
    }
    ctx->pc = 0x1E9E9Cu;
    // 0x1e9e9c: 0xc05af58  jal         func_16BD60
    ctx->pc = 0x1E9E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E9EA4u);
    ctx->pc = 0x16BD60u;
    if (runtime->hasFunction(0x16BD60u)) {
        auto targetFn = runtime->lookupFunction(0x16BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EA4u; }
        if (ctx->pc != 0x1E9EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetParent__12CActionCharaFv_0x16bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9EA4u; }
        if (ctx->pc != 0x1E9EA4u) { return; }
    }
    ctx->pc = 0x1E9EA4u;
label_1e9ea4:
    // 0x1e9ea4: 0x0  nop
    ctx->pc = 0x1e9ea4u;
    // NOP
    // 0x1e9ea8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e9ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e9eac: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1e9eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e9eb0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1E9EB0u;
    {
        const bool branch_taken_0x1e9eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EB0u;
            // 0x1e9eb4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9eb0) {
            ctx->pc = 0x1E9E78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e9e78;
        }
    }
    ctx->pc = 0x1E9EB8u;
    // 0x1e9eb8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1e9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1e9ebc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1e9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x1e9ec0: 0x2442d940  addiu       $v0, $v0, -0x26C0
    ctx->pc = 0x1e9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x1e9ec4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e9ec8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e9ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9ecc: 0x2484d950  addiu       $a0, $a0, -0x26B0
    ctx->pc = 0x1e9eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957392));
    // 0x1e9ed0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1e9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e9ed4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1e9ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1e9ed8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1e9ed8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9edc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9ee0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1e9ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1e9ee4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1e9ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1e9ee8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1e9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9EECu;
    {
        const bool branch_taken_0x1e9eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EECu;
            // 0x1e9ef0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9eec) {
            ctx->pc = 0x1E9F08u;
            goto label_1e9f08;
        }
    }
    ctx->pc = 0x1E9EF4u;
    // 0x1e9ef4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1e9ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1e9ef8: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e9ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e9efc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1E9EFCu;
    SET_GPR_U32(ctx, 31, 0x1E9F04u);
    ctx->pc = 0x1E9F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9EFCu;
            // 0x1e9f00: 0x24a584a8  addiu       $a1, $a1, -0x7B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F04u; }
        if (ctx->pc != 0x1E9F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F04u; }
        if (ctx->pc != 0x1E9F04u) { return; }
    }
    ctx->pc = 0x1E9F04u;
label_1e9f04:
    // 0x1e9f04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e9f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f08:
    // 0x1e9f08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e9f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f0c:
    // 0x1e9f0c: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x1e9f0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1e9f10: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e9f10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e9f14: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E9F14u;
    {
        const bool branch_taken_0x1e9f14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F14u;
            // 0x1e9f18: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f14) {
            ctx->pc = 0x1E9F78u;
            goto label_1e9f78;
        }
    }
    ctx->pc = 0x1E9F1Cu;
    // 0x1e9f1c: 0x24530064  addiu       $s3, $v0, 0x64
    ctx->pc = 0x1e9f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1e9f20: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1e9f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e9f24: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E9F24u;
    {
        const bool branch_taken_0x1e9f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f24) {
            ctx->pc = 0x1E9F78u;
            goto label_1e9f78;
        }
    }
    ctx->pc = 0x1E9F2Cu;
    // 0x1e9f2c: 0x8c540080  lw          $s4, 0x80($v0)
    ctx->pc = 0x1e9f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1e9f30: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9f34: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x1E9F34u;
    SET_GPR_U32(ctx, 31, 0x1E9F3Cu);
    ctx->pc = 0x1E9F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F34u;
            // 0x1e9f38: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F3Cu; }
        if (ctx->pc != 0x1E9F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F3Cu; }
        if (ctx->pc != 0x1E9F3Cu) { return; }
    }
    ctx->pc = 0x1E9F3Cu;
label_1e9f3c:
    // 0x1e9f3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9F3Cu;
    {
        const bool branch_taken_0x1e9f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F3Cu;
            // 0x1e9f40: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f3c) {
            ctx->pc = 0x1E9F58u;
            goto label_1e9f58;
        }
    }
    ctx->pc = 0x1E9F44u;
    // 0x1e9f44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e9f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9f48: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1E9F48u;
    SET_GPR_U32(ctx, 31, 0x1E9F50u);
    ctx->pc = 0x1E9F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F48u;
            // 0x1e9f4c: 0x248484b0  addiu       $a0, $a0, -0x7B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F50u; }
        if (ctx->pc != 0x1E9F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F50u; }
        if (ctx->pc != 0x1E9F50u) { return; }
    }
    ctx->pc = 0x1E9F50u;
label_1e9f50:
    // 0x1e9f50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9F50u;
    {
        const bool branch_taken_0x1e9f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f50) {
            ctx->pc = 0x1E9F78u;
            goto label_1e9f78;
        }
    }
    ctx->pc = 0x1E9F58u;
label_1e9f58:
    // 0x1e9f58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e9f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e9f5c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1e9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1e9f60: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x1e9f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1e9f64: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1E9F64u;
    SET_GPR_U32(ctx, 31, 0x1E9F6Cu);
    ctx->pc = 0x1E9F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F64u;
            // 0x1e9f68: 0x246400f0  addiu       $a0, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F6Cu; }
        if (ctx->pc != 0x1E9F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F6Cu; }
        if (ctx->pc != 0x1E9F6Cu) { return; }
    }
    ctx->pc = 0x1E9F6Cu;
label_1e9f6c:
    // 0x1e9f6c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9f70: 0xc05cbc0  jal         func_172F00
    ctx->pc = 0x1E9F70u;
    SET_GPR_U32(ctx, 31, 0x1E9F78u);
    ctx->pc = 0x1E9F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F70u;
            // 0x1e9f74: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172F00u;
    if (runtime->hasFunction(0x172F00u)) {
        auto targetFn = runtime->lookupFunction(0x172F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F78u; }
        if (ctx->pc != 0x1E9F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyOutLine__11CCharacter2FP11CCharacter2_0x172f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F78u; }
        if (ctx->pc != 0x1E9F78u) { return; }
    }
    ctx->pc = 0x1E9F78u;
label_1e9f78:
    // 0x1e9f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e9f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e9f7c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1e9f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e9f80: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1e9f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e9f84: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E9F84u;
    {
        const bool branch_taken_0x1e9f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9F84u;
            // 0x1e9f88: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9f84) {
            ctx->pc = 0x1E9F0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e9f0c;
        }
    }
    ctx->pc = 0x1E9F8Cu;
    // 0x1e9f8c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9f90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9f94: 0xac6006a8  sw          $zero, 0x6A8($v1)
    ctx->pc = 0x1e9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1704), GPR_U32(ctx, 0));
    // 0x1e9f98: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e9f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9f9c: 0xac6006a4  sw          $zero, 0x6A4($v1)
    ctx->pc = 0x1e9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1700), GPR_U32(ctx, 0));
    // 0x1e9fa0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1e9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9fa4: 0xac600670  sw          $zero, 0x670($v1)
    ctx->pc = 0x1e9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 0));
    // 0x1e9fa8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e9fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9fac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e9facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9fb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9FC0u;
            // 0x1e9fc4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9FC8u;
}
