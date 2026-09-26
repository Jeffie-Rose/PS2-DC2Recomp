#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeDownLoadAnaunce__FiP9mgCMemoryPiPiPi
// Address: 0x1f5cb0 - 0x1f6a60
void MakeDownLoadAnaunce__FiP9mgCMemoryPiPiPi_0x1f5cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeDownLoadAnaunce__FiP9mgCMemoryPiPiPi_0x1f5cb0");
#endif

    switch (ctx->pc) {
        case 0x1f5d28u: goto label_1f5d28;
        case 0x1f5d4cu: goto label_1f5d4c;
        case 0x1f5d64u: goto label_1f5d64;
        case 0x1f5d74u: goto label_1f5d74;
        case 0x1f5d84u: goto label_1f5d84;
        case 0x1f5db8u: goto label_1f5db8;
        case 0x1f5dd4u: goto label_1f5dd4;
        case 0x1f5e1cu: goto label_1f5e1c;
        case 0x1f5e58u: goto label_1f5e58;
        case 0x1f5e70u: goto label_1f5e70;
        case 0x1f5e7cu: goto label_1f5e7c;
        case 0x1f5ea4u: goto label_1f5ea4;
        case 0x1f5eb0u: goto label_1f5eb0;
        case 0x1f5ec0u: goto label_1f5ec0;
        case 0x1f5ed0u: goto label_1f5ed0;
        case 0x1f5eecu: goto label_1f5eec;
        case 0x1f5f04u: goto label_1f5f04;
        case 0x1f5f20u: goto label_1f5f20;
        case 0x1f5f44u: goto label_1f5f44;
        case 0x1f5f4cu: goto label_1f5f4c;
        case 0x1f5fa0u: goto label_1f5fa0;
        case 0x1f606cu: goto label_1f606c;
        case 0x1f6104u: goto label_1f6104;
        case 0x1f6150u: goto label_1f6150;
        case 0x1f615cu: goto label_1f615c;
        case 0x1f616cu: goto label_1f616c;
        case 0x1f61c0u: goto label_1f61c0;
        case 0x1f6220u: goto label_1f6220;
        case 0x1f62c8u: goto label_1f62c8;
        case 0x1f62e4u: goto label_1f62e4;
        case 0x1f632cu: goto label_1f632c;
        case 0x1f6354u: goto label_1f6354;
        case 0x1f6360u: goto label_1f6360;
        case 0x1f6370u: goto label_1f6370;
        case 0x1f6394u: goto label_1f6394;
        case 0x1f63f8u: goto label_1f63f8;
        case 0x1f64e8u: goto label_1f64e8;
        case 0x1f6510u: goto label_1f6510;
        case 0x1f6544u: goto label_1f6544;
        case 0x1f65d0u: goto label_1f65d0;
        case 0x1f65dcu: goto label_1f65dc;
        case 0x1f65f8u: goto label_1f65f8;
        case 0x1f66b0u: goto label_1f66b0;
        case 0x1f66c4u: goto label_1f66c4;
        case 0x1f66dcu: goto label_1f66dc;
        case 0x1f6740u: goto label_1f6740;
        case 0x1f674cu: goto label_1f674c;
        case 0x1f6784u: goto label_1f6784;
        case 0x1f6798u: goto label_1f6798;
        case 0x1f67a4u: goto label_1f67a4;
        case 0x1f6840u: goto label_1f6840;
        case 0x1f684cu: goto label_1f684c;
        case 0x1f68a4u: goto label_1f68a4;
        case 0x1f68b8u: goto label_1f68b8;
        case 0x1f68c4u: goto label_1f68c4;
        case 0x1f6908u: goto label_1f6908;
        case 0x1f6940u: goto label_1f6940;
        case 0x1f6968u: goto label_1f6968;
        case 0x1f6990u: goto label_1f6990;
        default: break;
    }

    ctx->pc = 0x1f5cb0u;

    // 0x1f5cb0: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x1f5cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x1f5cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5cb8: 0x342178a0  ori         $at, $at, 0x78A0
    ctx->pc = 0x1f5cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30880);
    // 0x1f5cbc: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1f5cc0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f5cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f5cc4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1f5cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1f5cc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f5cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1f5ccc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f5cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1f5cd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f5cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f5cd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f5cd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f5cdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f5ce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f5ce4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f5ce8: 0xafa40198  sw          $a0, 0x198($sp)
    ctx->pc = 0x1f5ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 4));
    // 0x1f5cec: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1f5cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1f5cf0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1f5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1f5cf4: 0xafa50194  sw          $a1, 0x194($sp)
    ctx->pc = 0x1f5cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 5));
    // 0x1f5cf8: 0xafa60190  sw          $a2, 0x190($sp)
    ctx->pc = 0x1f5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 6));
    // 0x1f5cfc: 0xafa7018c  sw          $a3, 0x18C($sp)
    ctx->pc = 0x1f5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 7));
    // 0x1f5d00: 0xafa80188  sw          $t0, 0x188($sp)
    ctx->pc = 0x1f5d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 8));
    // 0x1f5d04: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5D04u;
    {
        const bool branch_taken_0x1f5d04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F5D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D04u;
            // 0x1f5d08: 0xafa200b8  sw          $v0, 0xB8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d04) {
            ctx->pc = 0x1F5D18u;
            goto label_1f5d18;
        }
    }
    ctx->pc = 0x1F5D0Cu;
    // 0x1f5d0c: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x1f5d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f5d10: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5D10u;
    {
        const bool branch_taken_0x1f5d10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d10) {
            ctx->pc = 0x1F5D20u;
            goto label_1f5d20;
        }
    }
    ctx->pc = 0x1F5D18u;
label_1f5d18:
    // 0x1f5d18: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x1f5d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x1f5d1c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1f5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1f5d20:
    // 0x1f5d20: 0xc064220  jal         func_190880
    ctx->pc = 0x1F5D20u;
    SET_GPR_U32(ctx, 31, 0x1F5D28u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D28u; }
        if (ctx->pc != 0x1F5D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D28u; }
        if (ctx->pc != 0x1F5D28u) { return; }
    }
    ctx->pc = 0x1F5D28u;
label_1f5d28:
    // 0x1f5d28: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1f5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1f5d2c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1f5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1f5d30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5D30u;
    {
        const bool branch_taken_0x1f5d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d30) {
            ctx->pc = 0x1F5D40u;
            goto label_1f5d40;
        }
    }
    ctx->pc = 0x1F5D38u;
    // 0x1f5d38: 0x1000033c  b           . + 4 + (0x33C << 2)
    ctx->pc = 0x1F5D38u;
    {
        const bool branch_taken_0x1f5d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D38u;
            // 0x1f5d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d38) {
            ctx->pc = 0x1F6A2Cu;
            goto label_1f6a2c;
        }
    }
    ctx->pc = 0x1F5D40u;
label_1f5d40:
    // 0x1f5d40: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f5d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f5d44: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x1F5D44u;
    SET_GPR_U32(ctx, 31, 0x1F5D4Cu);
    ctx->pc = 0x1F5D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D44u;
            // 0x1f5d48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D4Cu; }
        if (ctx->pc != 0x1F5D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D4Cu; }
        if (ctx->pc != 0x1F5D4Cu) { return; }
    }
    ctx->pc = 0x1F5D4Cu;
label_1f5d4c:
    // 0x1f5d4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d50: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F5D50u;
    {
        const bool branch_taken_0x1f5d50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5d50) {
            ctx->pc = 0x1F5DA4u;
            goto label_1f5da4;
        }
    }
    ctx->pc = 0x1F5D58u;
    // 0x1f5d58: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f5d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f5d5c: 0xc0aa82c  jal         func_2AA0B0
    ctx->pc = 0x1F5D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F5D64u);
    ctx->pc = 0x1F5D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D5Cu;
            // 0x1f5d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0B0u;
    if (runtime->hasFunction(0x2AA0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D64u; }
        if (ctx->pc != 0x1F5D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeSrc__9CEditDataFi_0x2aa0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D64u; }
        if (ctx->pc != 0x1F5D64u) { return; }
    }
    ctx->pc = 0x1F5D64u;
label_1f5d64:
    // 0x1f5d64: 0xaf829008  sw          $v0, -0x6FF8($gp)
    ctx->pc = 0x1f5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938632), GPR_U32(ctx, 2));
    // 0x1f5d68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f5d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d6c: 0xa780900c  sh          $zero, -0x6FF4($gp)
    ctx->pc = 0x1f5d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938636), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5d70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5d70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5d74:
    // 0x1f5d74: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f5d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f5d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d7c: 0xc0aa828  jal         func_2AA0A0
    ctx->pc = 0x1F5D7Cu;
    SET_GPR_U32(ctx, 31, 0x1F5D84u);
    ctx->pc = 0x1F5D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D7Cu;
            // 0x1f5d80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA0A0u;
    if (runtime->hasFunction(0x2AA0A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D84u; }
        if (ctx->pc != 0x1F5D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeData__9CEditDataFii_0x2aa0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5D84u; }
        if (ctx->pc != 0x1F5D84u) { return; }
    }
    ctx->pc = 0x1F5D84u;
label_1f5d84:
    // 0x1f5d84: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f5d88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5d8c: 0x24639350  addiu       $v1, $v1, -0x6CB0
    ctx->pc = 0x1f5d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939472));
    // 0x1f5d90: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x1f5d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f5d94: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x1f5d94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f5d98: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1f5d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1f5d9c: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F5D9Cu;
    {
        const bool branch_taken_0x1f5d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5D9Cu;
            // 0x1f5da0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d9c) {
            ctx->pc = 0x1F5D74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5d74;
        }
    }
    ctx->pc = 0x1F5DA4u;
label_1f5da4:
    // 0x1f5da4: 0x0  nop
    ctx->pc = 0x1f5da4u;
    // NOP
    // 0x1f5da8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f5da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5dac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f5dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5db0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F5DB0u;
    {
        const bool branch_taken_0x1f5db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5DB0u;
            // 0x1f5db4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5db0) {
            ctx->pc = 0x1F5DECu;
            goto label_1f5dec;
        }
    }
    ctx->pc = 0x1F5DB8u;
label_1f5db8:
    // 0x1f5db8: 0x8f828ff0  lw          $v0, -0x7010($gp)
    ctx->pc = 0x1f5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938608)));
    // 0x1f5dbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5dc0: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f5dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f5dc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f5dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5dc8: 0x523821  addu        $a3, $v0, $s2
    ctx->pc = 0x1f5dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f5dcc: 0xc0aa86c  jal         func_2AA1B0
    ctx->pc = 0x1F5DCCu;
    SET_GPR_U32(ctx, 31, 0x1F5DD4u);
    ctx->pc = 0x1F5DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5DCCu;
            // 0x1f5dd0: 0x24e80200  addiu       $t0, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1B0u;
    if (runtime->hasFunction(0x2AA1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5DD4u; }
        if (ctx->pc != 0x1F5DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzeFlag__9CEditDataFiiPiPi_0x2aa1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5DD4u; }
        if (ctx->pc != 0x1F5DD4u) { return; }
    }
    ctx->pc = 0x1F5DD4u;
label_1f5dd4:
    // 0x1f5dd4: 0x8f838ff0  lw          $v1, -0x7010($gp)
    ctx->pc = 0x1f5dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938608)));
    // 0x1f5dd8: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x1f5dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1f5ddc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f5de0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1f5de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1f5de4: 0xac620400  sw          $v0, 0x400($v1)
    ctx->pc = 0x1f5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1024), GPR_U32(ctx, 2));
    // 0x1f5de8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f5de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f5dec:
    // 0x1f5dec: 0x0  nop
    ctx->pc = 0x1f5decu;
    // NOP
    // 0x1f5df0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f5df4: 0x24429350  addiu       $v0, $v0, -0x6CB0
    ctx->pc = 0x1f5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939472));
    // 0x1f5df8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f5dfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f5e00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5E00u;
    {
        const bool branch_taken_0x1f5e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E00u;
            // 0x1f5e04: 0x2a020020  slti        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e00) {
            ctx->pc = 0x1F5E10u;
            goto label_1f5e10;
        }
    }
    ctx->pc = 0x1F5E08u;
    // 0x1f5e08: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F5E08u;
    {
        const bool branch_taken_0x1f5e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e08) {
            ctx->pc = 0x1F5DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5db8;
        }
    }
    ctx->pc = 0x1F5E10u;
label_1f5e10:
    // 0x1f5e10: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f5e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f5e14: 0xc0aa840  jal         func_2AA100
    ctx->pc = 0x1F5E14u;
    SET_GPR_U32(ctx, 31, 0x1F5E1Cu);
    ctx->pc = 0x1F5E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E14u;
            // 0x1f5e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA100u;
    if (runtime->hasFunction(0x2AA100u)) {
        auto targetFn = runtime->lookupFunction(0x2AA100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E1Cu; }
        if (ctx->pc != 0x1F5E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzePercent__9CEditDataFi_0x2aa100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E1Cu; }
        if (ctx->pc != 0x1F5E1Cu) { return; }
    }
    ctx->pc = 0x1F5E1Cu;
label_1f5e1c:
    // 0x1f5e1c: 0xaf828180  sw          $v0, -0x7E80($gp)
    ctx->pc = 0x1f5e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934912), GPR_U32(ctx, 2));
    // 0x1f5e20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f5e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f5e24: 0x26225040  addiu       $v0, $s1, 0x5040
    ctx->pc = 0x1f5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20544));
    // 0x1f5e28: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x1f5e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x1f5e2c: 0xaf82901c  sw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f5e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938652), GPR_U32(ctx, 2));
    // 0x1f5e30: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1f5e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1f5e34: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1f5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1f5e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f5e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5e3c: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x1f5e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x1f5e40: 0xa7808fdc  sh          $zero, -0x7024($gp)
    ctx->pc = 0x1f5e40u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938588), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5e44: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1f5e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1f5e48: 0xa7808fe0  sh          $zero, -0x7020($gp)
    ctx->pc = 0x1f5e48u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938592), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5e4c: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1f5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1f5e50: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F5E50u;
    SET_GPR_U32(ctx, 31, 0x1F5E58u);
    ctx->pc = 0x1F5E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E50u;
            // 0x1f5e54: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E58u; }
        if (ctx->pc != 0x1F5E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E58u; }
        if (ctx->pc != 0x1F5E58u) { return; }
    }
    ctx->pc = 0x1F5E58u;
label_1f5e58:
    // 0x1f5e58: 0x8f8282a4  lw          $v0, -0x7D5C($gp)
    ctx->pc = 0x1f5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x1f5e5c: 0x3c1601ed  lui         $s6, 0x1ED
    ctx->pc = 0x1f5e5cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)493 << 16));
    // 0x1f5e60: 0xaf808f88  sw          $zero, -0x7078($gp)
    ctx->pc = 0x1f5e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 0));
    // 0x1f5e64: 0x26d68ea0  addiu       $s6, $s6, -0x7160
    ctx->pc = 0x1f5e64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938272));
    // 0x1f5e68: 0xc06421c  jal         func_190870
    ctx->pc = 0x1F5E68u;
    SET_GPR_U32(ctx, 31, 0x1F5E70u);
    ctx->pc = 0x1F5E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E68u;
            // 0x1f5e6c: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E70u; }
        if (ctx->pc != 0x1F5E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E70u; }
        if (ctx->pc != 0x1F5E70u) { return; }
    }
    ctx->pc = 0x1F5E70u;
label_1f5e70:
    // 0x1f5e70: 0x8c452e5c  lw          $a1, 0x2E5C($v0)
    ctx->pc = 0x1f5e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11868)));
    // 0x1f5e74: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1F5E74u;
    SET_GPR_U32(ctx, 31, 0x1F5E7Cu);
    ctx->pc = 0x1F5E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E74u;
            // 0x1f5e78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E7Cu; }
        if (ctx->pc != 0x1F5E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5E7Cu; }
        if (ctx->pc != 0x1F5E7Cu) { return; }
    }
    ctx->pc = 0x1F5E7Cu;
label_1f5e7c:
    // 0x1f5e7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5E7Cu;
    {
        const bool branch_taken_0x1f5e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E7Cu;
            // 0x1f5e80: 0x24550f94  addiu       $s5, $v0, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 3988));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e7c) {
            ctx->pc = 0x1F5E8Cu;
            goto label_1f5e8c;
        }
    }
    ctx->pc = 0x1F5E84u;
    // 0x1f5e84: 0x100002e9  b           . + 4 + (0x2E9 << 2)
    ctx->pc = 0x1F5E84u;
    {
        const bool branch_taken_0x1f5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E84u;
            // 0x1f5e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5e84) {
            ctx->pc = 0x1F6A2Cu;
            goto label_1f6a2c;
        }
    }
    ctx->pc = 0x1F5E8Cu;
label_1f5e8c:
    // 0x1f5e8c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f5e90: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F5E90u;
    {
        const bool branch_taken_0x1f5e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e90) {
            ctx->pc = 0x1F5F2Cu;
            goto label_1f5f2c;
        }
    }
    ctx->pc = 0x1F5E98u;
    // 0x1f5e98: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f5e9c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5EA4u);
    ctx->pc = 0x1F5EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5E9Cu;
            // 0x1f5ea0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EA4u; }
        if (ctx->pc != 0x1F5EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EA4u; }
        if (ctx->pc != 0x1F5EA4u) { return; }
    }
    ctx->pc = 0x1F5EA4u;
label_1f5ea4:
    // 0x1f5ea4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1f5ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f5ea8: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F5EA8u;
    SET_GPR_U32(ctx, 31, 0x1F5EB0u);
    ctx->pc = 0x1F5EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EA8u;
            // 0x1f5eac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EB0u; }
        if (ctx->pc != 0x1F5EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EB0u; }
        if (ctx->pc != 0x1F5EB0u) { return; }
    }
    ctx->pc = 0x1F5EB0u;
label_1f5eb0:
    // 0x1f5eb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5EB0u;
    {
        const bool branch_taken_0x1f5eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EB0u;
            // 0x1f5eb4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5eb0) {
            ctx->pc = 0x1F5EC0u;
            goto label_1f5ec0;
        }
    }
    ctx->pc = 0x1F5EB8u;
    // 0x1f5eb8: 0xc0a9370  jal         func_2A4DC0
    ctx->pc = 0x1F5EB8u;
    SET_GPR_U32(ctx, 31, 0x1F5EC0u);
    ctx->pc = 0x1F5EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EB8u;
            // 0x1f5ebc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4DC0u;
    if (runtime->hasFunction(0x2A4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EC0u; }
        if (ctx->pc != 0x1F5EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CEditInfoMngrFv_0x2a4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EC0u; }
        if (ctx->pc != 0x1F5EC0u) { return; }
    }
    ctx->pc = 0x1F5EC0u;
label_1f5ec0:
    // 0x1f5ec0: 0x12a0001a  beqz        $s5, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F5EC0u;
    {
        const bool branch_taken_0x1f5ec0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EC0u;
            // 0x1f5ec4: 0x27a40f20  addiu       $a0, $sp, 0xF20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ec0) {
            ctx->pc = 0x1F5F2Cu;
            goto label_1f5f2c;
        }
    }
    ctx->pc = 0x1F5EC8u;
    // 0x1f5ec8: 0xc094430  jal         func_2510C0
    ctx->pc = 0x1F5EC8u;
    SET_GPR_U32(ctx, 31, 0x1F5ED0u);
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5ED0u; }
        if (ctx->pc != 0x1F5ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5ED0u; }
        if (ctx->pc != 0x1F5ED0u) { return; }
    }
    ctx->pc = 0x1F5ED0u;
label_1f5ed0:
    // 0x1f5ed0: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x1f5ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f5ed4: 0x34018720  ori         $at, $zero, 0x8720
    ctx->pc = 0x1f5ed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34592);
    // 0x1f5ed8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f5ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f5edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ee0: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1f5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1f5ee4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1F5EE4u;
    SET_GPR_U32(ctx, 31, 0x1F5EECu);
    ctx->pc = 0x1F5EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EE4u;
            // 0x1f5ee8: 0x24a58a40  addiu       $a1, $a1, -0x75C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EECu; }
        if (ctx->pc != 0x1F5EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5EECu; }
        if (ctx->pc != 0x1F5EECu) { return; }
    }
    ctx->pc = 0x1F5EECu;
label_1f5eec:
    // 0x1f5eec: 0x34018720  ori         $at, $zero, 0x8720
    ctx->pc = 0x1f5eecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34592);
    // 0x1f5ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ef4: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1f5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1f5ef8: 0x27a6019c  addiu       $a2, $sp, 0x19C
    ctx->pc = 0x1f5ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
    // 0x1f5efc: 0xc0524dc  jal         func_149370
    ctx->pc = 0x1F5EFCu;
    SET_GPR_U32(ctx, 31, 0x1F5F04u);
    ctx->pc = 0x1F5F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5EFCu;
            // 0x1f5f00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F04u; }
        if (ctx->pc != 0x1F5F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F04u; }
        if (ctx->pc != 0x1F5F04u) { return; }
    }
    ctx->pc = 0x1F5F04u;
label_1f5f04:
    // 0x1f5f04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5F04u;
    {
        const bool branch_taken_0x1f5f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5f04) {
            ctx->pc = 0x1F5F28u;
            goto label_1f5f28;
        }
    }
    ctx->pc = 0x1F5F0Cu;
    // 0x1f5f0c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x1f5f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1f5f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f14: 0x8fa70194  lw          $a3, 0x194($sp)
    ctx->pc = 0x1f5f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f5f18: 0xc0a9638  jal         func_2A58E0
    ctx->pc = 0x1F5F18u;
    SET_GPR_U32(ctx, 31, 0x1F5F20u);
    ctx->pc = 0x1F5F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F18u;
            // 0x1f5f1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A58E0u;
    if (runtime->hasFunction(0x2A58E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A58E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F20u; }
        if (ctx->pc != 0x1F5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadEditInfo__13CEditInfoMngrFPciP9mgCMemory_0x2a58e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F20u; }
        if (ctx->pc != 0x1F5F20u) { return; }
    }
    ctx->pc = 0x1F5F20u;
label_1f5f20:
    // 0x1f5f20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5F20u;
    {
        const bool branch_taken_0x1f5f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5f20) {
            ctx->pc = 0x1F5F2Cu;
            goto label_1f5f2c;
        }
    }
    ctx->pc = 0x1F5F28u;
label_1f5f28:
    // 0x1f5f28: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f5f28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f2c:
    // 0x1f5f2c: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5F2Cu;
    {
        const bool branch_taken_0x1f5f2c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F2Cu;
            // 0x1f5f30: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f2c) {
            ctx->pc = 0x1F5F3Cu;
            goto label_1f5f3c;
        }
    }
    ctx->pc = 0x1F5F34u;
    // 0x1f5f34: 0x100002bd  b           . + 4 + (0x2BD << 2)
    ctx->pc = 0x1F5F34u;
    {
        const bool branch_taken_0x1f5f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F34u;
            // 0x1f5f38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f34) {
            ctx->pc = 0x1F6A2Cu;
            goto label_1f6a2c;
        }
    }
    ctx->pc = 0x1F5F3Cu;
label_1f5f3c:
    // 0x1f5f3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f5f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1f5f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f5f44:
    // 0x1f5f44: 0xc0a9380  jal         func_2A4E00
    ctx->pc = 0x1F5F44u;
    SET_GPR_U32(ctx, 31, 0x1F5F4Cu);
    ctx->pc = 0x1F5F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F44u;
            // 0x1f5f48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E00u;
    if (runtime->hasFunction(0x2A4E00u)) {
        auto targetFn = runtime->lookupFunction(0x2A4E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F4Cu; }
        if (ctx->pc != 0x1F5F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__13CEditInfoMngrFi_0x2a4e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5F4Cu; }
        if (ctx->pc != 0x1F5F4Cu) { return; }
    }
    ctx->pc = 0x1F5F4Cu;
label_1f5f4c:
    // 0x1f5f4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f50: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1F5F50u;
    {
        const bool branch_taken_0x1f5f50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5f50) {
            ctx->pc = 0x1F6048u;
            goto label_1f6048;
        }
    }
    ctx->pc = 0x1F5F58u;
    // 0x1f5f58: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1f5f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f5f5c: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x1f5f5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1f5f60: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F5F60u;
    {
        const bool branch_taken_0x1f5f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F60u;
            // 0x1f5f64: 0x3c0251eb  lui         $v0, 0x51EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5f60) {
            ctx->pc = 0x1F6034u;
            goto label_1f6034;
        }
    }
    ctx->pc = 0x1F5F68u;
    // 0x1f5f68: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1f5f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f5f6c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1f5f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1f5f70: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1f5f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f5f74: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x1f5f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f5f78: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1f5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1f5f7c: 0x0  nop
    ctx->pc = 0x1f5f7cu;
    // NOP
    // 0x1f5f80: 0x1010  mfhi        $v0
    ctx->pc = 0x1f5f80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f5f84: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x1f5f84u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f5f88: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f5f88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1f5f8c: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1f5f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f5f90: 0x9010  mfhi        $s2
    ctx->pc = 0x1f5f90u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1f5f94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f98: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x1F5F98u;
    SET_GPR_U32(ctx, 31, 0x1F5FA0u);
    ctx->pc = 0x1F5F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5F98u;
            // 0x1f5f9c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5FA0u; }
        if (ctx->pc != 0x1F5FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F5FA0u; }
        if (ctx->pc != 0x1F5FA0u) { return; }
    }
    ctx->pc = 0x1F5FA0u;
label_1f5fa0:
    // 0x1f5fa0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1F5FA0u;
    {
        const bool branch_taken_0x1f5fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5fa0) {
            ctx->pc = 0x1F6034u;
            goto label_1f6034;
        }
    }
    ctx->pc = 0x1F5FA8u;
    // 0x1f5fa8: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x1f5fa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f5fac: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1f5facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1f5fb0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5FB0u;
    {
        const bool branch_taken_0x1f5fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5fb0) {
            ctx->pc = 0x1F5FE8u;
            goto label_1f5fe8;
        }
    }
    ctx->pc = 0x1F5FB8u;
    // 0x1f5fb8: 0x8f828f88  lw          $v0, -0x7078($gp)
    ctx->pc = 0x1f5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938504)));
    // 0x1f5fbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5fc0: 0xaf828f88  sw          $v0, -0x7078($gp)
    ctx->pc = 0x1f5fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 2));
    // 0x1f5fc4: 0x8f828f88  lw          $v0, -0x7078($gp)
    ctx->pc = 0x1f5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938504)));
    // 0x1f5fc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f5fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f5fd0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f5fd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f5fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f5fd8: 0x8f828f88  lw          $v0, -0x7078($gp)
    ctx->pc = 0x1f5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938504)));
    // 0x1f5fdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f5fe0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F5FE0u;
    {
        const bool branch_taken_0x1f5fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5FE0u;
            // 0x1f5fe4: 0xaf828f88  sw          $v0, -0x7078($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fe0) {
            ctx->pc = 0x1F6034u;
            goto label_1f6034;
        }
    }
    ctx->pc = 0x1F5FE8u;
label_1f5fe8:
    // 0x1f5fe8: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1f5fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1f5fec: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F5FECu;
    {
        const bool branch_taken_0x1f5fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5FECu;
            // 0x1f5ff0: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5fec) {
            ctx->pc = 0x1F6034u;
            goto label_1f6034;
        }
    }
    ctx->pc = 0x1F5FF4u;
    // 0x1f5ff4: 0x97848fdc  lhu         $a0, -0x7024($gp)
    ctx->pc = 0x1f5ff4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938588)));
    // 0x1f5ff8: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x1f5ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1f5ffc: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1f5ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f6000: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f6004: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f6004u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1f6008: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f6008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f600c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6010: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1f6014: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x1f6014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1f6018: 0xa0400da0  sb          $zero, 0xDA0($v0)
    ctx->pc = 0x1f6018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3488), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f601c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1f601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1f6020: 0xac4507a0  sw          $a1, 0x7A0($v0)
    ctx->pc = 0x1f6020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1952), GPR_U32(ctx, 5));
    // 0x1f6024: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f6024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f6028: 0xa7828fdc  sh          $v0, -0x7024($gp)
    ctx->pc = 0x1f6028u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938588), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f602c: 0xa4d10000  sh          $s1, 0x0($a2)
    ctx->pc = 0x1f602cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1f6030: 0xa4d20002  sh          $s2, 0x2($a2)
    ctx->pc = 0x1f6030u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 18));
label_1f6034:
    // 0x1f6034: 0x0  nop
    ctx->pc = 0x1f6034u;
    // NOP
    // 0x1f6038: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f6038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f603c: 0x2a820180  slti        $v0, $s4, 0x180
    ctx->pc = 0x1f603cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)384) ? 1 : 0);
    // 0x1f6040: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1F6040u;
    {
        const bool branch_taken_0x1f6040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6040u;
            // 0x1f6044: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6040) {
            ctx->pc = 0x1F5F44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5f44;
        }
    }
    ctx->pc = 0x1F6048u;
label_1f6048:
    // 0x1f6048: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f6048u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f604c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f604cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f6050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6054: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1f6054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1f6058: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f6058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f605c: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f605cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f6060: 0x24a59490  addiu       $a1, $a1, -0x6B70
    ctx->pc = 0x1f6060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939792));
    // 0x1f6064: 0x24849550  addiu       $a0, $a0, -0x6AB0
    ctx->pc = 0x1f6064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939984));
    // 0x1f6068: 0x24639580  addiu       $v1, $v1, -0x6A80
    ctx->pc = 0x1f6068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940032));
label_1f606c:
    // 0x1f606c: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x1f606cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f6070: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x1f6070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1f6074: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1f6074u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1f6078: 0x675021  addu        $t2, $v1, $a3
    ctx->pc = 0x1f6078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f607c: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x1f607cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6080: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1f6080u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x1f6084: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x1f6084u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f6088: 0x29620030  slti        $v0, $t3, 0x30
    ctx->pc = 0x1f6088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1f608c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1f608cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1f6090: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1f6090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1f6094: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x1f6094u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6098: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1f6098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1f609c: 0xa5400002  sh          $zero, 0x2($t2)
    ctx->pc = 0x1f609cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f60a0: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x1f60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1f60a4: 0xa1200002  sb          $zero, 0x2($t1)
    ctx->pc = 0x1f60a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f60a8: 0xa5400004  sh          $zero, 0x4($t2)
    ctx->pc = 0x1f60a8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f60ac: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x1f60acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x1f60b0: 0xa1200003  sb          $zero, 0x3($t1)
    ctx->pc = 0x1f60b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f60b4: 0xa5400006  sh          $zero, 0x6($t2)
    ctx->pc = 0x1f60b4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f60b8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x1f60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x1f60bc: 0xa1200004  sb          $zero, 0x4($t1)
    ctx->pc = 0x1f60bcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f60c0: 0xa5400008  sh          $zero, 0x8($t2)
    ctx->pc = 0x1f60c0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f60c4: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x1f60c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x1f60c8: 0xa1200005  sb          $zero, 0x5($t1)
    ctx->pc = 0x1f60c8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f60cc: 0xa540000a  sh          $zero, 0xA($t2)
    ctx->pc = 0x1f60ccu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f60d0: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x1f60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x1f60d4: 0xa1200006  sb          $zero, 0x6($t1)
    ctx->pc = 0x1f60d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f60d8: 0xa540000c  sh          $zero, 0xC($t2)
    ctx->pc = 0x1f60d8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f60dc: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x1f60dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x1f60e0: 0xa1200007  sb          $zero, 0x7($t1)
    ctx->pc = 0x1f60e0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f60e4: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1F60E4u;
    {
        const bool branch_taken_0x1f60e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F60E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F60E4u;
            // 0x1f60e8: 0xa540000e  sh          $zero, 0xE($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f60e4) {
            ctx->pc = 0x1F606Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f606c;
        }
    }
    ctx->pc = 0x1F60ECu;
    // 0x1f60ec: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1f60ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1f60f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f60f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60f4: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1f60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1f60f8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f60f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f60fc: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1f60fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1f6100: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x1f6100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_1f6104:
    // 0x1f6104: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1f6104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f6108: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f6108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f610c: 0x24639350  addiu       $v1, $v1, -0x6CB0
    ctx->pc = 0x1f610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939472));
    // 0x1f6110: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f6114: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f6114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6118: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1f6118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x1f611c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1f611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f6120: 0x10400151  beqz        $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x1F6120u;
    {
        const bool branch_taken_0x1f6120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6120) {
            ctx->pc = 0x1F6668u;
            goto label_1f6668;
        }
    }
    ctx->pc = 0x1F6128u;
    // 0x1f6128: 0x8782900c  lh          $v0, -0x6FF4($gp)
    ctx->pc = 0x1f6128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938636)));
    // 0x1f612c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6130: 0xa782900c  sh          $v0, -0x6FF4($gp)
    ctx->pc = 0x1f6130u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938636), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f6134: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1f6134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f6138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f613c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1F613Cu;
    {
        const bool branch_taken_0x1f613c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f613c) {
            ctx->pc = 0x1F6308u;
            goto label_1f6308;
        }
    }
    ctx->pc = 0x1F6144u;
    // 0x1f6144: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1f6144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f6148: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F6148u;
    SET_GPR_U32(ctx, 31, 0x1F6150u);
    ctx->pc = 0x1F614Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6148u;
            // 0x1f614c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6150u; }
        if (ctx->pc != 0x1F6150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6150u; }
        if (ctx->pc != 0x1F6150u) { return; }
    }
    ctx->pc = 0x1F6150u;
label_1f6150:
    // 0x1f6150: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1f6150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1f6154: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F6154u;
    SET_GPR_U32(ctx, 31, 0x1F615Cu);
    ctx->pc = 0x1F6158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6154u;
            // 0x1f6158: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F615Cu; }
        if (ctx->pc != 0x1F615Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F615Cu; }
        if (ctx->pc != 0x1F615Cu) { return; }
    }
    ctx->pc = 0x1F615Cu;
label_1f615c:
    // 0x1f615c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F615Cu;
    {
        const bool branch_taken_0x1f615c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F615Cu;
            // 0x1f6160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f615c) {
            ctx->pc = 0x1F616Cu;
            goto label_1f616c;
        }
    }
    ctx->pc = 0x1F6164u;
    // 0x1f6164: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x1F6164u;
    SET_GPR_U32(ctx, 31, 0x1F616Cu);
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F616Cu; }
        if (ctx->pc != 0x1F616Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F616Cu; }
        if (ctx->pc != 0x1F616Cu) { return; }
    }
    ctx->pc = 0x1F616Cu;
label_1f616c:
    // 0x1f616c: 0x0  nop
    ctx->pc = 0x1f616cu;
    // NOP
    // 0x1f6170: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f6170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f6174: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x1f6174u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1f6178: 0x24639490  addiu       $v1, $v1, -0x6B70
    ctx->pc = 0x1f6178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939792));
    // 0x1f617c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1f617cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f6180: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f6180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6184: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f6184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f6188: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1f6188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1f618c: 0x24639550  addiu       $v1, $v1, -0x6AB0
    ctx->pc = 0x1f618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939984));
    // 0x1f6190: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f6190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f6194: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1f6194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1f6198: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x1f6198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f619c: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x1f619cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1f61a0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f61a4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1f61a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f61a8: 0x24429580  addiu       $v0, $v0, -0x6A80
    ctx->pc = 0x1f61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940032));
    // 0x1f61ac: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1f61acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f61b0: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x1f61b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f61b4: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x1f61b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f61b8: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x1F61B8u;
    SET_GPR_U32(ctx, 31, 0x1F61C0u);
    ctx->pc = 0x1F61BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F61B8u;
            // 0x1f61bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F61C0u; }
        if (ctx->pc != 0x1F61C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F61C0u; }
        if (ctx->pc != 0x1F61C0u) { return; }
    }
    ctx->pc = 0x1F61C0u;
label_1f61c0:
    // 0x1f61c0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1f61c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f61c4: 0x84500006  lh          $s0, 0x6($v0)
    ctx->pc = 0x1f61c4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1f61c8: 0x1e000006  bgtz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F61C8u;
    {
        const bool branch_taken_0x1f61c8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1F61CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F61C8u;
            // 0x1f61cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61c8) {
            ctx->pc = 0x1F61E4u;
            goto label_1f61e4;
        }
    }
    ctx->pc = 0x1F61D0u;
    // 0x1f61d0: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f61d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f61d8: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1f61d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1f61dc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1F61DCu;
    {
        const bool branch_taken_0x1f61dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F61E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F61DCu;
            // 0x1f61e0: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f61dc) {
            ctx->pc = 0x1F62B8u;
            goto label_1f62b8;
        }
    }
    ctx->pc = 0x1F61E4u;
label_1f61e4:
    // 0x1f61e4: 0x0  nop
    ctx->pc = 0x1f61e4u;
    // NOP
    // 0x1f61e8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1f61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1f61ec: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1f61ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1f61f0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1f61f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f61f4: 0x500018  mult        $zero, $v0, $s0
    ctx->pc = 0x1f61f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f61f8: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1f61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f61fc: 0x101fc2  srl         $v1, $s0, 31
    ctx->pc = 0x1f61fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x1f6200: 0x1010  mfhi        $v0
    ctx->pc = 0x1f6200u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f6204: 0x205001a  div         $zero, $s0, $a1
    ctx->pc = 0x1f6204u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f6208: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f6208u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1f620c: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x1f620cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f6210: 0xa010  mfhi        $s4
    ctx->pc = 0x1f6210u;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x1f6214: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f6214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6218: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x1F6218u;
    SET_GPR_U32(ctx, 31, 0x1F6220u);
    ctx->pc = 0x1F621Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6218u;
            // 0x1f621c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6220u; }
        if (ctx->pc != 0x1F6220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6220u; }
        if (ctx->pc != 0x1F6220u) { return; }
    }
    ctx->pc = 0x1F6220u;
label_1f6220:
    // 0x1f6220: 0x8f83901c  lw          $v1, -0x6FE4($gp)
    ctx->pc = 0x1f6220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f6224: 0x772021  addu        $a0, $v1, $s7
    ctx->pc = 0x1f6224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x1f6228: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F6228u;
    {
        const bool branch_taken_0x1f6228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6228u;
            // 0x1f622c: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6228) {
            ctx->pc = 0x1F626Cu;
            goto label_1f626c;
        }
    }
    ctx->pc = 0x1F6230u;
    // 0x1f6230: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f6230u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f6234: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1f6234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1f6238: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6238u;
    {
        const bool branch_taken_0x1f6238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6238) {
            ctx->pc = 0x1F626Cu;
            goto label_1f626c;
        }
    }
    ctx->pc = 0x1F6240u;
    // 0x1f6240: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f6244: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f6244u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f6248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f624c: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x1f624cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x1f6250: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f6250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f6254: 0x244401a0  addiu       $a0, $v0, 0x1A0
    ctx->pc = 0x1f6254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1f6258: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f625c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6260: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1f6264: 0xa4960000  sh          $s6, 0x0($a0)
    ctx->pc = 0x1f6264u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x1f6268: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x1f6268u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
label_1f626c:
    // 0x1f626c: 0x0  nop
    ctx->pc = 0x1f626cu;
    // NOP
    // 0x1f6270: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f6270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f6274: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1f6274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1f6278: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f6278u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f627c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F627Cu;
    {
        const bool branch_taken_0x1f627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f627c) {
            ctx->pc = 0x1F62B8u;
            goto label_1f62b8;
        }
    }
    ctx->pc = 0x1F6284u;
    // 0x1f6284: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1f6284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f6288: 0x97838fdc  lhu         $v1, -0x7024($gp)
    ctx->pc = 0x1f6288u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938588)));
    // 0x1f628c: 0x97848fe0  lhu         $a0, -0x7020($gp)
    ctx->pc = 0x1f628cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938592)));
    // 0x1f6290: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6294: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1f6294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1f6298: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f6298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f629c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f62a0: 0xa0400da0  sb          $zero, 0xDA0($v0)
    ctx->pc = 0x1f62a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3488), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f62a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f62a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f62a8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1f62a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f62ac: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f62acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f62b0: 0xac6507a0  sw          $a1, 0x7A0($v1)
    ctx->pc = 0x1f62b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1952), GPR_U32(ctx, 5));
    // 0x1f62b4: 0xa7828fe0  sh          $v0, -0x7020($gp)
    ctx->pc = 0x1f62b4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938592), (uint16_t)GPR_U32(ctx, 2));
label_1f62b8:
    // 0x1f62b8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1f62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f62bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f62bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f62c0: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F62C0u;
    SET_GPR_U32(ctx, 31, 0x1F62C8u);
    ctx->pc = 0x1F62C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F62C0u;
            // 0x1f62c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62C8u; }
        if (ctx->pc != 0x1F62C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62C8u; }
        if (ctx->pc != 0x1F62C8u) { return; }
    }
    ctx->pc = 0x1F62C8u;
label_1f62c8:
    // 0x1f62c8: 0x1a000006  blez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F62C8u;
    {
        const bool branch_taken_0x1f62c8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1f62c8) {
            ctx->pc = 0x1F62E4u;
            goto label_1f62e4;
        }
    }
    ctx->pc = 0x1F62D0u;
    // 0x1f62d0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F62D0u;
    {
        const bool branch_taken_0x1f62d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f62d0) {
            ctx->pc = 0x1F62E4u;
            goto label_1f62e4;
        }
    }
    ctx->pc = 0x1F62D8u;
    // 0x1f62d8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1f62d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f62dc: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F62DCu;
    SET_GPR_U32(ctx, 31, 0x1F62E4u);
    ctx->pc = 0x1F62E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F62DCu;
            // 0x1f62e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62E4u; }
        if (ctx->pc != 0x1F62E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F62E4u; }
        if (ctx->pc != 0x1F62E4u) { return; }
    }
    ctx->pc = 0x1F62E4u;
label_1f62e4:
    // 0x1f62e4: 0x0  nop
    ctx->pc = 0x1f62e4u;
    // NOP
    // 0x1f62e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1f62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f62ec: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x1f62ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f62f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f62f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f62f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f62f8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1f62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1f62fc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1f62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f6300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f6304: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1f6304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1f6308:
    // 0x1f6308: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1f6308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1f630c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1f630cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1f6310: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f6314: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1f6314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1f6318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f6318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f631c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1f631cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1f6320: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1f6320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1f6324: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1F6324u;
    {
        const bool branch_taken_0x1f6324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6324u;
            // 0x1f6328: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6324) {
            ctx->pc = 0x1F6650u;
            goto label_1f6650;
        }
    }
    ctx->pc = 0x1F632Cu;
label_1f632c:
    // 0x1f632c: 0x0  nop
    ctx->pc = 0x1f632cu;
    // NOP
    // 0x1f6330: 0x8f829008  lw          $v0, -0x6FF8($gp)
    ctx->pc = 0x1f6330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938632)));
    // 0x1f6334: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1f6334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f6338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f6338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f633c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f633cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6340: 0x122000bc  beqz        $s1, . + 4 + (0xBC << 2)
    ctx->pc = 0x1F6340u;
    {
        const bool branch_taken_0x1f6340 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6340) {
            ctx->pc = 0x1F6634u;
            goto label_1f6634;
        }
    }
    ctx->pc = 0x1F6348u;
    // 0x1f6348: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1f6348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f634c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F634Cu;
    SET_GPR_U32(ctx, 31, 0x1F6354u);
    ctx->pc = 0x1F6350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F634Cu;
            // 0x1f6350: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6354u; }
        if (ctx->pc != 0x1F6354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6354u; }
        if (ctx->pc != 0x1F6354u) { return; }
    }
    ctx->pc = 0x1F6354u;
label_1f6354:
    // 0x1f6354: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1f6354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1f6358: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F6358u;
    SET_GPR_U32(ctx, 31, 0x1F6360u);
    ctx->pc = 0x1F635Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6358u;
            // 0x1f635c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6360u; }
        if (ctx->pc != 0x1F6360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6360u; }
        if (ctx->pc != 0x1F6360u) { return; }
    }
    ctx->pc = 0x1F6360u;
label_1f6360:
    // 0x1f6360: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6360u;
    {
        const bool branch_taken_0x1f6360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6360u;
            // 0x1f6364: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6360) {
            ctx->pc = 0x1F6370u;
            goto label_1f6370;
        }
    }
    ctx->pc = 0x1F6368u;
    // 0x1f6368: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x1F6368u;
    SET_GPR_U32(ctx, 31, 0x1F6370u);
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6370u; }
        if (ctx->pc != 0x1F6370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6370u; }
        if (ctx->pc != 0x1F6370u) { return; }
    }
    ctx->pc = 0x1F6370u;
label_1f6370:
    // 0x1f6370: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1f6370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f6374: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f6374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f6378: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f6378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f637c: 0x24849490  addiu       $a0, $a0, -0x6B70
    ctx->pc = 0x1f637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939792));
    // 0x1f6380: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1f6380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f6384: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f6384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f6388: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1f6388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f638c: 0xc0b515c  jal         func_2D4570
    ctx->pc = 0x1F638Cu;
    SET_GPR_U32(ctx, 31, 0x1F6394u);
    ctx->pc = 0x1F6390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F638Cu;
            // 0x1f6390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4570u;
    if (runtime->hasFunction(0x2D4570u)) {
        auto targetFn = runtime->lookupFunction(0x2D4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6394u; }
        if (ctx->pc != 0x1F6394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuchi__5CFontFi_0x2d4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6394u; }
        if (ctx->pc != 0x1F6394u) { return; }
    }
    ctx->pc = 0x1F6394u;
label_1f6394:
    // 0x1f6394: 0x8f829008  lw          $v0, -0x6FF8($gp)
    ctx->pc = 0x1f6394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938632)));
    // 0x1f6398: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x1f6398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1f639c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f63a0: 0x84540100  lh          $s4, 0x100($v0)
    ctx->pc = 0x1f63a0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1f63a4: 0x1e800006  bgtz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F63A4u;
    {
        const bool branch_taken_0x1f63a4 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x1F63A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F63A4u;
            // 0x1f63a8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63a4) {
            ctx->pc = 0x1F63C0u;
            goto label_1f63c0;
        }
    }
    ctx->pc = 0x1F63ACu;
    // 0x1f63ac: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f63acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f63b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f63b4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f63b8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1F63B8u;
    {
        const bool branch_taken_0x1f63b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F63BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F63B8u;
            // 0x1f63bc: 0xa0430050  sb          $v1, 0x50($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f63b8) {
            ctx->pc = 0x1F64ACu;
            goto label_1f64ac;
        }
    }
    ctx->pc = 0x1F63C0u;
label_1f63c0:
    // 0x1f63c0: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1f63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1f63c4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1f63c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1f63c8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1f63c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f63cc: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x1f63ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f63d0: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1f63d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f63d4: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x1f63d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x1f63d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1f63d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1f63dc: 0x285001a  div         $zero, $s4, $a1
    ctx->pc = 0x1f63dcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f63e0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1f63e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1f63e4: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x1f63e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f63e8: 0x9810  mfhi        $s3
    ctx->pc = 0x1f63e8u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x1f63ec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f63ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f63f0: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x1F63F0u;
    SET_GPR_U32(ctx, 31, 0x1F63F8u);
    ctx->pc = 0x1F63F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F63F0u;
            // 0x1f63f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63F8u; }
        if (ctx->pc != 0x1F63F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F63F8u; }
        if (ctx->pc != 0x1F63F8u) { return; }
    }
    ctx->pc = 0x1F63F8u;
label_1f63f8:
    // 0x1f63f8: 0x8f83901c  lw          $v1, -0x6FE4($gp)
    ctx->pc = 0x1f63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f63fc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f6400: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x1f6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1f6404: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F6404u;
    {
        const bool branch_taken_0x1f6404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6404u;
            // 0x1f6408: 0x80630050  lb          $v1, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6404) {
            ctx->pc = 0x1F6450u;
            goto label_1f6450;
        }
    }
    ctx->pc = 0x1F640Cu;
    // 0x1f640c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f640cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f6410: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1f6410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1f6414: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F6414u;
    {
        const bool branch_taken_0x1f6414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6414) {
            ctx->pc = 0x1F6450u;
            goto label_1f6450;
        }
    }
    ctx->pc = 0x1F641Cu;
    // 0x1f641c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1f641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f6420: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1f6420u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6424: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1f6424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1f6428: 0xa0960000  sb          $s6, 0x0($a0)
    ctx->pc = 0x1f6428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 22));
    // 0x1f642c: 0x244401a0  addiu       $a0, $v0, 0x1A0
    ctx->pc = 0x1f642cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1f6430: 0xa49e0000  sh          $fp, 0x0($a0)
    ctx->pc = 0x1f6430u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 30));
    // 0x1f6434: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1f6434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f6438: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f6438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f643c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1f643cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x1f6440: 0xa4930002  sh          $s3, 0x2($a0)
    ctx->pc = 0x1f6440u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 19));
    // 0x1f6444: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f6444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f6448: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f644c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1f644cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1f6450:
    // 0x1f6450: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f6450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f6454: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f6454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f6458: 0x80420050  lb          $v0, 0x50($v0)
    ctx->pc = 0x1f6458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1f645c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F645Cu;
    {
        const bool branch_taken_0x1f645c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f645c) {
            ctx->pc = 0x1F64ACu;
            goto label_1f64ac;
        }
    }
    ctx->pc = 0x1F6464u;
    // 0x1f6464: 0x97848fdc  lhu         $a0, -0x7024($gp)
    ctx->pc = 0x1f6464u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938588)));
    // 0x1f6468: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f6468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f646c: 0x97858fe0  lhu         $a1, -0x7020($gp)
    ctx->pc = 0x1f646cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938592)));
    // 0x1f6470: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x1f6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1f6474: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1f6474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1f6478: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f6478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f647c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f647cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f6480: 0x24450da0  addiu       $a1, $v0, 0xDA0
    ctx->pc = 0x1f6480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
    // 0x1f6484: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x1f6484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1f6488: 0xac5107a0  sw          $s1, 0x7A0($v0)
    ctx->pc = 0x1f6488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1952), GPR_U32(ctx, 17));
    // 0x1f648c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1f648cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6490: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1f6490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1f6494: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6494u;
    {
        const bool branch_taken_0x1f6494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F6498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6494u;
            // 0x1f6498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6494) {
            ctx->pc = 0x1F64A0u;
            goto label_1f64a0;
        }
    }
    ctx->pc = 0x1F649Cu;
    // 0x1f649c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1f649cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f64a0:
    // 0x1f64a0: 0x97828fe0  lhu         $v0, -0x7020($gp)
    ctx->pc = 0x1f64a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938592)));
    // 0x1f64a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f64a8: 0xa7828fe0  sh          $v0, -0x7020($gp)
    ctx->pc = 0x1f64a8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938592), (uint16_t)GPR_U32(ctx, 2));
label_1f64ac:
    // 0x1f64ac: 0x0  nop
    ctx->pc = 0x1f64acu;
    // NOP
    // 0x1f64b0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f64b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f64b4: 0x24429550  addiu       $v0, $v0, -0x6AB0
    ctx->pc = 0x1f64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939984));
    // 0x1f64b8: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f64bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f64bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f64c0: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f64c4: 0xa2450000  sb          $a1, 0x0($s2)
    ctx->pc = 0x1f64c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f64c8: 0x24639580  addiu       $v1, $v1, -0x6A80
    ctx->pc = 0x1f64c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940032));
    // 0x1f64cc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1f64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f64d0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1f64d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f64d4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x1f64d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f64d8: 0xa6640000  sh          $a0, 0x0($s3)
    ctx->pc = 0x1f64d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f64dc: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1f64dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f64e0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F64E0u;
    SET_GPR_U32(ctx, 31, 0x1F64E8u);
    ctx->pc = 0x1F64E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64E0u;
            // 0x1f64e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64E8u; }
        if (ctx->pc != 0x1F64E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F64E8u; }
        if (ctx->pc != 0x1F64E8u) { return; }
    }
    ctx->pc = 0x1F64E8u;
label_1f64e8:
    // 0x1f64e8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f64e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64ec: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x1f64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f64f0: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1F64F0u;
    {
        const bool branch_taken_0x1f64f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F64F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F64F0u;
            // 0x1f64f4: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f64f0) {
            ctx->pc = 0x1F65B8u;
            goto label_1f65b8;
        }
    }
    ctx->pc = 0x1F64F8u;
    // 0x1f64f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f64f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f64fc: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1f64fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6500: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1f6500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f6504: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1f6504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6508: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1F6508u;
    {
        const bool branch_taken_0x1f6508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F650Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6508u;
            // 0x1f650c: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6508) {
            ctx->pc = 0x1F65A4u;
            goto label_1f65a4;
        }
    }
    ctx->pc = 0x1F6510u;
label_1f6510:
    // 0x1f6510: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f6510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f6514: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1f6514u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6518: 0x28c10015  slti        $at, $a2, 0x15
    ctx->pc = 0x1f6518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x1f651c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f651cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6520: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F6520u;
    {
        const bool branch_taken_0x1f6520 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6520u;
            // 0x1f6524: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6520) {
            ctx->pc = 0x1F65A4u;
            goto label_1f65a4;
        }
    }
    ctx->pc = 0x1F6528u;
    // 0x1f6528: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1f6528u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f652c: 0x1465001d  bne         $v1, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F652Cu;
    {
        const bool branch_taken_0x1f652c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F6530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F652Cu;
            // 0x1f6530: 0x26290001  addiu       $t1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f652c) {
            ctx->pc = 0x1F65A4u;
            goto label_1f65a4;
        }
    }
    ctx->pc = 0x1F6534u;
    // 0x1f6534: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F6534u;
    {
        const bool branch_taken_0x1f6534 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6534u;
            // 0x1f6538: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6534) {
            ctx->pc = 0x1F656Cu;
            goto label_1f656c;
        }
    }
    ctx->pc = 0x1F653Cu;
    // 0x1f653c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F653Cu;
    {
        const bool branch_taken_0x1f653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f653c) {
            ctx->pc = 0x1F6550u;
            goto label_1f6550;
        }
    }
    ctx->pc = 0x1F6544u;
label_1f6544:
    // 0x1f6544: 0x0  nop
    ctx->pc = 0x1f6544u;
    // NOP
    // 0x1f6548: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f6548u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f654c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f654cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1f6550:
    // 0x1f6550: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6550u;
    {
        const bool branch_taken_0x1f6550 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6550) {
            ctx->pc = 0x1F656Cu;
            goto label_1f656c;
        }
    }
    ctx->pc = 0x1F6558u;
    // 0x1f6558: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x1f6558u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1f655c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F655Cu;
    {
        const bool branch_taken_0x1f655c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f655c) {
            ctx->pc = 0x1F656Cu;
            goto label_1f656c;
        }
    }
    ctx->pc = 0x1F6564u;
    // 0x1f6564: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F6564u;
    {
        const bool branch_taken_0x1f6564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6564) {
            ctx->pc = 0x1F6544u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6544;
        }
    }
    ctx->pc = 0x1F656Cu;
label_1f656c:
    // 0x1f656c: 0x0  nop
    ctx->pc = 0x1f656cu;
    // NOP
    // 0x1f6570: 0x148182a  slt         $v1, $t2, $t0
    ctx->pc = 0x1f6570u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1f6574: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6574u;
    {
        const bool branch_taken_0x1f6574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6574) {
            ctx->pc = 0x1F659Cu;
            goto label_1f659c;
        }
    }
    ctx->pc = 0x1F657Cu;
    // 0x1f657c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x1f657cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f6580: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6584: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1f6584u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f6588: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f6588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f658c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f658cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6590: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6594: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x1f6594u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6598: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1f6598u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_1f659c:
    // 0x1f659c: 0x0  nop
    ctx->pc = 0x1f659cu;
    // NOP
    // 0x1f65a0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1f65a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1f65a4:
    // 0x1f65a4: 0x0  nop
    ctx->pc = 0x1f65a4u;
    // NOP
    // 0x1f65a8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1f65a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f65ac: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1F65ACu;
    {
        const bool branch_taken_0x1f65ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f65ac) {
            ctx->pc = 0x1F6510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6510;
        }
    }
    ctx->pc = 0x1F65B4u;
    // 0x1f65b4: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1f65b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_1f65b8:
    // 0x1f65b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f65b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f65bc: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x1f65bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1f65c0: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x1f65c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1f65c4: 0x24070066  addiu       $a3, $zero, 0x66
    ctx->pc = 0x1f65c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1f65c8: 0xc0b5134  jal         func_2D44D0
    ctx->pc = 0x1F65C8u;
    SET_GPR_U32(ctx, 31, 0x1F65D0u);
    ctx->pc = 0x1F65CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F65C8u;
            // 0x1f65cc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44D0u;
    if (runtime->hasFunction(0x2D44D0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F65D0u; }
        if (ctx->pc != 0x1F65D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__5CFontFiiii_0x2d44d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F65D0u; }
        if (ctx->pc != 0x1F65D0u) { return; }
    }
    ctx->pc = 0x1F65D0u;
label_1f65d0:
    // 0x1f65d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f65d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f65d4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F65D4u;
    SET_GPR_U32(ctx, 31, 0x1F65DCu);
    ctx->pc = 0x1F65D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F65D4u;
            // 0x1f65d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F65DCu; }
        if (ctx->pc != 0x1F65DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F65DCu; }
        if (ctx->pc != 0x1F65DCu) { return; }
    }
    ctx->pc = 0x1F65DCu;
label_1f65dc:
    // 0x1f65dc: 0x1a80000a  blez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x1F65DCu;
    {
        const bool branch_taken_0x1f65dc = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1f65dc) {
            ctx->pc = 0x1F6608u;
            goto label_1f6608;
        }
    }
    ctx->pc = 0x1F65E4u;
    // 0x1f65e4: 0x16c00008  bnez        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F65E4u;
    {
        const bool branch_taken_0x1f65e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f65e4) {
            ctx->pc = 0x1F6608u;
            goto label_1f6608;
        }
    }
    ctx->pc = 0x1F65ECu;
    // 0x1f65ec: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1f65ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f65f0: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x1F65F0u;
    SET_GPR_U32(ctx, 31, 0x1F65F8u);
    ctx->pc = 0x1F65F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F65F0u;
            // 0x1f65f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F65F8u; }
        if (ctx->pc != 0x1F65F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F65F8u; }
        if (ctx->pc != 0x1F65F8u) { return; }
    }
    ctx->pc = 0x1F65F8u;
label_1f65f8:
    // 0x1f65f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f65fc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1f65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f6600: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x1f6600u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6604: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1f6604u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_1f6608:
    // 0x1f6608: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1f6608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f660c: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x1f660cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f6610: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f6610u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f6614: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f6614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f6618: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1f6618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x1f661c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1f661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f6620: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1f6620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1f6624: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1f6624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1f6628: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1f6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f662c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f6630: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1f6630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1f6634:
    // 0x1f6634: 0x0  nop
    ctx->pc = 0x1f6634u;
    // NOP
    // 0x1f6638: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f6638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f663c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6640: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1f6640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1f6644: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1f6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f6648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f664c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1f664cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_1f6650:
    // 0x1f6650: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x1f6650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1f6654: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1f6654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f6658: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f6658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f665c: 0x80520008  lb          $s2, 0x8($v0)
    ctx->pc = 0x1f665cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f6660: 0x641ff32  bgez        $s2, . + 4 + (-0xCE << 2)
    ctx->pc = 0x1F6660u;
    {
        const bool branch_taken_0x1f6660 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1f6660) {
            ctx->pc = 0x1F632Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f632c;
        }
    }
    ctx->pc = 0x1F6668u;
label_1f6668:
    // 0x1f6668: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1f6668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1f666c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1f666cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1f6670: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f6674: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1f6674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1f6678: 0x2ae20020  slti        $v0, $s7, 0x20
    ctx->pc = 0x1f6678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1f667c: 0x1440fea1  bnez        $v0, . + 4 + (-0x15F << 2)
    ctx->pc = 0x1F667Cu;
    {
        const bool branch_taken_0x1f667c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f667c) {
            ctx->pc = 0x1F6104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6104;
        }
    }
    ctx->pc = 0x1F6684u;
    // 0x1f6684: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f6684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f6688: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6688u;
    {
        const bool branch_taken_0x1f6688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6688) {
            ctx->pc = 0x1F66B0u;
            goto label_1f66b0;
        }
    }
    ctx->pc = 0x1F6690u;
    // 0x1f6690: 0x8f82901c  lw          $v0, -0x6FE4($gp)
    ctx->pc = 0x1f6690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938652)));
    // 0x1f6694: 0x80420055  lb          $v0, 0x55($v0)
    ctx->pc = 0x1f6694u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 85)));
    // 0x1f6698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6698u;
    {
        const bool branch_taken_0x1f6698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6698) {
            ctx->pc = 0x1F66B0u;
            goto label_1f66b0;
        }
    }
    ctx->pc = 0x1F66A0u;
    // 0x1f66a0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1f66a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1f66a4: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1f66a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1f66a8: 0xc0bd8f4  jal         func_2F63D0
    ctx->pc = 0x1F66A8u;
    SET_GPR_U32(ctx, 31, 0x1F66B0u);
    ctx->pc = 0x1F66ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F66A8u;
            // 0x1f66ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F66B0u; }
        if (ctx->pc != 0x1F66B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F66B0u; }
        if (ctx->pc != 0x1F66B0u) { return; }
    }
    ctx->pc = 0x1F66B0u;
label_1f66b0:
    // 0x1f66b0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f66b4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1f66b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f66b8: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F66B8u;
    {
        const bool branch_taken_0x1f66b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F66BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F66B8u;
            // 0x1f66bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66b8) {
            ctx->pc = 0x1F6704u;
            goto label_1f6704;
        }
    }
    ctx->pc = 0x1F66C0u;
    // 0x1f66c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f66c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f66c4:
    // 0x1f66c4: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x1f66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x1f66c8: 0x244201a0  addiu       $v0, $v0, 0x1A0
    ctx->pc = 0x1f66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x1f66cc: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1f66ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f66d0: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x1f66d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1f66d4: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x1F66D4u;
    SET_GPR_U32(ctx, 31, 0x1F66DCu);
    ctx->pc = 0x1F66D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F66D4u;
            // 0x1f66d8: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F66DCu; }
        if (ctx->pc != 0x1F66DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F66DCu; }
        if (ctx->pc != 0x1F66DCu) { return; }
    }
    ctx->pc = 0x1F66DCu;
label_1f66dc:
    // 0x1f66dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F66DCu;
    {
        const bool branch_taken_0x1f66dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f66dc) {
            ctx->pc = 0x1F66F0u;
            goto label_1f66f0;
        }
    }
    ctx->pc = 0x1F66E4u;
    // 0x1f66e4: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x1f66e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f66e8: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1f66e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1f66ec: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x1f66ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
label_1f66f0:
    // 0x1f66f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1f66f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f66f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f66f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f66f8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1f66f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f66fc: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F66FCu;
    {
        const bool branch_taken_0x1f66fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F66FCu;
            // 0x1f6700: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f66fc) {
            ctx->pc = 0x1F66C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f66c4;
        }
    }
    ctx->pc = 0x1F6704u;
label_1f6704:
    // 0x1f6704: 0x0  nop
    ctx->pc = 0x1f6704u;
    // NOP
    // 0x1f6708: 0x97838fe0  lhu         $v1, -0x7020($gp)
    ctx->pc = 0x1f6708u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938592)));
    // 0x1f670c: 0x97828fdc  lhu         $v0, -0x7024($gp)
    ctx->pc = 0x1f670cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938588)));
    // 0x1f6710: 0xaf808f8c  sw          $zero, -0x7074($gp)
    ctx->pc = 0x1f6710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938508), GPR_U32(ctx, 0));
    // 0x1f6714: 0xaf808f90  sw          $zero, -0x7070($gp)
    ctx->pc = 0x1f6714u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938512), GPR_U32(ctx, 0));
    // 0x1f6718: 0xaf808fec  sw          $zero, -0x7014($gp)
    ctx->pc = 0x1f6718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938604), GPR_U32(ctx, 0));
    // 0x1f671c: 0xaf808fe8  sw          $zero, -0x7018($gp)
    ctx->pc = 0x1f671cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938600), GPR_U32(ctx, 0));
    // 0x1f6720: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1f6720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f6724: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1f6724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f6728: 0x102000ab  beqz        $at, . + 4 + (0xAB << 2)
    ctx->pc = 0x1F6728u;
    {
        const bool branch_taken_0x1f6728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6728u;
            // 0x1f672c: 0xaf808fe4  sw          $zero, -0x701C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6728) {
            ctx->pc = 0x1F69D8u;
            goto label_1f69d8;
        }
    }
    ctx->pc = 0x1F6730u;
    // 0x1f6730: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1f6730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f6734: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f6734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6738: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F6738u;
    SET_GPR_U32(ctx, 31, 0x1F6740u);
    ctx->pc = 0x1F673Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6738u;
            // 0x1f673c: 0xa7908fa8  sh          $s0, -0x7058($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938536), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6740u; }
        if (ctx->pc != 0x1F6740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6740u; }
        if (ctx->pc != 0x1F6740u) { return; }
    }
    ctx->pc = 0x1F6740u;
label_1f6740:
    // 0x1f6740: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f6740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f6744: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F6744u;
    SET_GPR_U32(ctx, 31, 0x1F674Cu);
    ctx->pc = 0x1F6748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6744u;
            // 0x1f6748: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F674Cu; }
        if (ctx->pc != 0x1F674Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F674Cu; }
        if (ctx->pc != 0x1F674Cu) { return; }
    }
    ctx->pc = 0x1F674Cu;
label_1f674c:
    // 0x1f674c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F674Cu;
    {
        const bool branch_taken_0x1f674c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F674Cu;
            // 0x1f6750: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f674c) {
            ctx->pc = 0x1F676Cu;
            goto label_1f676c;
        }
    }
    ctx->pc = 0x1F6754u;
    // 0x1f6754: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1f6754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f6758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f675c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f675cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f6760: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f6760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1f6764: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1f6764u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f6768: 0xa0400009  sb          $zero, 0x9($v0)
    ctx->pc = 0x1f6768u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 0));
label_1f676c:
    // 0x1f676c: 0xaf828f8c  sw          $v0, -0x7074($gp)
    ctx->pc = 0x1f676cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938508), GPR_U32(ctx, 2));
    // 0x1f6770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f6770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f6774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6778: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F6778u;
    {
        const bool branch_taken_0x1f6778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6778u;
            // 0x1f677c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6778) {
            ctx->pc = 0x1F6824u;
            goto label_1f6824;
        }
    }
    ctx->pc = 0x1F6780u;
    // 0x1f6780: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f6780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6784:
    // 0x1f6784: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F6784u;
    {
        const bool branch_taken_0x1f6784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6784) {
            ctx->pc = 0x1F67D4u;
            goto label_1f67d4;
        }
    }
    ctx->pc = 0x1F678Cu;
    // 0x1f678c: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1f678cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f6790: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F6790u;
    SET_GPR_U32(ctx, 31, 0x1F6798u);
    ctx->pc = 0x1F6794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6790u;
            // 0x1f6794: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6798u; }
        if (ctx->pc != 0x1F6798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6798u; }
        if (ctx->pc != 0x1F6798u) { return; }
    }
    ctx->pc = 0x1F6798u;
label_1f6798:
    // 0x1f6798: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f6798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f679c: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F679Cu;
    SET_GPR_U32(ctx, 31, 0x1F67A4u);
    ctx->pc = 0x1F67A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F679Cu;
            // 0x1f67a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F67A4u; }
        if (ctx->pc != 0x1F67A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F67A4u; }
        if (ctx->pc != 0x1F67A4u) { return; }
    }
    ctx->pc = 0x1F67A4u;
label_1f67a4:
    // 0x1f67a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F67A4u;
    {
        const bool branch_taken_0x1f67a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f67a4) {
            ctx->pc = 0x1F67C4u;
            goto label_1f67c4;
        }
    }
    ctx->pc = 0x1F67ACu;
    // 0x1f67ac: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1f67acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f67b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f67b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f67b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f67b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f67b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1f67bc: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1f67bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f67c0: 0xa0400009  sb          $zero, 0x9($v0)
    ctx->pc = 0x1f67c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 0));
label_1f67c4:
    // 0x1f67c4: 0x0  nop
    ctx->pc = 0x1f67c4u;
    // NOP
    // 0x1f67c8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f67c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1f67cc: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x1f67ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f67d0: 0x0  nop
    ctx->pc = 0x1f67d0u;
    // NOP
label_1f67d4:
    // 0x1f67d4: 0x0  nop
    ctx->pc = 0x1f67d4u;
    // NOP
    // 0x1f67d8: 0x97828fdc  lhu         $v0, -0x7024($gp)
    ctx->pc = 0x1f67d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938588)));
    // 0x1f67dc: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x1f67dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f67e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F67E0u;
    {
        const bool branch_taken_0x1f67e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f67e0) {
            ctx->pc = 0x1F67F0u;
            goto label_1f67f0;
        }
    }
    ctx->pc = 0x1F67E8u;
    // 0x1f67e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F67E8u;
    {
        const bool branch_taken_0x1f67e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F67ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F67E8u;
            // 0x1f67ec: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f67e8) {
            ctx->pc = 0x1F67F8u;
            goto label_1f67f8;
        }
    }
    ctx->pc = 0x1F67F0u;
label_1f67f0:
    // 0x1f67f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f67f4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1f67f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_1f67f8:
    // 0x1f67f8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1f67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1f67fc: 0x8c4407a0  lw          $a0, 0x7A0($v0)
    ctx->pc = 0x1f67fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1952)));
    // 0x1f6800: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1f6800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1f6804: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f6804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f6808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f6808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f680c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f680cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1f6810: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x1f6810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1f6814: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x1f6814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f6818: 0x80630da0  lb          $v1, 0xDA0($v1)
    ctx->pc = 0x1f6818u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x1f681c: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1F681Cu;
    {
        const bool branch_taken_0x1f681c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F681Cu;
            // 0x1f6820: 0xa2230009  sb          $v1, 0x9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f681c) {
            ctx->pc = 0x1F6784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f6784;
        }
    }
    ctx->pc = 0x1F6824u;
label_1f6824:
    // 0x1f6824: 0x0  nop
    ctx->pc = 0x1f6824u;
    // NOP
    // 0x1f6828: 0x8f828f8c  lw          $v0, -0x7074($gp)
    ctx->pc = 0x1f6828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    // 0x1f682c: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1f682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f6830: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1f6830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6834: 0xaf808fe4  sw          $zero, -0x701C($gp)
    ctx->pc = 0x1f6834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938596), GPR_U32(ctx, 0));
    // 0x1f6838: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F6838u;
    SET_GPR_U32(ctx, 31, 0x1F6840u);
    ctx->pc = 0x1F683Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6838u;
            // 0x1f683c: 0xaf828f90  sw          $v0, -0x7070($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6840u; }
        if (ctx->pc != 0x1F6840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6840u; }
        if (ctx->pc != 0x1F6840u) { return; }
    }
    ctx->pc = 0x1F6840u;
label_1f6840:
    // 0x1f6840: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f6840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f6844: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F6844u;
    SET_GPR_U32(ctx, 31, 0x1F684Cu);
    ctx->pc = 0x1F6848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6844u;
            // 0x1f6848: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F684Cu; }
        if (ctx->pc != 0x1F684Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F684Cu; }
        if (ctx->pc != 0x1F684Cu) { return; }
    }
    ctx->pc = 0x1F684Cu;
label_1f684c:
    // 0x1f684c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F684Cu;
    {
        const bool branch_taken_0x1f684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f684c) {
            ctx->pc = 0x1F6864u;
            goto label_1f6864;
        }
    }
    ctx->pc = 0x1F6854u;
    // 0x1f6854: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1f6854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1f6858: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f6858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f685c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f685cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f6860: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f6860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1f6864:
    // 0x1f6864: 0xc7818760  lwc1        $f1, -0x78A0($gp)
    ctx->pc = 0x1f6864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6868: 0xaf828fe8  sw          $v0, -0x7018($gp)
    ctx->pc = 0x1f6868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938600), GPR_U32(ctx, 2));
    // 0x1f686c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f686cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f6870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6874: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f6874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f687c: 0x0  nop
    ctx->pc = 0x1f687cu;
    // NOP
    // 0x1f6880: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f6880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f6884: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f6884u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6888: 0x0  nop
    ctx->pc = 0x1f6888u;
    // NOP
    // 0x1f688c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F688Cu;
    {
        const bool branch_taken_0x1f688c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F688Cu;
            // 0x1f6890: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f688c) {
            ctx->pc = 0x1F6898u;
            goto label_1f6898;
        }
    }
    ctx->pc = 0x1F6894u;
    // 0x1f6894: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1f6894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f6898:
    // 0x1f6898: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1f6898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f689c: 0x1020004c  beqz        $at, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F689Cu;
    {
        const bool branch_taken_0x1f689c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F689Cu;
            // 0x1f68a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f689c) {
            ctx->pc = 0x1F69D0u;
            goto label_1f69d0;
        }
    }
    ctx->pc = 0x1F68A4u;
label_1f68a4:
    // 0x1f68a4: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F68A4u;
    {
        const bool branch_taken_0x1f68a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f68a4) {
            ctx->pc = 0x1F68ECu;
            goto label_1f68ec;
        }
    }
    ctx->pc = 0x1F68ACu;
    // 0x1f68ac: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1f68acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1f68b0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F68B0u;
    SET_GPR_U32(ctx, 31, 0x1F68B8u);
    ctx->pc = 0x1F68B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68B0u;
            // 0x1f68b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68B8u; }
        if (ctx->pc != 0x1F68B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68B8u; }
        if (ctx->pc != 0x1F68B8u) { return; }
    }
    ctx->pc = 0x1F68B8u;
label_1f68b8:
    // 0x1f68b8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1f68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f68bc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F68BCu;
    SET_GPR_U32(ctx, 31, 0x1F68C4u);
    ctx->pc = 0x1F68C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68BCu;
            // 0x1f68c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68C4u; }
        if (ctx->pc != 0x1F68C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68C4u; }
        if (ctx->pc != 0x1F68C4u) { return; }
    }
    ctx->pc = 0x1F68C4u;
label_1f68c4:
    // 0x1f68c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F68C4u;
    {
        const bool branch_taken_0x1f68c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f68c4) {
            ctx->pc = 0x1F68DCu;
            goto label_1f68dc;
        }
    }
    ctx->pc = 0x1F68CCu;
    // 0x1f68cc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1f68ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1f68d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f68d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f68d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f68d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f68d8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f68d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1f68dc:
    // 0x1f68dc: 0x0  nop
    ctx->pc = 0x1f68dcu;
    // NOP
    // 0x1f68e0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1f68e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1f68e4: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x1f68e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f68e8: 0x0  nop
    ctx->pc = 0x1f68e8u;
    // NOP
label_1f68ec:
    // 0x1f68ec: 0x0  nop
    ctx->pc = 0x1f68ecu;
    // NOP
    // 0x1f68f0: 0x97828fdc  lhu         $v0, -0x7024($gp)
    ctx->pc = 0x1f68f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938588)));
    // 0x1f68f4: 0x262082a  slt         $at, $s3, $v0
    ctx->pc = 0x1f68f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f68f8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F68F8u;
    {
        const bool branch_taken_0x1f68f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68F8u;
            // 0x1f68fc: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68f8) {
            ctx->pc = 0x1F695Cu;
            goto label_1f695c;
        }
    }
    ctx->pc = 0x1F6900u;
    // 0x1f6900: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x1F6900u;
    SET_GPR_U32(ctx, 31, 0x1F6908u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6908u; }
        if (ctx->pc != 0x1F6908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6908u; }
        if (ctx->pc != 0x1F6908u) { return; }
    }
    ctx->pc = 0x1F6908u;
label_1f6908:
    // 0x1f6908: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1f6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1f690c: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F690Cu;
    {
        const bool branch_taken_0x1f690c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F690Cu;
            // 0x1f6910: 0x52001a  div         $zero, $v0, $s2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f690c) {
            ctx->pc = 0x1F6918u;
            goto label_1f6918;
        }
    }
    ctx->pc = 0x1F6914u;
    // 0x1f6914: 0x1cd  break       0, 7
    ctx->pc = 0x1f6914u;
    runtime->handleBreak(rdram, ctx);
label_1f6918:
    // 0x1f6918: 0x1812  mflo        $v1
    ctx->pc = 0x1f6918u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1f691c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f6920: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x1f6920u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f6924: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6924u;
    {
        const bool branch_taken_0x1f6924 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6924u;
            // 0x1f6928: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6924) {
            ctx->pc = 0x1F6930u;
            goto label_1f6930;
        }
    }
    ctx->pc = 0x1F692Cu;
    // 0x1f692c: 0x1cd  break       0, 7
    ctx->pc = 0x1f692cu;
    runtime->handleBreak(rdram, ctx);
label_1f6930:
    // 0x1f6930: 0x1012  mflo        $v0
    ctx->pc = 0x1f6930u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6934: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1f6934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f6938: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x1F6938u;
    SET_GPR_U32(ctx, 31, 0x1F6940u);
    ctx->pc = 0x1F693Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6938u;
            // 0x1f693c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6940u; }
        if (ctx->pc != 0x1F6940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6940u; }
        if (ctx->pc != 0x1F6940u) { return; }
    }
    ctx->pc = 0x1F6940u;
label_1f6940:
    // 0x1f6940: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1f6940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1f6944: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6944u;
    {
        const bool branch_taken_0x1f6944 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6944u;
            // 0x1f6948: 0x52001a  div         $zero, $v0, $s2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6944) {
            ctx->pc = 0x1F6950u;
            goto label_1f6950;
        }
    }
    ctx->pc = 0x1F694Cu;
    // 0x1f694c: 0x1cd  break       0, 7
    ctx->pc = 0x1f694cu;
    runtime->handleBreak(rdram, ctx);
label_1f6950:
    // 0x1f6950: 0x1012  mflo        $v0
    ctx->pc = 0x1f6950u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6954: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F6954u;
    {
        const bool branch_taken_0x1f6954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6954u;
            // 0x1f6958: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6954) {
            ctx->pc = 0x1F69A8u;
            goto label_1f69a8;
        }
    }
    ctx->pc = 0x1F695Cu;
label_1f695c:
    // 0x1f695c: 0x0  nop
    ctx->pc = 0x1f695cu;
    // NOP
    // 0x1f6960: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x1F6960u;
    SET_GPR_U32(ctx, 31, 0x1F6968u);
    ctx->pc = 0x1F6964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6960u;
            // 0x1f6964: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6968u; }
        if (ctx->pc != 0x1F6968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6968u; }
        if (ctx->pc != 0x1F6968u) { return; }
    }
    ctx->pc = 0x1F6968u;
label_1f6968:
    // 0x1f6968: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x1f6968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1f696c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1f696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f6970: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f6970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1f6974: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6974u;
    {
        const bool branch_taken_0x1f6974 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6974u;
            // 0x1f6978: 0x52001a  div         $zero, $v0, $s2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6974) {
            ctx->pc = 0x1F6980u;
            goto label_1f6980;
        }
    }
    ctx->pc = 0x1F697Cu;
    // 0x1f697c: 0x1cd  break       0, 7
    ctx->pc = 0x1f697cu;
    runtime->handleBreak(rdram, ctx);
label_1f6980:
    // 0x1f6980: 0x1012  mflo        $v0
    ctx->pc = 0x1f6980u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f6984: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1f6984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f6988: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x1F6988u;
    SET_GPR_U32(ctx, 31, 0x1F6990u);
    ctx->pc = 0x1F698Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6988u;
            // 0x1f698c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6990u; }
        if (ctx->pc != 0x1F6990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6990u; }
        if (ctx->pc != 0x1F6990u) { return; }
    }
    ctx->pc = 0x1F6990u;
label_1f6990:
    // 0x1f6990: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1f6990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1f6994: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6994u;
    {
        const bool branch_taken_0x1f6994 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6994u;
            // 0x1f6998: 0x52001a  div         $zero, $v0, $s2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6994) {
            ctx->pc = 0x1F69A0u;
            goto label_1f69a0;
        }
    }
    ctx->pc = 0x1F699Cu;
    // 0x1f699c: 0x1cd  break       0, 7
    ctx->pc = 0x1f699cu;
    runtime->handleBreak(rdram, ctx);
label_1f69a0:
    // 0x1f69a0: 0x1012  mflo        $v0
    ctx->pc = 0x1f69a0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f69a4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f69a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1f69a8:
    // 0x1f69a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1f69a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f69ac: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f69acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f69b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f69b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1f69b4: 0x8f838fe4  lw          $v1, -0x701C($gp)
    ctx->pc = 0x1f69b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938596)));
    // 0x1f69b8: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x1f69b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f69bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f69bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69c0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1f69c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f69c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f69c8: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1F69C8u;
    {
        const bool branch_taken_0x1f69c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F69CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F69C8u;
            // 0x1f69cc: 0xaf838fe4  sw          $v1, -0x701C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938596), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69c8) {
            ctx->pc = 0x1F68A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f68a4;
        }
    }
    ctx->pc = 0x1F69D0u;
label_1f69d0:
    // 0x1f69d0: 0x8f828fe8  lw          $v0, -0x7018($gp)
    ctx->pc = 0x1f69d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938600)));
    // 0x1f69d4: 0xaf828fec  sw          $v0, -0x7014($gp)
    ctx->pc = 0x1f69d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938604), GPR_U32(ctx, 2));
label_1f69d8:
    // 0x1f69d8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1f69d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1f69dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F69DCu;
    {
        const bool branch_taken_0x1f69dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f69dc) {
            ctx->pc = 0x1F69ECu;
            goto label_1f69ec;
        }
    }
    ctx->pc = 0x1F69E4u;
    // 0x1f69e4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1f69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f69e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f69ec:
    // 0x1f69ec: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x1f69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1f69f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F69F0u;
    {
        const bool branch_taken_0x1f69f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f69f0) {
            ctx->pc = 0x1F6A00u;
            goto label_1f6a00;
        }
    }
    ctx->pc = 0x1F69F8u;
    // 0x1f69f8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1f69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f69fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f69fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f6a00:
    // 0x1f6a00: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1f6a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1f6a04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6A04u;
    {
        const bool branch_taken_0x1f6a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6a04) {
            ctx->pc = 0x1F6A14u;
            goto label_1f6a14;
        }
    }
    ctx->pc = 0x1F6A0Cu;
    // 0x1f6a0c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1f6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f6a10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f6a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1f6a14:
    // 0x1f6a14: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1f6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f6a18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6A18u;
    {
        const bool branch_taken_0x1f6a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A18u;
            // 0x1f6a1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a18) {
            ctx->pc = 0x1F6A2Cu;
            goto label_1f6a2c;
        }
    }
    ctx->pc = 0x1F6A20u;
    // 0x1f6a20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f6a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6a24: 0xa3828fb0  sb          $v0, -0x7050($gp)
    ctx->pc = 0x1f6a24u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938544), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f6a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f6a2c:
    // 0x1f6a2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f6a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f6a30: 0x34018760  ori         $at, $zero, 0x8760
    ctx->pc = 0x1f6a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34656);
    // 0x1f6a34: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1f6a34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f6a38: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f6a38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f6a3c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f6a3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f6a40: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f6a40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f6a44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f6a44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6a48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f6a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f6a4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f6a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A58u;
            // 0x1f6a5c: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6A60u;
}
