#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MODEL_LIGHT_COLOR__FP12RS_STACKDATAi
// Address: 0x1e3d50 - 0x1e3e40
void ps2__SET_MODEL_LIGHT_COLOR__FP12RS_STACKDATAi_0x1e3d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MODEL_LIGHT_COLOR__FP12RS_STACKDATAi_0x1e3d50");
#endif

    switch (ctx->pc) {
        case 0x1e3d8cu: goto label_1e3d8c;
        case 0x1e3d9cu: goto label_1e3d9c;
        case 0x1e3dacu: goto label_1e3dac;
        case 0x1e3dbcu: goto label_1e3dbc;
        case 0x1e3dd0u: goto label_1e3dd0;
        case 0x1e3de8u: goto label_1e3de8;
        case 0x1e3e20u: goto label_1e3e20;
        default: break;
    }

    ctx->pc = 0x1e3d50u;

    // 0x1e3d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3d54: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1e3d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e3d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3d5c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1e3d5cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e3d60: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1e3d60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e3d64: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e3d64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e3d68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3D68u;
    {
        const bool branch_taken_0x1e3d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D68u;
            // 0x1e3d6c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d68) {
            ctx->pc = 0x1E3D7Cu;
            goto label_1e3d7c;
        }
    }
    ctx->pc = 0x1E3D70u;
    // 0x1e3d70: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x1e3d70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e3d74: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3D74u;
    {
        const bool branch_taken_0x1e3d74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D74u;
            // 0x1e3d78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d74) {
            ctx->pc = 0x1E3D84u;
            goto label_1e3d84;
        }
    }
    ctx->pc = 0x1E3D7Cu;
label_1e3d7c:
    // 0x1e3d7c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1E3D7Cu;
    {
        const bool branch_taken_0x1e3d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D7Cu;
            // 0x1e3d80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d7c) {
            ctx->pc = 0x1E3E24u;
            goto label_1e3e24;
        }
    }
    ctx->pc = 0x1E3D84u;
label_1e3d84:
    // 0x1e3d84: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3D84u;
    SET_GPR_U32(ctx, 31, 0x1E3D8Cu);
    ctx->pc = 0x1E3D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D84u;
            // 0x1e3d88: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D8Cu; }
        if (ctx->pc != 0x1E3D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D8Cu; }
        if (ctx->pc != 0x1E3D8Cu) { return; }
    }
    ctx->pc = 0x1E3D8Cu;
label_1e3d8c:
    // 0x1e3d8c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e3d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3d90: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e3d90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e3d94: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3D94u;
    SET_GPR_U32(ctx, 31, 0x1E3D9Cu);
    ctx->pc = 0x1E3D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D94u;
            // 0x1e3d98: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D9Cu; }
        if (ctx->pc != 0x1E3D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D9Cu; }
        if (ctx->pc != 0x1E3D9Cu) { return; }
    }
    ctx->pc = 0x1E3D9Cu;
label_1e3d9c:
    // 0x1e3d9c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e3d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3da0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1e3da0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1e3da4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3DA4u;
    SET_GPR_U32(ctx, 31, 0x1E3DACu);
    ctx->pc = 0x1E3DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DA4u;
            // 0x1e3da8: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DACu; }
        if (ctx->pc != 0x1E3DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DACu; }
        if (ctx->pc != 0x1E3DACu) { return; }
    }
    ctx->pc = 0x1E3DACu;
label_1e3dac:
    // 0x1e3dac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e3dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3db0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1e3db0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1e3db4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3DB4u;
    SET_GPR_U32(ctx, 31, 0x1E3DBCu);
    ctx->pc = 0x1E3DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DB4u;
            // 0x1e3db8: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DBCu; }
        if (ctx->pc != 0x1E3DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DBCu; }
        if (ctx->pc != 0x1E3DBCu) { return; }
    }
    ctx->pc = 0x1E3DBCu;
label_1e3dbc:
    // 0x1e3dbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e3dc0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3DC0u;
    {
        const bool branch_taken_0x1e3dc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DC0u;
            // 0x1e3dc4: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dc0) {
            ctx->pc = 0x1E3DD4u;
            goto label_1e3dd4;
        }
    }
    ctx->pc = 0x1E3DC8u;
    // 0x1e3dc8: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E3DC8u;
    SET_GPR_U32(ctx, 31, 0x1E3DD0u);
    ctx->pc = 0x1E3DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DC8u;
            // 0x1e3dcc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DD0u; }
        if (ctx->pc != 0x1E3DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DD0u; }
        if (ctx->pc != 0x1E3DD0u) { return; }
    }
    ctx->pc = 0x1E3DD0u;
label_1e3dd0:
    // 0x1e3dd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e3dd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3dd4:
    // 0x1e3dd4: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3dd8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3DD8u;
    {
        const bool branch_taken_0x1e3dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DD8u;
            // 0x1e3ddc: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dd8) {
            ctx->pc = 0x1E3DECu;
            goto label_1e3dec;
        }
    }
    ctx->pc = 0x1E3DE0u;
    // 0x1e3de0: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x1E3DE0u;
    SET_GPR_U32(ctx, 31, 0x1E3DE8u);
    ctx->pc = 0x1E3DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DE0u;
            // 0x1e3de4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DE8u; }
        if (ctx->pc != 0x1E3DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DE8u; }
        if (ctx->pc != 0x1E3DE8u) { return; }
    }
    ctx->pc = 0x1E3DE8u;
label_1e3de8:
    // 0x1e3de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e3dec:
    // 0x1e3dec: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3DECu;
    {
        const bool branch_taken_0x1e3dec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DECu;
            // 0x1e3df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dec) {
            ctx->pc = 0x1E3DFCu;
            goto label_1e3dfc;
        }
    }
    ctx->pc = 0x1E3DF4u;
    // 0x1e3df4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E3DF4u;
    {
        const bool branch_taken_0x1e3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DF4u;
            // 0x1e3df8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3df4) {
            ctx->pc = 0x1E3E28u;
            goto label_1e3e28;
        }
    }
    ctx->pc = 0x1E3DFCu;
label_1e3dfc:
    // 0x1e3dfc: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x1e3dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x1e3e00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3e04: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1e3e04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1e3e08: 0xaca60060  sw          $a2, 0x60($a1)
    ctx->pc = 0x1e3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
    // 0x1e3e0c: 0xe4b40070  swc1        $f20, 0x70($a1)
    ctx->pc = 0x1e3e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x1e3e10: 0xe4b50074  swc1        $f21, 0x74($a1)
    ctx->pc = 0x1e3e10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x1e3e14: 0xe4b60078  swc1        $f22, 0x78($a1)
    ctx->pc = 0x1e3e14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
    // 0x1e3e18: 0xc04de54  jal         func_137950
    ctx->pc = 0x1E3E18u;
    SET_GPR_U32(ctx, 31, 0x1E3E20u);
    ctx->pc = 0x1E3E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E18u;
            // 0x1e3e1c: 0xe4b7007c  swc1        $f23, 0x7C($a1) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3E20u; }
        if (ctx->pc != 0x1E3E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3E20u; }
        if (ctx->pc != 0x1E3E20u) { return; }
    }
    ctx->pc = 0x1E3E20u;
label_1e3e20:
    // 0x1e3e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3e24:
    // 0x1e3e24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3e28:
    // 0x1e3e28: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1e3e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1e3e2c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1e3e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e3e30: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e3e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e3e34: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e3e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e3e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E38u;
            // 0x1e3e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3E40u;
}
