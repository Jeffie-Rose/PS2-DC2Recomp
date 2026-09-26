#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__18CMapEffectsManegerFP9mgCCamera
// Address: 0x1c48d0 - 0x1c4c6c
void Step__18CMapEffectsManegerFP9mgCCamera_0x1c48d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__18CMapEffectsManegerFP9mgCCamera_0x1c48d0");
#endif

    switch (ctx->pc) {
        case 0x1c4920u: goto label_1c4920;
        case 0x1c492cu: goto label_1c492c;
        case 0x1c4978u: goto label_1c4978;
        case 0x1c499cu: goto label_1c499c;
        case 0x1c4a00u: goto label_1c4a00;
        case 0x1c4a1cu: goto label_1c4a1c;
        case 0x1c4a5cu: goto label_1c4a5c;
        case 0x1c4aa0u: goto label_1c4aa0;
        case 0x1c4b24u: goto label_1c4b24;
        case 0x1c4b30u: goto label_1c4b30;
        case 0x1c4b90u: goto label_1c4b90;
        case 0x1c4ba4u: goto label_1c4ba4;
        case 0x1c4be4u: goto label_1c4be4;
        case 0x1c4c14u: goto label_1c4c14;
        case 0x1c4c30u: goto label_1c4c30;
        default: break;
    }

    ctx->pc = 0x1c48d0u;

    // 0x1c48d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c48d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c48d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c48d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c48d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c48d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c48dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c48dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c48e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c48e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c48e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c48e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c48e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c48ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c48ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c48f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c48f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c48f4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1c48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c48f8: 0x46000d3  bltz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x1C48F8u;
    {
        const bool branch_taken_0x1c48f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1C48FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48F8u;
            // 0x1c48fc: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c48f8) {
            ctx->pc = 0x1C4C48u;
            goto label_1c4c48;
        }
    }
    ctx->pc = 0x1C4900u;
    // 0x1c4900: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1c4900u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c4904: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4904u;
    {
        const bool branch_taken_0x1c4904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4904u;
            // 0x1c4908: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4904) {
            ctx->pc = 0x1C4918u;
            goto label_1c4918;
        }
    }
    ctx->pc = 0x1C490Cu;
    // 0x1c490c: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1C490Cu;
    {
        const bool branch_taken_0x1c490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C490Cu;
            // 0x1c4910: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c490c) {
            ctx->pc = 0x1C4C4Cu;
            goto label_1c4c4c;
        }
    }
    ctx->pc = 0x1C4914u;
    // 0x1c4914: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c4914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c4918:
    // 0x1c4918: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x1C4918u;
    SET_GPR_U32(ctx, 31, 0x1C4920u);
    ctx->pc = 0x1C491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4918u;
            // 0x1c491c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4920u; }
        if (ctx->pc != 0x1C4920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4920u; }
        if (ctx->pc != 0x1C4920u) { return; }
    }
    ctx->pc = 0x1C4920u;
label_1c4920:
    // 0x1c4920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c4920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4924: 0xc04c578  jal         func_1315E0
    ctx->pc = 0x1C4924u;
    SET_GPR_U32(ctx, 31, 0x1C492Cu);
    ctx->pc = 0x1C4928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4924u;
            // 0x1c4928: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C492Cu; }
        if (ctx->pc != 0x1C492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C492Cu; }
        if (ctx->pc != 0x1C492Cu) { return; }
    }
    ctx->pc = 0x1C492Cu;
label_1c492c:
    // 0x1c492c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x1c492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4930: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c4930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c4934: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c4934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4938: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x1c4938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1c493c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1c493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4940: 0x27b20088  addiu       $s2, $sp, 0x88
    ctx->pc = 0x1c4940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1c4944: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1c4944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4948: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c4948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c494c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c494cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4950: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1c4950u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1c4954: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1c4954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1c4958: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1c4958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c495c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1c495cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1c4960: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1c4960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1c4964: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1c4964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c496c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1c496cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1c4970: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C4970u;
    SET_GPR_U32(ctx, 31, 0x1C4978u);
    ctx->pc = 0x1C4974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4970u;
            // 0x1c4974: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4978u; }
        if (ctx->pc != 0x1C4978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4978u; }
        if (ctx->pc != 0x1C4978u) { return; }
    }
    ctx->pc = 0x1C4978u;
label_1c4978:
    // 0x1c4978: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c497c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C497Cu;
    {
        const bool branch_taken_0x1c497c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c497c) {
            ctx->pc = 0x1C498Cu;
            goto label_1c498c;
        }
    }
    ctx->pc = 0x1C4984u;
    // 0x1c4984: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c4984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c4988: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1c4988u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1c498c:
    // 0x1c498c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x1c498cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x1c4990: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4994: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C4994u;
    {
        const bool branch_taken_0x1c4994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4994u;
            // 0x1c4998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4994) {
            ctx->pc = 0x1C49C8u;
            goto label_1c49c8;
        }
    }
    ctx->pc = 0x1C499Cu;
label_1c499c:
    // 0x1c499c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1c499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c49a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c49a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c49a4: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1c49a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1c49a8: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C49A8u;
    {
        const bool branch_taken_0x1c49a8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c49a8) {
            ctx->pc = 0x1C49BCu;
            goto label_1c49bc;
        }
    }
    ctx->pc = 0x1C49B0u;
    // 0x1c49b0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1c49b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1c49b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c49b8: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x1c49b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_1c49bc:
    // 0x1c49bc: 0x0  nop
    ctx->pc = 0x1c49bcu;
    // NOP
    // 0x1c49c0: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x1c49c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1c49c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c49c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c49c8:
    // 0x1c49c8: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x1c49c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1c49cc: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x1c49ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c49d0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C49D0u;
    {
        const bool branch_taken_0x1c49d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c49d0) {
            ctx->pc = 0x1C499Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c499c;
        }
    }
    ctx->pc = 0x1C49D8u;
    // 0x1c49d8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1c49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1c49dc: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1c49dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c49e0: 0x10200088  beqz        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x1C49E0u;
    {
        const bool branch_taken_0x1c49e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c49e0) {
            ctx->pc = 0x1C4C04u;
            goto label_1c4c04;
        }
    }
    ctx->pc = 0x1C49E8u;
    // 0x1c49e8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1c49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c49ec: 0x1c600085  bgtz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x1C49ECu;
    {
        const bool branch_taken_0x1c49ec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c49ec) {
            ctx->pc = 0x1C4C04u;
            goto label_1c4c04;
        }
    }
    ctx->pc = 0x1C49F4u;
    // 0x1c49f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c49f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49f8: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1C49F8u;
    {
        const bool branch_taken_0x1c49f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C49FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C49F8u;
            // 0x1c49fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49f8) {
            ctx->pc = 0x1C4BF4u;
            goto label_1c4bf4;
        }
    }
    ctx->pc = 0x1C4A00u;
label_1c4a00:
    // 0x1c4a00: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1c4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c4a04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c4a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c4a08: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x1c4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1c4a0c: 0x1c600077  bgtz        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x1C4A0Cu;
    {
        const bool branch_taken_0x1c4a0c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c4a0c) {
            ctx->pc = 0x1C4BECu;
            goto label_1c4bec;
        }
    }
    ctx->pc = 0x1C4A14u;
    // 0x1c4a14: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C4A14u;
    SET_GPR_U32(ctx, 31, 0x1C4A1Cu);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A1Cu; }
        if (ctx->pc != 0x1C4A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A1Cu; }
        if (ctx->pc != 0x1C4A1Cu) { return; }
    }
    ctx->pc = 0x1C4A1Cu;
label_1c4a1c:
    // 0x1c4a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4a20: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c4a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c4a24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c4a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c4a28: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1c4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1c4a2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c4a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4a30: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c4a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4a34: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c4a34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c4a38: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1c4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1c4a3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c4a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4a40: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c4a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c4a44: 0x0  nop
    ctx->pc = 0x1c4a44u;
    // NOP
    // 0x1c4a48: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c4a48u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1c4a4c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1c4a4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c4a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c4a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c4a54: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C4A54u;
    SET_GPR_U32(ctx, 31, 0x1C4A5Cu);
    ctx->pc = 0x1C4A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A54u;
            // 0x1c4a58: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A5Cu; }
        if (ctx->pc != 0x1C4A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4A5Cu; }
        if (ctx->pc != 0x1C4A5Cu) { return; }
    }
    ctx->pc = 0x1C4A5Cu;
label_1c4a5c:
    // 0x1c4a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4a60: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c4a64: 0x27b30074  addiu       $s3, $sp, 0x74
    ctx->pc = 0x1c4a64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1c4a68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c4a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c4a6c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1c4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1c4a70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4a74: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1c4a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4a78: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1c4a78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c4a7c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c4a80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c4a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4a84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c4a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c4a88: 0x0  nop
    ctx->pc = 0x1c4a88u;
    // NOP
    // 0x1c4a8c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c4a8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c4a90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c4a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c4a94: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c4a94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c4a98: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C4A98u;
    SET_GPR_U32(ctx, 31, 0x1C4AA0u);
    ctx->pc = 0x1C4A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4A98u;
            // 0x1c4a9c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AA0u; }
        if (ctx->pc != 0x1C4AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4AA0u; }
        if (ctx->pc != 0x1C4AA0u) { return; }
    }
    ctx->pc = 0x1C4AA0u;
label_1c4aa0:
    // 0x1c4aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4aa4: 0x3c074448  lui         $a3, 0x4448
    ctx->pc = 0x1c4aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17480 << 16));
    // 0x1c4aa8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c4aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c4aac: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1c4aacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1c4ab0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c4ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c4ab4: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1c4ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x1c4ab8: 0x27a80078  addiu       $t0, $sp, 0x78
    ctx->pc = 0x1c4ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1c4abc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c4abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4ac0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c4ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ac4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1c4ac4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4ac8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1c4ac8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4acc: 0x0  nop
    ctx->pc = 0x1c4accu;
    // NOP
    // 0x1c4ad0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c4ad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c4ad4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c4ad4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c4ad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c4ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4adc: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1c4adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4ae0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c4ae4: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c4ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c4ae8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1c4ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1c4aec: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1c4aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4af0: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1c4af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1c4af4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4af8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c4afc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1c4afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1c4b00: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1c4b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4b04: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1c4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4b08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c4b0c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1c4b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1c4b10: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1c4b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4b14: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1c4b14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c4b18: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1c4b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1c4b1c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B24u);
    ctx->pc = 0x1C4B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B1Cu;
            // 0x1c4b20: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4B24u; }
        if (ctx->pc != 0x1C4B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4B24u; }
        if (ctx->pc != 0x1C4B24u) { return; }
    }
    ctx->pc = 0x1C4B24u;
label_1c4b24:
    // 0x1c4b24: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c4b28: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x1C4B28u;
    SET_GPR_U32(ctx, 31, 0x1C4B30u);
    ctx->pc = 0x1C4B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B28u;
            // 0x1c4b2c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4B30u; }
        if (ctx->pc != 0x1C4B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4B30u; }
        if (ctx->pc != 0x1C4B30u) { return; }
    }
    ctx->pc = 0x1C4B30u;
label_1c4b30:
    // 0x1c4b30: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1c4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1c4b34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c4b34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4b38: 0x0  nop
    ctx->pc = 0x1c4b38u;
    // NOP
    // 0x1c4b3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c4b3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4b40: 0x0  nop
    ctx->pc = 0x1c4b40u;
    // NOP
    // 0x1c4b44: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1C4B44u;
    {
        const bool branch_taken_0x1c4b44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4b44) {
            ctx->pc = 0x1C4C04u;
            goto label_1c4c04;
        }
    }
    ctx->pc = 0x1C4B4Cu;
    // 0x1c4b4c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1c4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4b50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4b54: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4B54u;
    {
        const bool branch_taken_0x1c4b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4b54) {
            ctx->pc = 0x1C4B74u;
            goto label_1c4b74;
        }
    }
    ctx->pc = 0x1C4B5Cu;
    // 0x1c4b5c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1c4b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4b60: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x1c4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x1c4b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4b68: 0x0  nop
    ctx->pc = 0x1c4b68u;
    // NOP
    // 0x1c4b6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c4b6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c4b70: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1c4b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1c4b74:
    // 0x1c4b74: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1c4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c4b78: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1c4b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c4b7c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c4b80: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1c4b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c4b84: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x1c4b84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c4b88: 0xc070fd8  jal         func_1C3F60
    ctx->pc = 0x1C4B88u;
    SET_GPR_U32(ctx, 31, 0x1C4B90u);
    ctx->pc = 0x1C4B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B88u;
            // 0x1c4b8c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F60u;
    if (runtime->hasFunction(0x1C3F60u)) {
        auto targetFn = runtime->lookupFunction(0x1C3F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4B90u; }
        if (ctx->pc != 0x1C4B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__17CMapEffect_SpriteFPf_0x1c3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4B90u; }
        if (ctx->pc != 0x1C4B90u) { return; }
    }
    ctx->pc = 0x1C4B90u;
label_1c4b90:
    // 0x1c4b90: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1c4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c4b94: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1c4b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1c4b98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c4b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4b9c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C4B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C4BA4u);
    ctx->pc = 0x1C4BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4B9Cu;
            // 0x1c4ba0: 0xac430044  sw          $v1, 0x44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4BA4u; }
        if (ctx->pc != 0x1C4BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4BA4u; }
        if (ctx->pc != 0x1C4BA4u) { return; }
    }
    ctx->pc = 0x1C4BA4u;
label_1c4ba4:
    // 0x1c4ba4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4ba8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c4bac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c4bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c4bb0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1c4bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4bb8: 0x0  nop
    ctx->pc = 0x1c4bb8u;
    // NOP
    // 0x1c4bbc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1c4bbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c4bc0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4bc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c4bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4bc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4bcc: 0x0  nop
    ctx->pc = 0x1c4bccu;
    // NOP
    // 0x1c4bd0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c4bd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c4bd4: 0x0  nop
    ctx->pc = 0x1c4bd4u;
    // NOP
    // 0x1c4bd8: 0x0  nop
    ctx->pc = 0x1c4bd8u;
    // NOP
    // 0x1c4bdc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C4BDCu;
    SET_GPR_U32(ctx, 31, 0x1C4BE4u);
    ctx->pc = 0x1C4BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4BDCu;
            // 0x1c4be0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4BE4u; }
        if (ctx->pc != 0x1C4BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4BE4u; }
        if (ctx->pc != 0x1C4BE4u) { return; }
    }
    ctx->pc = 0x1C4BE4u;
label_1c4be4:
    // 0x1c4be4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4BE4u;
    {
        const bool branch_taken_0x1c4be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4BE4u;
            // 0x1c4be8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4be4) {
            ctx->pc = 0x1C4C04u;
            goto label_1c4c04;
        }
    }
    ctx->pc = 0x1C4BECu;
label_1c4bec:
    // 0x1c4bec: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x1c4becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1c4bf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c4bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c4bf4:
    // 0x1c4bf4: 0x0  nop
    ctx->pc = 0x1c4bf4u;
    // NOP
    // 0x1c4bf8: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x1c4bf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c4bfc: 0x1460ff80  bnez        $v1, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1C4BFCu;
    {
        const bool branch_taken_0x1c4bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4bfc) {
            ctx->pc = 0x1C4A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4a00;
        }
    }
    ctx->pc = 0x1C4C04u;
label_1c4c04:
    // 0x1c4c04: 0x0  nop
    ctx->pc = 0x1c4c04u;
    // NOP
    // 0x1c4c08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c4c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C4C0Cu;
    {
        const bool branch_taken_0x1c4c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C0Cu;
            // 0x1c4c10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c0c) {
            ctx->pc = 0x1C4C38u;
            goto label_1c4c38;
        }
    }
    ctx->pc = 0x1C4C14u;
label_1c4c14:
    // 0x1c4c14: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1c4c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c4c18: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1c4c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c4c1c: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1c4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1c4c20: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4C20u;
    {
        const bool branch_taken_0x1c4c20 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c4c20) {
            ctx->pc = 0x1C4C30u;
            goto label_1c4c30;
        }
    }
    ctx->pc = 0x1C4C28u;
    // 0x1c4c28: 0xc071064  jal         func_1C4190
    ctx->pc = 0x1C4C28u;
    SET_GPR_U32(ctx, 31, 0x1C4C30u);
    ctx->pc = 0x1C4C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C28u;
            // 0x1c4c2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4190u;
    if (runtime->hasFunction(0x1C4190u)) {
        auto targetFn = runtime->lookupFunction(0x1C4190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C30u; }
        if (ctx->pc != 0x1C4C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__17CMapEffect_SpriteFP9mgCCamera_0x1c4190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4C30u; }
        if (ctx->pc != 0x1C4C30u) { return; }
    }
    ctx->pc = 0x1C4C30u;
label_1c4c30:
    // 0x1c4c30: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x1c4c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1c4c34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c4c38:
    // 0x1c4c38: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1c4c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1c4c3c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1c4c3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c4c40: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C4C40u;
    {
        const bool branch_taken_0x1c4c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c40) {
            ctx->pc = 0x1C4C14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4c14;
        }
    }
    ctx->pc = 0x1C4C48u;
label_1c4c48:
    // 0x1c4c48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c4c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c4c4c:
    // 0x1c4c4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c4c4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4c50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c4c50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4c54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c4c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4c58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4C64u;
            // 0x1c4c68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4C6Cu;
}
