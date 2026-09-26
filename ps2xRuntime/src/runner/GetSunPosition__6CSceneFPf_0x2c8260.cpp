#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSunPosition__6CSceneFPf
// Address: 0x2c8260 - 0x2c8324
void GetSunPosition__6CSceneFPf_0x2c8260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSunPosition__6CSceneFPf_0x2c8260");
#endif

    switch (ctx->pc) {
        case 0x2c8280u: goto label_2c8280;
        case 0x2c828cu: goto label_2c828c;
        case 0x2c829cu: goto label_2c829c;
        case 0x2c82a8u: goto label_2c82a8;
        case 0x2c82bcu: goto label_2c82bc;
        case 0x2c82c8u: goto label_2c82c8;
        case 0x2c82e0u: goto label_2c82e0;
        default: break;
    }

    ctx->pc = 0x2c8260u;

    // 0x2c8260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c8260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c8264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c8264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c8268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c8268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c826c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c826cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c8270: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c8270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8278: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2C8278u;
    SET_GPR_U32(ctx, 31, 0x2C8280u);
    ctx->pc = 0x2C827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8278u;
            // 0x2c827c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8280u; }
        if (ctx->pc != 0x2C8280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8280u; }
        if (ctx->pc != 0x2C8280u) { return; }
    }
    ctx->pc = 0x2C8280u;
label_2c8280:
    // 0x2c8280: 0x8e052e54  lw          $a1, 0x2E54($s0)
    ctx->pc = 0x2c8280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11860)));
    // 0x2c8284: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x2C8284u;
    SET_GPR_U32(ctx, 31, 0x2C828Cu);
    ctx->pc = 0x2C8288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8284u;
            // 0x2c8288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C828Cu; }
        if (ctx->pc != 0x2C828Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C828Cu; }
        if (ctx->pc != 0x2C828Cu) { return; }
    }
    ctx->pc = 0x2C828Cu;
label_2c828c:
    // 0x2c828c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C828Cu;
    {
        const bool branch_taken_0x2c828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C828Cu;
            // 0x2c8290: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c828c) {
            ctx->pc = 0x2C829Cu;
            goto label_2c829c;
        }
    }
    ctx->pc = 0x2C8294u;
    // 0x2c8294: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x2C8294u;
    SET_GPR_U32(ctx, 31, 0x2C829Cu);
    ctx->pc = 0x2C8298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8294u;
            // 0x2c8298: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C829Cu; }
        if (ctx->pc != 0x2C829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C829Cu; }
        if (ctx->pc != 0x2C829Cu) { return; }
    }
    ctx->pc = 0x2C829Cu;
label_2c829c:
    // 0x2c829c: 0x8e052e5c  lw          $a1, 0x2E5C($s0)
    ctx->pc = 0x2c829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
    // 0x2c82a0: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2C82A0u;
    SET_GPR_U32(ctx, 31, 0x2C82A8u);
    ctx->pc = 0x2C82A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C82A0u;
            // 0x2c82a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82A8u; }
        if (ctx->pc != 0x2C82A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82A8u; }
        if (ctx->pc != 0x2C82A8u) { return; }
    }
    ctx->pc = 0x2C82A8u;
label_2c82a8:
    // 0x2c82a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c82a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c82ac: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C82ACu;
    {
        const bool branch_taken_0x2c82ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C82B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C82ACu;
            // 0x2c82b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c82ac) {
            ctx->pc = 0x2C8310u;
            goto label_2c8310;
        }
    }
    ctx->pc = 0x2C82B4u;
    // 0x2c82b4: 0xc0584ac  jal         func_1612B0
    ctx->pc = 0x2C82B4u;
    SET_GPR_U32(ctx, 31, 0x2C82BCu);
    ctx->pc = 0x2C82B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C82B4u;
            // 0x2c82b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1612B0u;
    if (runtime->hasFunction(0x1612B0u)) {
        auto targetFn = runtime->lookupFunction(0x1612B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82BCu; }
        if (ctx->pc != 0x2C82BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSunPoint__4CMapFPf_0x1612b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82BCu; }
        if (ctx->pc != 0x2C82BCu) { return; }
    }
    ctx->pc = 0x2C82BCu;
label_2c82bc:
    // 0x2c82bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c82bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c82c0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2C82C0u;
    SET_GPR_U32(ctx, 31, 0x2C82C8u);
    ctx->pc = 0x2C82C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C82C0u;
            // 0x2c82c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82C8u; }
        if (ctx->pc != 0x2C82C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82C8u; }
        if (ctx->pc != 0x2C82C8u) { return; }
    }
    ctx->pc = 0x2C82C8u;
label_2c82c8:
    // 0x2c82c8: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x2c82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x2c82cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c82ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c82d0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2c82d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2c82d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c82d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c82d8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2C82D8u;
    SET_GPR_U32(ctx, 31, 0x2C82E0u);
    ctx->pc = 0x2C82DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C82D8u;
            // 0x2c82dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82E0u; }
        if (ctx->pc != 0x2C82E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C82E0u; }
        if (ctx->pc != 0x2C82E0u) { return; }
    }
    ctx->pc = 0x2C82E0u;
label_2c82e0:
    // 0x2c82e0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2c82e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c82e4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2c82e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c82e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c82e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c82ec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c82ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c82f0: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x2c82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c82f4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2c82f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c82f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c82f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c82fc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2c82fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c8300: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2c8300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8304: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2c8304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8308: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c830c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2c830cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2c8310:
    // 0x2c8310: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8314: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c831c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C831Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C831Cu;
            // 0x2c8320: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8324u;
}
