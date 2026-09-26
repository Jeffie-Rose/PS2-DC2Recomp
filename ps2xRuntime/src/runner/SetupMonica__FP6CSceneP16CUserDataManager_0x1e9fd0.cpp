#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetupMonica__FP6CSceneP16CUserDataManager
// Address: 0x1e9fd0 - 0x1ea158
void SetupMonica__FP6CSceneP16CUserDataManager_0x1e9fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupMonica__FP6CSceneP16CUserDataManager_0x1e9fd0");
#endif

    switch (ctx->pc) {
        case 0x1e9ffcu: goto label_1e9ffc;
        case 0x1ea008u: goto label_1ea008;
        case 0x1ea014u: goto label_1ea014;
        case 0x1ea034u: goto label_1ea034;
        case 0x1ea09cu: goto label_1ea09c;
        case 0x1ea0a4u: goto label_1ea0a4;
        case 0x1ea0d4u: goto label_1ea0d4;
        case 0x1ea0e8u: goto label_1ea0e8;
        case 0x1ea104u: goto label_1ea104;
        case 0x1ea110u: goto label_1ea110;
        default: break;
    }

    ctx->pc = 0x1e9fd0u;

    // 0x1e9fd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e9fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e9fd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e9fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e9fd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e9fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e9fdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e9fe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e9fe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9ff0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e9ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ff4: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1E9FF4u;
    SET_GPR_U32(ctx, 31, 0x1E9FFCu);
    ctx->pc = 0x1E9FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9FF4u;
            // 0x1e9ff8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FFCu; }
        if (ctx->pc != 0x1E9FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9FFCu; }
        if (ctx->pc != 0x1E9FFCu) { return; }
    }
    ctx->pc = 0x1E9FFCu;
label_1e9ffc:
    // 0x1e9ffc: 0x24500170  addiu       $s0, $v0, 0x170
    ctx->pc = 0x1e9ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1ea000: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ea000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea004: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea008:
    // 0x1ea008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea00c: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1EA00Cu;
    SET_GPR_U32(ctx, 31, 0x1EA014u);
    ctx->pc = 0x1EA010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA00Cu;
            // 0x1ea010: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA014u; }
        if (ctx->pc != 0x1EA014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA014u; }
        if (ctx->pc != 0x1EA014u) { return; }
    }
    ctx->pc = 0x1EA014u;
label_1ea014:
    // 0x1ea014: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1ea014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1ea018: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x1ea018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1ea01c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ea01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ea020: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ea020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea024: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA024u;
    {
        const bool branch_taken_0x1ea024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea024) {
            ctx->pc = 0x1EA034u;
            goto label_1ea034;
        }
    }
    ctx->pc = 0x1EA02Cu;
    // 0x1ea02c: 0xc05af58  jal         func_16BD60
    ctx->pc = 0x1EA02Cu;
    SET_GPR_U32(ctx, 31, 0x1EA034u);
    ctx->pc = 0x16BD60u;
    if (runtime->hasFunction(0x16BD60u)) {
        auto targetFn = runtime->lookupFunction(0x16BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA034u; }
        if (ctx->pc != 0x1EA034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetParent__12CActionCharaFv_0x16bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA034u; }
        if (ctx->pc != 0x1EA034u) { return; }
    }
    ctx->pc = 0x1EA034u;
label_1ea034:
    // 0x1ea034: 0x0  nop
    ctx->pc = 0x1ea034u;
    // NOP
    // 0x1ea038: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ea038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ea03c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1ea03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ea040: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1EA040u;
    {
        const bool branch_taken_0x1ea040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA040u;
            // 0x1ea044: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea040) {
            ctx->pc = 0x1EA008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea008;
        }
    }
    ctx->pc = 0x1EA048u;
    // 0x1ea048: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x1ea048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x1ea04c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1ea04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x1ea050: 0x2463d960  addiu       $v1, $v1, -0x26A0
    ctx->pc = 0x1ea050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957408));
    // 0x1ea054: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ea054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ea058: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1ea058u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea05c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1ea05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea060: 0x2484d970  addiu       $a0, $a0, -0x2690
    ctx->pc = 0x1ea060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957424));
    // 0x1ea064: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1ea064u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1ea068: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1ea068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ea06c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1ea06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1ea070: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1ea070u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea074: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1ea074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea078: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1ea078u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1ea07c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1ea07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1ea080: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ea080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA084u;
    {
        const bool branch_taken_0x1ea084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA084u;
            // 0x1ea088: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea084) {
            ctx->pc = 0x1EA0A0u;
            goto label_1ea0a0;
        }
    }
    ctx->pc = 0x1EA08Cu;
    // 0x1ea08c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ea08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ea090: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1ea090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1ea094: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA094u;
    SET_GPR_U32(ctx, 31, 0x1EA09Cu);
    ctx->pc = 0x1EA098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA094u;
            // 0x1ea098: 0x24a584a8  addiu       $a1, $a1, -0x7B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA09Cu; }
        if (ctx->pc != 0x1EA09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA09Cu; }
        if (ctx->pc != 0x1EA09Cu) { return; }
    }
    ctx->pc = 0x1EA09Cu;
label_1ea09c:
    // 0x1ea09c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ea09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0a0:
    // 0x1ea0a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ea0a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0a4:
    // 0x1ea0a4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x1ea0a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1ea0a8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1ea0a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ea0ac: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EA0ACu;
    {
        const bool branch_taken_0x1ea0ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0ACu;
            // 0x1ea0b0: 0x25d1021  addu        $v0, $s2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0ac) {
            ctx->pc = 0x1EA110u;
            goto label_1ea110;
        }
    }
    ctx->pc = 0x1EA0B4u;
    // 0x1ea0b4: 0x24530064  addiu       $s3, $v0, 0x64
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1ea0b8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1ea0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ea0bc: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EA0BCu;
    {
        const bool branch_taken_0x1ea0bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea0bc) {
            ctx->pc = 0x1EA110u;
            goto label_1ea110;
        }
    }
    ctx->pc = 0x1EA0C4u;
    // 0x1ea0c4: 0x8c540080  lw          $s4, 0x80($v0)
    ctx->pc = 0x1ea0c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1ea0c8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ea0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea0cc: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x1EA0CCu;
    SET_GPR_U32(ctx, 31, 0x1EA0D4u);
    ctx->pc = 0x1EA0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0CCu;
            // 0x1ea0d0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0D4u; }
        if (ctx->pc != 0x1EA0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0D4u; }
        if (ctx->pc != 0x1EA0D4u) { return; }
    }
    ctx->pc = 0x1EA0D4u;
label_1ea0d4:
    // 0x1ea0d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA0D4u;
    {
        const bool branch_taken_0x1ea0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0D4u;
            // 0x1ea0d8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0d4) {
            ctx->pc = 0x1EA0F0u;
            goto label_1ea0f0;
        }
    }
    ctx->pc = 0x1EA0DCu;
    // 0x1ea0dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ea0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea0e0: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1EA0E0u;
    SET_GPR_U32(ctx, 31, 0x1EA0E8u);
    ctx->pc = 0x1EA0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0E0u;
            // 0x1ea0e4: 0x248484b0  addiu       $a0, $a0, -0x7B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0E8u; }
        if (ctx->pc != 0x1EA0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA0E8u; }
        if (ctx->pc != 0x1EA0E8u) { return; }
    }
    ctx->pc = 0x1EA0E8u;
label_1ea0e8:
    // 0x1ea0e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EA0E8u;
    {
        const bool branch_taken_0x1ea0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea0e8) {
            ctx->pc = 0x1EA110u;
            goto label_1ea110;
        }
    }
    ctx->pc = 0x1EA0F0u;
label_1ea0f0:
    // 0x1ea0f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1ea0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ea0f4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1ea0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1ea0f8: 0x8c450090  lw          $a1, 0x90($v0)
    ctx->pc = 0x1ea0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1ea0fc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA0FCu;
    SET_GPR_U32(ctx, 31, 0x1EA104u);
    ctx->pc = 0x1EA100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA0FCu;
            // 0x1ea100: 0x246400f0  addiu       $a0, $v1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA104u; }
        if (ctx->pc != 0x1EA104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA104u; }
        if (ctx->pc != 0x1EA104u) { return; }
    }
    ctx->pc = 0x1EA104u;
label_1ea104:
    // 0x1ea104: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1ea104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea108: 0xc05cbc0  jal         func_172F00
    ctx->pc = 0x1EA108u;
    SET_GPR_U32(ctx, 31, 0x1EA110u);
    ctx->pc = 0x1EA10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA108u;
            // 0x1ea10c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172F00u;
    if (runtime->hasFunction(0x172F00u)) {
        auto targetFn = runtime->lookupFunction(0x172F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA110u; }
        if (ctx->pc != 0x1EA110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyOutLine__11CCharacter2FP11CCharacter2_0x172f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA110u; }
        if (ctx->pc != 0x1EA110u) { return; }
    }
    ctx->pc = 0x1EA110u;
label_1ea110:
    // 0x1ea110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ea110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ea114: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1ea114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ea118: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1ea118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ea11c: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1EA11Cu;
    {
        const bool branch_taken_0x1ea11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA11Cu;
            // 0x1ea120: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea11c) {
            ctx->pc = 0x1EA0A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea0a4;
        }
    }
    ctx->pc = 0x1EA124u;
    // 0x1ea124: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ea124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea12c: 0xac6006a8  sw          $zero, 0x6A8($v1)
    ctx->pc = 0x1ea12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1704), GPR_U32(ctx, 0));
    // 0x1ea130: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1ea130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea134: 0xac620670  sw          $v0, 0x670($v1)
    ctx->pc = 0x1ea134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 2));
    // 0x1ea138: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ea138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea13c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea13cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea140: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ea140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea14c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea14cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea150: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA150u;
            // 0x1ea154: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA158u;
}
