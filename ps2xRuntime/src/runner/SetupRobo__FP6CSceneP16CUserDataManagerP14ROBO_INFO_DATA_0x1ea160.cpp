#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetupRobo__FP6CSceneP16CUserDataManagerP14ROBO_INFO_DATA
// Address: 0x1ea160 - 0x1ea410
void SetupRobo__FP6CSceneP16CUserDataManagerP14ROBO_INFO_DATA_0x1ea160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetupRobo__FP6CSceneP16CUserDataManagerP14ROBO_INFO_DATA_0x1ea160");
#endif

    switch (ctx->pc) {
        case 0x1ea198u: goto label_1ea198;
        case 0x1ea1a8u: goto label_1ea1a8;
        case 0x1ea1b0u: goto label_1ea1b0;
        case 0x1ea1bcu: goto label_1ea1bc;
        case 0x1ea1c8u: goto label_1ea1c8;
        case 0x1ea1d4u: goto label_1ea1d4;
        case 0x1ea20cu: goto label_1ea20c;
        case 0x1ea218u: goto label_1ea218;
        case 0x1ea250u: goto label_1ea250;
        case 0x1ea268u: goto label_1ea268;
        case 0x1ea288u: goto label_1ea288;
        case 0x1ea29cu: goto label_1ea29c;
        case 0x1ea2b0u: goto label_1ea2b0;
        case 0x1ea2d4u: goto label_1ea2d4;
        case 0x1ea2e8u: goto label_1ea2e8;
        case 0x1ea2fcu: goto label_1ea2fc;
        case 0x1ea310u: goto label_1ea310;
        case 0x1ea324u: goto label_1ea324;
        case 0x1ea338u: goto label_1ea338;
        case 0x1ea358u: goto label_1ea358;
        case 0x1ea368u: goto label_1ea368;
        case 0x1ea37cu: goto label_1ea37c;
        case 0x1ea38cu: goto label_1ea38c;
        case 0x1ea3acu: goto label_1ea3ac;
        case 0x1ea3b8u: goto label_1ea3b8;
        case 0x1ea3dcu: goto label_1ea3dc;
        default: break;
    }

    ctx->pc = 0x1ea160u;

    // 0x1ea160: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1ea160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1ea164: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ea164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ea168: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ea168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ea16c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea170: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ea170u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea174: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ea178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea17c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea180: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ea180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea188: 0x264446fc  addiu       $a0, $s2, 0x46FC
    ctx->pc = 0x1ea188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18172));
    // 0x1ea18c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ea18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea190: 0xc066100  jal         func_198400
    ctx->pc = 0x1EA190u;
    SET_GPR_U32(ctx, 31, 0x1EA198u);
    ctx->pc = 0x1EA194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA190u;
            // 0x1ea194: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198400u;
    if (runtime->hasFunction(0x198400u)) {
        auto targetFn = runtime->lookupFunction(0x198400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA198u; }
        if (ctx->pc != 0x1EA198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboJointName__13CGameDataUsedFPc_0x198400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA198u; }
        if (ctx->pc != 0x1EA198u) { return; }
    }
    ctx->pc = 0x1EA198u;
label_1ea198:
    // 0x1ea198: 0x26514690  addiu       $s1, $s2, 0x4690
    ctx->pc = 0x1ea198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 18064));
    // 0x1ea19c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1ea19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ea1a0: 0xc066100  jal         func_198400
    ctx->pc = 0x1EA1A0u;
    SET_GPR_U32(ctx, 31, 0x1EA1A8u);
    ctx->pc = 0x1EA1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1A0u;
            // 0x1ea1a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198400u;
    if (runtime->hasFunction(0x198400u)) {
        auto targetFn = runtime->lookupFunction(0x198400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1A8u; }
        if (ctx->pc != 0x1EA1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboJointName__13CGameDataUsedFPc_0x198400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1A8u; }
        if (ctx->pc != 0x1EA1A8u) { return; }
    }
    ctx->pc = 0x1EA1A8u;
label_1ea1a8:
    // 0x1ea1a8: 0xc0660e4  jal         func_198390
    ctx->pc = 0x1EA1A8u;
    SET_GPR_U32(ctx, 31, 0x1EA1B0u);
    ctx->pc = 0x1EA1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1A8u;
            // 0x1ea1ac: 0x264447d4  addiu       $a0, $s2, 0x47D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 18388));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198390u;
    if (runtime->hasFunction(0x198390u)) {
        auto targetFn = runtime->lookupFunction(0x198390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1B0u; }
        if (ctx->pc != 0x1EA1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboInfoType__13CGameDataUsedFv_0x198390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1B0u; }
        if (ctx->pc != 0x1EA1B0u) { return; }
    }
    ctx->pc = 0x1EA1B0u;
label_1ea1b0:
    // 0x1ea1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ea1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1b4: 0xc0660e4  jal         func_198390
    ctx->pc = 0x1EA1B4u;
    SET_GPR_U32(ctx, 31, 0x1EA1BCu);
    ctx->pc = 0x1EA1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1B4u;
            // 0x1ea1b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198390u;
    if (runtime->hasFunction(0x198390u)) {
        auto targetFn = runtime->lookupFunction(0x198390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1BCu; }
        if (ctx->pc != 0x1EA1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboInfoType__13CGameDataUsedFv_0x198390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1BCu; }
        if (ctx->pc != 0x1EA1BCu) { return; }
    }
    ctx->pc = 0x1EA1BCu;
label_1ea1bc:
    // 0x1ea1bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ea1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea1c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ea1c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea1c8:
    // 0x1ea1c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ea1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea1cc: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1EA1CCu;
    SET_GPR_U32(ctx, 31, 0x1EA1D4u);
    ctx->pc = 0x1EA1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1CCu;
            // 0x1ea1d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1D4u; }
        if (ctx->pc != 0x1EA1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA1D4u; }
        if (ctx->pc != 0x1EA1D4u) { return; }
    }
    ctx->pc = 0x1EA1D4u;
label_1ea1d4:
    // 0x1ea1d4: 0x29d1821  addu        $v1, $s4, $sp
    ctx->pc = 0x1ea1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1ea1d8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1ea1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1ea1dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ea1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ea1e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ea1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea1e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA1E4u;
    {
        const bool branch_taken_0x1ea1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1E4u;
            // 0x1ea1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1e4) {
            ctx->pc = 0x1EA1F4u;
            goto label_1ea1f4;
        }
    }
    ctx->pc = 0x1EA1ECu;
    // 0x1ea1ec: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1EA1ECu;
    {
        const bool branch_taken_0x1ea1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1ECu;
            // 0x1ea1f0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1ec) {
            ctx->pc = 0x1EA3F0u;
            goto label_1ea3f0;
        }
    }
    ctx->pc = 0x1EA1F4u;
label_1ea1f4:
    // 0x1ea1f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ea1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ea1f8: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x1ea1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ea1fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1EA1FCu;
    {
        const bool branch_taken_0x1ea1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA1FCu;
            // 0x1ea200: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea1fc) {
            ctx->pc = 0x1EA1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea1c8;
        }
    }
    ctx->pc = 0x1EA204u;
    // 0x1ea204: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea208: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ea208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea20c:
    // 0x1ea20c: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1ea20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1ea210: 0xc05af58  jal         func_16BD60
    ctx->pc = 0x1EA210u;
    SET_GPR_U32(ctx, 31, 0x1EA218u);
    ctx->pc = 0x1EA214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA210u;
            // 0x1ea214: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD60u;
    if (runtime->hasFunction(0x16BD60u)) {
        auto targetFn = runtime->lookupFunction(0x16BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA218u; }
        if (ctx->pc != 0x1EA218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetParent__12CActionCharaFv_0x16bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA218u; }
        if (ctx->pc != 0x1EA218u) { return; }
    }
    ctx->pc = 0x1EA218u;
label_1ea218:
    // 0x1ea218: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ea218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ea21c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1ea21cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1ea220: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x1ea220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ea224: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EA224u;
    {
        const bool branch_taken_0x1ea224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ea224) {
            ctx->pc = 0x1EA20Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea20c;
        }
    }
    ctx->pc = 0x1EA22Cu;
    // 0x1ea22c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ea22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ea230: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ea230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ea234: 0x2442d980  addiu       $v0, $v0, -0x2680
    ctx->pc = 0x1ea234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
    // 0x1ea238: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea23c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1ea23cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea240: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ea240u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea244: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x1ea244u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ea248: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1ea248u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1ea24c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x1ea24cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_1ea250:
    // 0x1ea250: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA250u;
    {
        const bool branch_taken_0x1ea250 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA250u;
            // 0x1ea254: 0x29d1021  addu        $v0, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea250) {
            ctx->pc = 0x1EA270u;
            goto label_1ea270;
        }
    }
    ctx->pc = 0x1EA258u;
    // 0x1ea258: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ea258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea25c: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1ea260: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x1EA260u;
    SET_GPR_U32(ctx, 31, 0x1EA268u);
    ctx->pc = 0x1EA264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA260u;
            // 0x1ea264: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA268u; }
        if (ctx->pc != 0x1EA268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA268u; }
        if (ctx->pc != 0x1EA268u) { return; }
    }
    ctx->pc = 0x1EA268u;
label_1ea268:
    // 0x1ea268: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EA268u;
    {
        const bool branch_taken_0x1ea268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea268) {
            ctx->pc = 0x1EA29Cu;
            goto label_1ea29c;
        }
    }
    ctx->pc = 0x1EA270u;
label_1ea270:
    // 0x1ea270: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1ea270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1ea274: 0x8c550110  lw          $s5, 0x110($v0)
    ctx->pc = 0x1ea274u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1ea278: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x1ea278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1ea27c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ea27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea280: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x1EA280u;
    SET_GPR_U32(ctx, 31, 0x1EA288u);
    ctx->pc = 0x1EA284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA280u;
            // 0x1ea284: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (runtime->hasFunction(0x16BD90u)) {
        auto targetFn = runtime->lookupFunction(0x16BD90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA288u; }
        if (ctx->pc != 0x1EA288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CActionCharaFP12CActionCharaPc_0x16bd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA288u; }
        if (ctx->pc != 0x1EA288u) { return; }
    }
    ctx->pc = 0x1EA288u;
label_1ea288:
    // 0x1ea288: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA288u;
    {
        const bool branch_taken_0x1ea288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA288u;
            // 0x1ea28c: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea288) {
            ctx->pc = 0x1EA29Cu;
            goto label_1ea29c;
        }
    }
    ctx->pc = 0x1EA290u;
    // 0x1ea290: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ea290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea294: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1EA294u;
    SET_GPR_U32(ctx, 31, 0x1EA29Cu);
    ctx->pc = 0x1EA298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA294u;
            // 0x1ea298: 0x248484f0  addiu       $a0, $a0, -0x7B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA29Cu; }
        if (ctx->pc != 0x1EA29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA29Cu; }
        if (ctx->pc != 0x1EA29Cu) { return; }
    }
    ctx->pc = 0x1EA29Cu;
label_1ea29c:
    // 0x1ea29c: 0x0  nop
    ctx->pc = 0x1ea29cu;
    // NOP
    // 0x1ea2a0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1ea2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1ea2a4: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1ea2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea2a8: 0xc05cbc0  jal         func_172F00
    ctx->pc = 0x1EA2A8u;
    SET_GPR_U32(ctx, 31, 0x1EA2B0u);
    ctx->pc = 0x1EA2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2A8u;
            // 0x1ea2ac: 0x8c440074  lw          $a0, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172F00u;
    if (runtime->hasFunction(0x172F00u)) {
        auto targetFn = runtime->lookupFunction(0x172F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2B0u; }
        if (ctx->pc != 0x1EA2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyOutLine__11CCharacter2FP11CCharacter2_0x172f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2B0u; }
        if (ctx->pc != 0x1EA2B0u) { return; }
    }
    ctx->pc = 0x1EA2B0u;
label_1ea2b0:
    // 0x1ea2b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ea2b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ea2b4: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1ea2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ea2b8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1EA2B8u;
    {
        const bool branch_taken_0x1ea2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2B8u;
            // 0x1ea2bc: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea2b8) {
            ctx->pc = 0x1EA250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea250;
        }
    }
    ctx->pc = 0x1EA2C0u;
    // 0x1ea2c0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ea2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea2c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ea2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ea2c8: 0x24a58508  addiu       $a1, $a1, -0x7AF8
    ctx->pc = 0x1ea2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935816));
    // 0x1ea2cc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA2CCu;
    SET_GPR_U32(ctx, 31, 0x1EA2D4u);
    ctx->pc = 0x1EA2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2CCu;
            // 0x1ea2d0: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2D4u; }
        if (ctx->pc != 0x1EA2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2D4u; }
        if (ctx->pc != 0x1EA2D4u) { return; }
    }
    ctx->pc = 0x1EA2D4u;
label_1ea2d4:
    // 0x1ea2d4: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1ea2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1ea2d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ea2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ea2dc: 0x24a58510  addiu       $a1, $a1, -0x7AF0
    ctx->pc = 0x1ea2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935824));
    // 0x1ea2e0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA2E0u;
    SET_GPR_U32(ctx, 31, 0x1EA2E8u);
    ctx->pc = 0x1EA2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2E0u;
            // 0x1ea2e4: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2E8u; }
        if (ctx->pc != 0x1EA2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2E8u; }
        if (ctx->pc != 0x1EA2E8u) { return; }
    }
    ctx->pc = 0x1EA2E8u;
label_1ea2e8:
    // 0x1ea2e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1ea2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ea2ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ea2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ea2f0: 0x24a584a8  addiu       $a1, $a1, -0x7B58
    ctx->pc = 0x1ea2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935720));
    // 0x1ea2f4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA2F4u;
    SET_GPR_U32(ctx, 31, 0x1EA2FCu);
    ctx->pc = 0x1EA2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA2F4u;
            // 0x1ea2f8: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2FCu; }
        if (ctx->pc != 0x1EA2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA2FCu; }
        if (ctx->pc != 0x1EA2FCu) { return; }
    }
    ctx->pc = 0x1EA2FCu;
label_1ea2fc:
    // 0x1ea2fc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ea2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1ea300: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ea300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ea304: 0x24a58518  addiu       $a1, $a1, -0x7AE8
    ctx->pc = 0x1ea304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935832));
    // 0x1ea308: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA308u;
    SET_GPR_U32(ctx, 31, 0x1EA310u);
    ctx->pc = 0x1EA30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA308u;
            // 0x1ea30c: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA310u; }
        if (ctx->pc != 0x1EA310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA310u; }
        if (ctx->pc != 0x1EA310u) { return; }
    }
    ctx->pc = 0x1EA310u;
label_1ea310:
    // 0x1ea310: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ea310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ea314: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ea314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ea318: 0x24a58520  addiu       $a1, $a1, -0x7AE0
    ctx->pc = 0x1ea318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935840));
    // 0x1ea31c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA31Cu;
    SET_GPR_U32(ctx, 31, 0x1EA324u);
    ctx->pc = 0x1EA320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA31Cu;
            // 0x1ea320: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA324u; }
        if (ctx->pc != 0x1EA324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA324u; }
        if (ctx->pc != 0x1EA324u) { return; }
    }
    ctx->pc = 0x1EA324u;
label_1ea324:
    // 0x1ea324: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x1ea324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1ea328: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ea328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ea32c: 0x24a58528  addiu       $a1, $a1, -0x7AD8
    ctx->pc = 0x1ea32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935848));
    // 0x1ea330: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA330u;
    SET_GPR_U32(ctx, 31, 0x1EA338u);
    ctx->pc = 0x1EA334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA330u;
            // 0x1ea334: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA338u; }
        if (ctx->pc != 0x1EA338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA338u; }
        if (ctx->pc != 0x1EA338u) { return; }
    }
    ctx->pc = 0x1EA338u;
label_1ea338:
    // 0x1ea338: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA338u;
    {
        const bool branch_taken_0x1ea338 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA338u;
            // 0x1ea33c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea338) {
            ctx->pc = 0x1EA348u;
            goto label_1ea348;
        }
    }
    ctx->pc = 0x1EA340u;
    // 0x1ea340: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1EA340u;
    {
        const bool branch_taken_0x1ea340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea340) {
            ctx->pc = 0x1EA3ECu;
            goto label_1ea3ec;
        }
    }
    ctx->pc = 0x1EA348u;
label_1ea348:
    // 0x1ea348: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ea348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea34c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ea34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1ea350: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x1EA350u;
    SET_GPR_U32(ctx, 31, 0x1EA358u);
    ctx->pc = 0x1EA354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA350u;
            // 0x1ea354: 0x24a58530  addiu       $a1, $a1, -0x7AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA358u; }
        if (ctx->pc != 0x1EA358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA358u; }
        if (ctx->pc != 0x1EA358u) { return; }
    }
    ctx->pc = 0x1EA358u;
label_1ea358:
    // 0x1ea358: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ea358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea35c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ea35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea360: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x1EA360u;
    SET_GPR_U32(ctx, 31, 0x1EA368u);
    ctx->pc = 0x1EA364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA360u;
            // 0x1ea364: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA368u; }
        if (ctx->pc != 0x1EA368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA368u; }
        if (ctx->pc != 0x1EA368u) { return; }
    }
    ctx->pc = 0x1EA368u;
label_1ea368:
    // 0x1ea368: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA368u;
    {
        const bool branch_taken_0x1ea368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA368u;
            // 0x1ea36c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea368) {
            ctx->pc = 0x1EA37Cu;
            goto label_1ea37c;
        }
    }
    ctx->pc = 0x1EA370u;
    // 0x1ea370: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ea370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ea374: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1EA374u;
    SET_GPR_U32(ctx, 31, 0x1EA37Cu);
    ctx->pc = 0x1EA378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA374u;
            // 0x1ea378: 0x24848538  addiu       $a0, $a0, -0x7AC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA37Cu; }
        if (ctx->pc != 0x1EA37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA37Cu; }
        if (ctx->pc != 0x1EA37Cu) { return; }
    }
    ctx->pc = 0x1EA37Cu;
label_1ea37c:
    // 0x1ea37c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA37Cu;
    {
        const bool branch_taken_0x1ea37c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA37Cu;
            // 0x1ea380: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea37c) {
            ctx->pc = 0x1EA38Cu;
            goto label_1ea38c;
        }
    }
    ctx->pc = 0x1EA384u;
    // 0x1ea384: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1EA384u;
    SET_GPR_U32(ctx, 31, 0x1EA38Cu);
    ctx->pc = 0x1EA388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA384u;
            // 0x1ea388: 0x24848548  addiu       $a0, $a0, -0x7AB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA38Cu; }
        if (ctx->pc != 0x1EA38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA38Cu; }
        if (ctx->pc != 0x1EA38Cu) { return; }
    }
    ctx->pc = 0x1EA38Cu;
label_1ea38c:
    // 0x1ea38c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA38Cu;
    {
        const bool branch_taken_0x1ea38c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA38Cu;
            // 0x1ea390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea38c) {
            ctx->pc = 0x1EA39Cu;
            goto label_1ea39c;
        }
    }
    ctx->pc = 0x1EA394u;
    // 0x1ea394: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA394u;
    {
        const bool branch_taken_0x1ea394 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA394u;
            // 0x1ea398: 0x266500b0  addiu       $a1, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea394) {
            ctx->pc = 0x1EA3A4u;
            goto label_1ea3a4;
        }
    }
    ctx->pc = 0x1EA39Cu;
label_1ea39c:
    // 0x1ea39c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1EA39Cu;
    {
        const bool branch_taken_0x1ea39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea39c) {
            ctx->pc = 0x1EA3ECu;
            goto label_1ea3ec;
        }
    }
    ctx->pc = 0x1EA3A4u;
label_1ea3a4:
    // 0x1ea3a4: 0xc041c60  jal         func_107180
    ctx->pc = 0x1EA3A4u;
    SET_GPR_U32(ctx, 31, 0x1EA3ACu);
    ctx->pc = 0x1EA3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3A4u;
            // 0x1ea3a8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3ACu; }
        if (ctx->pc != 0x1EA3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3ACu; }
        if (ctx->pc != 0x1EA3ACu) { return; }
    }
    ctx->pc = 0x1EA3ACu;
label_1ea3ac:
    // 0x1ea3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea3b0: 0xc04dd64  jal         func_137590
    ctx->pc = 0x1EA3B0u;
    SET_GPR_U32(ctx, 31, 0x1EA3B8u);
    ctx->pc = 0x1EA3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3B0u;
            // 0x1ea3b4: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3B8u; }
        if (ctx->pc != 0x1EA3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3B8u; }
        if (ctx->pc != 0x1EA3B8u) { return; }
    }
    ctx->pc = 0x1EA3B8u;
label_1ea3b8:
    // 0x1ea3b8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ea3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea3bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ea3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ea3c0: 0x24848560  addiu       $a0, $a0, -0x7AA0
    ctx->pc = 0x1ea3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935904));
    // 0x1ea3c4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1ea3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ea3c8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1ea3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ea3cc: 0xac5106a8  sw          $s1, 0x6A8($v0)
    ctx->pc = 0x1ea3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 17));
    // 0x1ea3d0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ea3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea3d4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1EA3D4u;
    SET_GPR_U32(ctx, 31, 0x1EA3DCu);
    ctx->pc = 0x1EA3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA3D4u;
            // 0x1ea3d8: 0xac5206a4  sw          $s2, 0x6A4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1700), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3DCu; }
        if (ctx->pc != 0x1EA3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA3DCu; }
        if (ctx->pc != 0x1EA3DCu) { return; }
    }
    ctx->pc = 0x1EA3DCu;
label_1ea3dc:
    // 0x1ea3dc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1ea3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea3e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ea3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea3e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea3e8: 0xac640670  sw          $a0, 0x670($v1)
    ctx->pc = 0x1ea3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1648), GPR_U32(ctx, 4));
label_1ea3ec:
    // 0x1ea3ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ea3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ea3f0:
    // 0x1ea3f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ea3f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea3f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea3f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea3f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ea3f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea3fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea408: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA408u;
            // 0x1ea40c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA410u;
}
