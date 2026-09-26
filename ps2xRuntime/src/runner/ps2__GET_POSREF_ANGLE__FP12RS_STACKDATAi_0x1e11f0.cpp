#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_POSREF_ANGLE__FP12RS_STACKDATAi
// Address: 0x1e11f0 - 0x1e135c
void ps2__GET_POSREF_ANGLE__FP12RS_STACKDATAi_0x1e11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_POSREF_ANGLE__FP12RS_STACKDATAi_0x1e11f0");
#endif

    switch (ctx->pc) {
        case 0x1e1218u: goto label_1e1218;
        case 0x1e1228u: goto label_1e1228;
        case 0x1e1238u: goto label_1e1238;
        case 0x1e1250u: goto label_1e1250;
        case 0x1e1260u: goto label_1e1260;
        case 0x1e1274u: goto label_1e1274;
        case 0x1e1294u: goto label_1e1294;
        case 0x1e12a0u: goto label_1e12a0;
        case 0x1e12acu: goto label_1e12ac;
        case 0x1e12c4u: goto label_1e12c4;
        case 0x1e12d0u: goto label_1e12d0;
        case 0x1e12f8u: goto label_1e12f8;
        case 0x1e130cu: goto label_1e130c;
        case 0x1e131cu: goto label_1e131c;
        case 0x1e1328u: goto label_1e1328;
        default: break;
    }

    ctx->pc = 0x1e11f0u;

    // 0x1e11f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e11f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e11f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e11f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e11fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e11fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e1200: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e1200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e1204: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e1204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e1208: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1e1208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e120c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e120cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e1210: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1210u;
    SET_GPR_U32(ctx, 31, 0x1E1218u);
    ctx->pc = 0x1E1214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1210u;
            // 0x1e1214: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1218u; }
        if (ctx->pc != 0x1E1218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1218u; }
        if (ctx->pc != 0x1E1218u) { return; }
    }
    ctx->pc = 0x1E1218u;
label_1e1218:
    // 0x1e1218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e121c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1e121cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1e1220: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1220u;
    SET_GPR_U32(ctx, 31, 0x1E1228u);
    ctx->pc = 0x1E1224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1220u;
            // 0x1e1224: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1228u; }
        if (ctx->pc != 0x1E1228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1228u; }
        if (ctx->pc != 0x1E1228u) { return; }
    }
    ctx->pc = 0x1E1228u;
label_1e1228:
    // 0x1e1228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e122c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1e122cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1e1230: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1230u;
    SET_GPR_U32(ctx, 31, 0x1E1238u);
    ctx->pc = 0x1E1234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1230u;
            // 0x1e1234: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1238u; }
        if (ctx->pc != 0x1E1238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1238u; }
        if (ctx->pc != 0x1E1238u) { return; }
    }
    ctx->pc = 0x1E1238u;
label_1e1238:
    // 0x1e1238: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e123c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e123cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1240: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1e1240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1e1244: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1e1244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1e1248: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1248u;
    SET_GPR_U32(ctx, 31, 0x1E1250u);
    ctx->pc = 0x1E124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1248u;
            // 0x1e124c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1250u; }
        if (ctx->pc != 0x1E1250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1250u; }
        if (ctx->pc != 0x1E1250u) { return; }
    }
    ctx->pc = 0x1E1250u;
label_1e1250:
    // 0x1e1250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1254: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1e1254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e1258: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1258u;
    SET_GPR_U32(ctx, 31, 0x1E1260u);
    ctx->pc = 0x1E125Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1258u;
            // 0x1e125c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1260u; }
        if (ctx->pc != 0x1E1260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1260u; }
        if (ctx->pc != 0x1E1260u) { return; }
    }
    ctx->pc = 0x1E1260u;
label_1e1260:
    // 0x1e1260: 0x27b30074  addiu       $s3, $sp, 0x74
    ctx->pc = 0x1e1260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1e1264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1268: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1e1268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1e126c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E126Cu;
    SET_GPR_U32(ctx, 31, 0x1E1274u);
    ctx->pc = 0x1E1270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E126Cu;
            // 0x1e1270: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1274u; }
        if (ctx->pc != 0x1E1274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1274u; }
        if (ctx->pc != 0x1E1274u) { return; }
    }
    ctx->pc = 0x1E1274u;
label_1e1274:
    // 0x1e1274: 0x27b20078  addiu       $s2, $sp, 0x78
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1e1278: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e127c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e127cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1280: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e1280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1284: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1e1284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1e1288: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e1288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e128c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1E128Cu;
    SET_GPR_U32(ctx, 31, 0x1E1294u);
    ctx->pc = 0x1E1290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E128Cu;
            // 0x1e1290: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1294u; }
        if (ctx->pc != 0x1E1294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1294u; }
        if (ctx->pc != 0x1E1294u) { return; }
    }
    ctx->pc = 0x1E1294u;
label_1e1294:
    // 0x1e1294: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e1294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e1298: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1E1298u;
    SET_GPR_U32(ctx, 31, 0x1E12A0u);
    ctx->pc = 0x1E129Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1298u;
            // 0x1e129c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12A0u; }
        if (ctx->pc != 0x1E12A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12A0u; }
        if (ctx->pc != 0x1E12A0u) { return; }
    }
    ctx->pc = 0x1E12A0u;
label_1e12a0:
    // 0x1e12a0: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x1e12a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e12a4: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x1E12A4u;
    SET_GPR_U32(ctx, 31, 0x1E12ACu);
    ctx->pc = 0x1E12A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12A4u;
            // 0x1e12a8: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12ACu; }
        if (ctx->pc != 0x1E12ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12ACu; }
        if (ctx->pc != 0x1E12ACu) { return; }
    }
    ctx->pc = 0x1E12ACu;
label_1e12ac:
    // 0x1e12ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e12acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e12b0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1e12b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e12b4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1e12b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e12b8: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x1e12b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e12bc: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x1E12BCu;
    SET_GPR_U32(ctx, 31, 0x1E12C4u);
    ctx->pc = 0x1E12C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12BCu;
            // 0x1e12c0: 0x46010b1c  madd.s      $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12C4u; }
        if (ctx->pc != 0x1E12C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12C4u; }
        if (ctx->pc != 0x1E12C4u) { return; }
    }
    ctx->pc = 0x1E12C4u;
label_1e12c4:
    // 0x1e12c4: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1e12c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e12c8: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x1E12C8u;
    SET_GPR_U32(ctx, 31, 0x1E12D0u);
    ctx->pc = 0x1E12CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12C8u;
            // 0x1e12cc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12D0u; }
        if (ctx->pc != 0x1E12D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12D0u; }
        if (ctx->pc != 0x1E12D0u) { return; }
    }
    ctx->pc = 0x1E12D0u;
label_1e12d0:
    // 0x1e12d0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e12d4: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E12D4u;
    {
        const bool branch_taken_0x1e12d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E12D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12D4u;
            // 0x1e12d8: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12d4) {
            ctx->pc = 0x1E1300u;
            goto label_1e1300;
        }
    }
    ctx->pc = 0x1E12DCu;
    // 0x1e12dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e12e0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E12E0u;
    {
        const bool branch_taken_0x1e12e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E12E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12E0u;
            // 0x1e12e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12e0) {
            ctx->pc = 0x1E12F0u;
            goto label_1e12f0;
        }
    }
    ctx->pc = 0x1E12E8u;
    // 0x1e12e8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E12E8u;
    {
        const bool branch_taken_0x1e12e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12E8u;
            // 0x1e12ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12e8) {
            ctx->pc = 0x1E1330u;
            goto label_1e1330;
        }
    }
    ctx->pc = 0x1E12F0u;
label_1e12f0:
    // 0x1e12f0: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E12F0u;
    SET_GPR_U32(ctx, 31, 0x1E12F8u);
    ctx->pc = 0x1E12F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12F0u;
            // 0x1e12f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12F8u; }
        if (ctx->pc != 0x1E12F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12F8u; }
        if (ctx->pc != 0x1E12F8u) { return; }
    }
    ctx->pc = 0x1E12F8u;
label_1e12f8:
    // 0x1e12f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E12F8u;
    {
        const bool branch_taken_0x1e12f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12F8u;
            // 0x1e12fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12f8) {
            ctx->pc = 0x1E133Cu;
            goto label_1e133c;
        }
    }
    ctx->pc = 0x1E1300u;
label_1e1300:
    // 0x1e1300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e1300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1304: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1304u;
    SET_GPR_U32(ctx, 31, 0x1E130Cu);
    ctx->pc = 0x1E1308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1304u;
            // 0x1e1308: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E130Cu; }
        if (ctx->pc != 0x1E130Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E130Cu; }
        if (ctx->pc != 0x1E130Cu) { return; }
    }
    ctx->pc = 0x1E130Cu;
label_1e130c:
    // 0x1e130c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1310: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e1310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e1314: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1314u;
    SET_GPR_U32(ctx, 31, 0x1E131Cu);
    ctx->pc = 0x1E1318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1314u;
            // 0x1e1318: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E131Cu; }
        if (ctx->pc != 0x1E131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E131Cu; }
        if (ctx->pc != 0x1E131Cu) { return; }
    }
    ctx->pc = 0x1E131Cu;
label_1e131c:
    // 0x1e131c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e131cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e1320: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1320u;
    SET_GPR_U32(ctx, 31, 0x1E1328u);
    ctx->pc = 0x1E1324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1320u;
            // 0x1e1324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1328u; }
        if (ctx->pc != 0x1E1328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1328u; }
        if (ctx->pc != 0x1E1328u) { return; }
    }
    ctx->pc = 0x1E1328u;
label_1e1328:
    // 0x1e1328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1328u;
    {
        const bool branch_taken_0x1e1328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1328) {
            ctx->pc = 0x1E1338u;
            goto label_1e1338;
        }
    }
    ctx->pc = 0x1E1330u;
label_1e1330:
    // 0x1e1330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1330u;
    {
        const bool branch_taken_0x1e1330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1330u;
            // 0x1e1334: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1330) {
            ctx->pc = 0x1E1340u;
            goto label_1e1340;
        }
    }
    ctx->pc = 0x1E1338u;
label_1e1338:
    // 0x1e1338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e133c:
    // 0x1e133c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e133cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e1340:
    // 0x1e1340: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e1340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e1344: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e1344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1348: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e1348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e134c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e134cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1350: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e1350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1354: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1354u;
            // 0x1e1358: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E135Cu;
}
