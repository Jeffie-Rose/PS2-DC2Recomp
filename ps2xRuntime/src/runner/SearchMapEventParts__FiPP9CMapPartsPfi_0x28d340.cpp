#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchMapEventParts__FiPP9CMapPartsPfi
// Address: 0x28d340 - 0x28d484
void SearchMapEventParts__FiPP9CMapPartsPfi_0x28d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchMapEventParts__FiPP9CMapPartsPfi_0x28d340");
#endif

    switch (ctx->pc) {
        case 0x28d378u: goto label_28d378;
        case 0x28d3acu: goto label_28d3ac;
        case 0x28d3c0u: goto label_28d3c0;
        case 0x28d3ccu: goto label_28d3cc;
        case 0x28d3e0u: goto label_28d3e0;
        case 0x28d40cu: goto label_28d40c;
        case 0x28d420u: goto label_28d420;
        case 0x28d42cu: goto label_28d42c;
        case 0x28d440u: goto label_28d440;
        default: break;
    }

    ctx->pc = 0x28d340u;

    // 0x28d340: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28d344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28d348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28d34c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28d350: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28d350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28d358: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28d358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d35c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d360: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28d360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d364: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d368: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28d36c: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x28d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x28d370: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x28D370u;
    SET_GPR_U32(ctx, 31, 0x28D378u);
    ctx->pc = 0x28D374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D370u;
            // 0x28d374: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D378u; }
        if (ctx->pc != 0x28D378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D378u; }
        if (ctx->pc != 0x28D378u) { return; }
    }
    ctx->pc = 0x28D378u;
label_28d378:
    // 0x28d378: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D378u;
    {
        const bool branch_taken_0x28d378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D378u;
            // 0x28d37c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d378) {
            ctx->pc = 0x28D388u;
            goto label_28d388;
        }
    }
    ctx->pc = 0x28D380u;
    // 0x28d380: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x28D380u;
    {
        const bool branch_taken_0x28d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D380u;
            // 0x28d384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d380) {
            ctx->pc = 0x28D464u;
            goto label_28d464;
        }
    }
    ctx->pc = 0x28D388u;
label_28d388:
    // 0x28d388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d38c: 0x12820034  beq         $s4, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x28D38Cu;
    {
        const bool branch_taken_0x28d38c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D38Cu;
            // 0x28d390: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d38c) {
            ctx->pc = 0x28D460u;
            goto label_28d460;
        }
    }
    ctx->pc = 0x28D394u;
    // 0x28d394: 0x1282001c  beq         $s4, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28D394u;
    {
        const bool branch_taken_0x28d394 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d394) {
            ctx->pc = 0x28D408u;
            goto label_28d408;
        }
    }
    ctx->pc = 0x28D39Cu;
    // 0x28d39c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D39Cu;
    {
        const bool branch_taken_0x28d39c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D39Cu;
            // 0x28d3a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d39c) {
            ctx->pc = 0x28D3ACu;
            goto label_28d3ac;
        }
    }
    ctx->pc = 0x28D3A4u;
    // 0x28d3a4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x28D3A4u;
    {
        const bool branch_taken_0x28d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3a4) {
            ctx->pc = 0x28D460u;
            goto label_28d460;
        }
    }
    ctx->pc = 0x28D3ACu;
label_28d3ac:
    // 0x28d3ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x28d3b0: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x28d3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x28d3b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28d3b8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x28D3B8u;
    SET_GPR_U32(ctx, 31, 0x28D3C0u);
    ctx->pc = 0x28D3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3B8u;
            // 0x28d3bc: 0x24a5d700  addiu       $a1, $a1, -0x2900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3C0u; }
        if (ctx->pc != 0x28D3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3C0u; }
        if (ctx->pc != 0x28D3C0u) { return; }
    }
    ctx->pc = 0x28D3C0u;
label_28d3c0:
    // 0x28d3c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d3c4: 0xc057508  jal         func_15D420
    ctx->pc = 0x28D3C4u;
    SET_GPR_U32(ctx, 31, 0x28D3CCu);
    ctx->pc = 0x28D3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3C4u;
            // 0x28d3c8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3CCu; }
        if (ctx->pc != 0x28D3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3CCu; }
        if (ctx->pc != 0x28D3CCu) { return; }
    }
    ctx->pc = 0x28D3CCu;
label_28d3cc:
    // 0x28d3cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D3CCu;
    {
        const bool branch_taken_0x28d3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d3cc) {
            ctx->pc = 0x28D3F0u;
            goto label_28d3f0;
        }
    }
    ctx->pc = 0x28D3D4u;
    // 0x28d3d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x28d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x28d3d8: 0xc0a34c0  jal         func_28D300
    ctx->pc = 0x28D3D8u;
    SET_GPR_U32(ctx, 31, 0x28D3E0u);
    ctx->pc = 0x28D3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3D8u;
            // 0x28d3dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D300u;
    if (runtime->hasFunction(0x28D300u)) {
        auto targetFn = runtime->lookupFunction(0x28D300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3E0u; }
        if (ctx->pc != 0x28D3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        XChgMapRotation__Fi_0x28d300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D3E0u; }
        if (ctx->pc != 0x28D3E0u) { return; }
    }
    ctx->pc = 0x28D3E0u;
label_28d3e0:
    // 0x28d3e0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x28d3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x28d3e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28d3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d3e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x28D3E8u;
    {
        const bool branch_taken_0x28d3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D3E8u;
            // 0x28d3ec: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d3e8) {
            ctx->pc = 0x28D460u;
            goto label_28d460;
        }
    }
    ctx->pc = 0x28D3F0u;
label_28d3f0:
    // 0x28d3f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d3f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d3f4: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x28d3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28d3f8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28D3F8u;
    {
        const bool branch_taken_0x28d3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d3f8) {
            ctx->pc = 0x28D3ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d3ac;
        }
    }
    ctx->pc = 0x28D400u;
    // 0x28d400: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28D400u;
    {
        const bool branch_taken_0x28d400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d400) {
            ctx->pc = 0x28D460u;
            goto label_28d460;
        }
    }
    ctx->pc = 0x28D408u;
label_28d408:
    // 0x28d408: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d40c:
    // 0x28d40c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28d40cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x28d410: 0x26860024  addiu       $a2, $s4, 0x24
    ctx->pc = 0x28d410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x28d414: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28d414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28d418: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x28D418u;
    SET_GPR_U32(ctx, 31, 0x28D420u);
    ctx->pc = 0x28D41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D418u;
            // 0x28d41c: 0x24a5d700  addiu       $a1, $a1, -0x2900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D420u; }
        if (ctx->pc != 0x28D420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D420u; }
        if (ctx->pc != 0x28D420u) { return; }
    }
    ctx->pc = 0x28D420u;
label_28d420:
    // 0x28d420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d424: 0xc057508  jal         func_15D420
    ctx->pc = 0x28D424u;
    SET_GPR_U32(ctx, 31, 0x28D42Cu);
    ctx->pc = 0x28D428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D424u;
            // 0x28d428: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D42Cu; }
        if (ctx->pc != 0x28D42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D42Cu; }
        if (ctx->pc != 0x28D42Cu) { return; }
    }
    ctx->pc = 0x28D42Cu;
label_28d42c:
    // 0x28d42c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D42Cu;
    {
        const bool branch_taken_0x28d42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d42c) {
            ctx->pc = 0x28D450u;
            goto label_28d450;
        }
    }
    ctx->pc = 0x28D434u;
    // 0x28d434: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x28d434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x28d438: 0xc0a34c0  jal         func_28D300
    ctx->pc = 0x28D438u;
    SET_GPR_U32(ctx, 31, 0x28D440u);
    ctx->pc = 0x28D43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D438u;
            // 0x28d43c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D300u;
    if (runtime->hasFunction(0x28D300u)) {
        auto targetFn = runtime->lookupFunction(0x28D300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D440u; }
        if (ctx->pc != 0x28D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        XChgMapRotation__Fi_0x28d300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D440u; }
        if (ctx->pc != 0x28D440u) { return; }
    }
    ctx->pc = 0x28D440u;
label_28d440:
    // 0x28d440: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x28d440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x28d444: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28d444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d448: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28D448u;
    {
        const bool branch_taken_0x28d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D448u;
            // 0x28d44c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d448) {
            ctx->pc = 0x28D460u;
            goto label_28d460;
        }
    }
    ctx->pc = 0x28D450u;
label_28d450:
    // 0x28d450: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28d450u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28d454: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x28d454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x28d458: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28D458u;
    {
        const bool branch_taken_0x28d458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d458) {
            ctx->pc = 0x28D40Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d40c;
        }
    }
    ctx->pc = 0x28D460u;
label_28d460:
    // 0x28d460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28d460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d464:
    // 0x28d464: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28d464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d468: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28d468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d46c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28d46cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28d470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d47c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D47Cu;
            // 0x28d480: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D484u;
}
