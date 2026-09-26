#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChkEventEditStart__Fv
// Address: 0x27f230 - 0x27f33c
void ChkEventEditStart__Fv_0x27f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChkEventEditStart__Fv_0x27f230");
#endif

    switch (ctx->pc) {
        case 0x27f25cu: goto label_27f25c;
        case 0x27f270u: goto label_27f270;
        case 0x27f288u: goto label_27f288;
        case 0x27f2a8u: goto label_27f2a8;
        case 0x27f2b8u: goto label_27f2b8;
        case 0x27f2ccu: goto label_27f2cc;
        case 0x27f2d8u: goto label_27f2d8;
        case 0x27f2e8u: goto label_27f2e8;
        case 0x27f300u: goto label_27f300;
        case 0x27f310u: goto label_27f310;
        case 0x27f328u: goto label_27f328;
        default: break;
    }

    ctx->pc = 0x27f230u;

    // 0x27f230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27f23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f240: 0x8f838ac8  lw          $v1, -0x7538($gp)
    ctx->pc = 0x27f240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x27f244: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F244u;
    {
        const bool branch_taken_0x27f244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27F248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F244u;
            // 0x27f248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f244) {
            ctx->pc = 0x27F254u;
            goto label_27f254;
        }
    }
    ctx->pc = 0x27F24Cu;
    // 0x27f24c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x27F24Cu;
    {
        const bool branch_taken_0x27f24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F24Cu;
            // 0x27f250: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f24c) {
            ctx->pc = 0x27F330u;
            goto label_27f330;
        }
    }
    ctx->pc = 0x27F254u;
label_27f254:
    // 0x27f254: 0xc0956c8  jal         func_255B20
    ctx->pc = 0x27F254u;
    SET_GPR_U32(ctx, 31, 0x27F25Cu);
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F25Cu; }
        if (ctx->pc != 0x27F25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F25Cu; }
        if (ctx->pc != 0x27F25Cu) { return; }
    }
    ctx->pc = 0x27F25Cu;
label_27f25c:
    // 0x27f25c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27f260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f264: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x27f268: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x27F268u;
    SET_GPR_U32(ctx, 31, 0x27F270u);
    ctx->pc = 0x27F26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F268u;
            // 0x27f26c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F270u; }
        if (ctx->pc != 0x27F270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F270u; }
        if (ctx->pc != 0x27F270u) { return; }
    }
    ctx->pc = 0x27F270u;
label_27f270:
    // 0x27f270: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x27F270u;
    {
        const bool branch_taken_0x27f270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F270u;
            // 0x27f274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f270) {
            ctx->pc = 0x27F32Cu;
            goto label_27f32c;
        }
    }
    ctx->pc = 0x27F278u;
    // 0x27f278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f27c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f280: 0xc050d98  jal         func_143660
    ctx->pc = 0x27F280u;
    SET_GPR_U32(ctx, 31, 0x27F288u);
    ctx->pc = 0x27F284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F280u;
            // 0x27f284: 0xac225000  sw          $v0, 0x5000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 20480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143660u;
    if (runtime->hasFunction(0x143660u)) {
        auto targetFn = runtime->lookupFunction(0x143660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F288u; }
        if (ctx->pc != 0x27F288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetProjection__Fv_0x143660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F288u; }
        if (ctx->pc != 0x27F288u) { return; }
    }
    ctx->pc = 0x27F288u;
label_27f288:
    // 0x27f288: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27f288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x27f28c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f290: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x27f290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x27f294: 0xaf828710  sw          $v0, -0x78F0($gp)
    ctx->pc = 0x27f294u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 2));
    // 0x27f298: 0xe420e450  swc1        $f0, -0x1BB0($at)
    ctx->pc = 0x27f298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960208), bits); }
    // 0x27f29c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2a0: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x27F2A0u;
    SET_GPR_U32(ctx, 31, 0x27F2A8u);
    ctx->pc = 0x27F2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2A0u;
            // 0x27f2a4: 0x24a55020  addiu       $a1, $a1, 0x5020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2A8u; }
        if (ctx->pc != 0x27F2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2A8u; }
        if (ctx->pc != 0x27F2A8u) { return; }
    }
    ctx->pc = 0x27F2A8u;
label_27f2a8:
    // 0x27f2a8: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x27f2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x27f2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2b0: 0xc04c578  jal         func_1315E0
    ctx->pc = 0x27F2B0u;
    SET_GPR_U32(ctx, 31, 0x27F2B8u);
    ctx->pc = 0x27F2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2B0u;
            // 0x27f2b4: 0x24a55030  addiu       $a1, $a1, 0x5030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2B8u; }
        if (ctx->pc != 0x27F2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2B8u; }
        if (ctx->pc != 0x27F2B8u) { return; }
    }
    ctx->pc = 0x27F2B8u;
label_27f2b8:
    // 0x27f2b8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f2bc: 0x8c245010  lw          $a0, 0x5010($at)
    ctx->pc = 0x27f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20496)));
    // 0x27f2c0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f2c4: 0xc09fa44  jal         func_27E910
    ctx->pc = 0x27F2C4u;
    SET_GPR_U32(ctx, 31, 0x27F2CCu);
    ctx->pc = 0x27F2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2C4u;
            // 0x27f2c8: 0x8c25500c  lw          $a1, 0x500C($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20492)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E910u;
    if (runtime->hasFunction(0x27E910u)) {
        auto targetFn = runtime->lookupFunction(0x27E910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2CCu; }
        if (ctx->pc != 0x27F2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        evLoadDebugFont__FiP9mgCMemory_0x27e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2CCu; }
        if (ctx->pc != 0x27F2CCu) { return; }
    }
    ctx->pc = 0x27F2CCu;
label_27f2cc:
    // 0x27f2cc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27f2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27f2d0: 0xc0959c4  jal         func_256710
    ctx->pc = 0x27F2D0u;
    SET_GPR_U32(ctx, 31, 0x27F2D8u);
    ctx->pc = 0x27F2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2D0u;
            // 0x27f2d4: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256710u;
    if (runtime->hasFunction(0x256710u)) {
        auto targetFn = runtime->lookupFunction(0x256710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2D8u; }
        if (ctx->pc != 0x27F2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CCameraPasFv_0x256710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2D8u; }
        if (ctx->pc != 0x27F2D8u) { return; }
    }
    ctx->pc = 0x27F2D8u;
label_27f2d8:
    // 0x27f2d8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27f2dc: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x27f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27f2e0: 0xc0959bc  jal         func_2566F0
    ctx->pc = 0x27F2E0u;
    SET_GPR_U32(ctx, 31, 0x27F2E8u);
    ctx->pc = 0x27F2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2E0u;
            // 0x27f2e4: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2566F0u;
    if (runtime->hasFunction(0x2566F0u)) {
        auto targetFn = runtime->lookupFunction(0x2566F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2E8u; }
        if (ctx->pc != 0x27F2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrame__10CCameraPasFi_0x2566f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2E8u; }
        if (ctx->pc != 0x27F2E8u) { return; }
    }
    ctx->pc = 0x27F2E8u;
label_27f2e8:
    // 0x27f2e8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27f2ec: 0xaf809810  sw          $zero, -0x67F0($gp)
    ctx->pc = 0x27f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940688), GPR_U32(ctx, 0));
    // 0x27f2f0: 0x24844b50  addiu       $a0, $a0, 0x4B50
    ctx->pc = 0x27f2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
    // 0x27f2f4: 0xaf80980c  sw          $zero, -0x67F4($gp)
    ctx->pc = 0x27f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940684), GPR_U32(ctx, 0));
    // 0x27f2f8: 0xc095ad4  jal         func_256B50
    ctx->pc = 0x27F2F8u;
    SET_GPR_U32(ctx, 31, 0x27F300u);
    ctx->pc = 0x27F2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2F8u;
            // 0x27f2fc: 0xaf809814  sw          $zero, -0x67EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256B50u;
    if (runtime->hasFunction(0x256B50u)) {
        auto targetFn = runtime->lookupFunction(0x256B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F300u; }
        if (ctx->pc != 0x27F300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CCharaPasFv_0x256b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F300u; }
        if (ctx->pc != 0x27F300u) { return; }
    }
    ctx->pc = 0x27F300u;
label_27f300:
    // 0x27f300: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27f300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27f304: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x27f304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27f308: 0xc095c54  jal         func_257150
    ctx->pc = 0x27F308u;
    SET_GPR_U32(ctx, 31, 0x27F310u);
    ctx->pc = 0x27F30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F308u;
            // 0x27f30c: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257150u;
    if (runtime->hasFunction(0x257150u)) {
        auto targetFn = runtime->lookupFunction(0x257150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F310u; }
        if (ctx->pc != 0x27F310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrame__9CCharaPasFi_0x257150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F310u; }
        if (ctx->pc != 0x27F310u) { return; }
    }
    ctx->pc = 0x27F310u;
label_27f310:
    // 0x27f310: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x27f314: 0xaf80981c  sw          $zero, -0x67E4($gp)
    ctx->pc = 0x27f314u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940700), GPR_U32(ctx, 0));
    // 0x27f318: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x27f31c: 0xaf809818  sw          $zero, -0x67E8($gp)
    ctx->pc = 0x27f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940696), GPR_U32(ctx, 0));
    // 0x27f320: 0xc052d48  jal         func_14B520
    ctx->pc = 0x27F320u;
    SET_GPR_U32(ctx, 31, 0x27F328u);
    ctx->pc = 0x27F324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F320u;
            // 0x27f324: 0xaf809820  sw          $zero, -0x67E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F328u; }
        if (ctx->pc != 0x27F328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOff__8CGamePadFv_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F328u; }
        if (ctx->pc != 0x27F328u) { return; }
    }
    ctx->pc = 0x27F328u;
label_27f328:
    // 0x27f328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f32c:
    // 0x27f32c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27f32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27f330:
    // 0x27f330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f334: 0x3e00008  jr          $ra
    ctx->pc = 0x27F334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F334u;
            // 0x27f338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F33Cu;
}
