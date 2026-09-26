#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _pictureHeader
// Address: 0x10b370 - 0x10b434
void _pictureHeader_0x10b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_pictureHeader_0x10b370");
#endif

    switch (ctx->pc) {
        case 0x10b38cu: goto label_10b38c;
        case 0x10b39cu: goto label_10b39c;
        case 0x10b3acu: goto label_10b3ac;
        case 0x10b3c8u: goto label_10b3c8;
        case 0x10b3d8u: goto label_10b3d8;
        case 0x10b3f4u: goto label_10b3f4;
        case 0x10b404u: goto label_10b404;
        case 0x10b410u: goto label_10b410;
        case 0x10b418u: goto label_10b418;
        default: break;
    }

    ctx->pc = 0x10b370u;

    // 0x10b370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b374: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10b374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10b378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b37c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b380: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b384: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B384u;
    SET_GPR_U32(ctx, 31, 0x10B38Cu);
    ctx->pc = 0x10B388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B384u;
            // 0x10b388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B38Cu; }
        if (ctx->pc != 0x10B38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B38Cu; }
        if (ctx->pc != 0x10B38Cu) { return; }
    }
    ctx->pc = 0x10B38Cu;
label_10b38c:
    // 0x10b38c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10b38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b394: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B394u;
    SET_GPR_U32(ctx, 31, 0x10B39Cu);
    ctx->pc = 0x10B398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B394u;
            // 0x10b398: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B39Cu; }
        if (ctx->pc != 0x10B39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B39Cu; }
        if (ctx->pc != 0x10B39Cu) { return; }
    }
    ctx->pc = 0x10B39Cu;
label_10b39c:
    // 0x10b39c: 0xae020150  sw          $v0, 0x150($s0)
    ctx->pc = 0x10b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 2));
    // 0x10b3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3a4: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B3A4u;
    SET_GPR_U32(ctx, 31, 0x10B3ACu);
    ctx->pc = 0x10B3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3A4u;
            // 0x10b3a8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3ACu; }
        if (ctx->pc != 0x10B3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3ACu; }
        if (ctx->pc != 0x10B3ACu) { return; }
    }
    ctx->pc = 0x10B3ACu;
label_10b3ac:
    // 0x10b3ac: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x10b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x10b3b0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x10b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x10b3b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x10b3b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10b3b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B3B8u;
    {
        const bool branch_taken_0x10b3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3B8u;
            // 0x10b3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3b8) {
            ctx->pc = 0x10B3E0u;
            goto label_10b3e0;
        }
    }
    ctx->pc = 0x10B3C0u;
    // 0x10b3c0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B3C0u;
    SET_GPR_U32(ctx, 31, 0x10B3C8u);
    ctx->pc = 0x10B3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3C0u;
            // 0x10b3c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3C8u; }
        if (ctx->pc != 0x10B3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3C8u; }
        if (ctx->pc != 0x10B3C8u) { return; }
    }
    ctx->pc = 0x10B3C8u;
label_10b3c8:
    // 0x10b3c8: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x10b3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
    // 0x10b3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3d0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B3D0u;
    SET_GPR_U32(ctx, 31, 0x10B3D8u);
    ctx->pc = 0x10B3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3D0u;
            // 0x10b3d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3D8u; }
        if (ctx->pc != 0x10B3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3D8u; }
        if (ctx->pc != 0x10B3D8u) { return; }
    }
    ctx->pc = 0x10B3D8u;
label_10b3d8:
    // 0x10b3d8: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x10b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x10b3dc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x10b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_10b3e0:
    // 0x10b3e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b3e4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B3E4u;
    {
        const bool branch_taken_0x10b3e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3E4u;
            // 0x10b3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3e4) {
            ctx->pc = 0x10B408u;
            goto label_10b408;
        }
    }
    ctx->pc = 0x10B3ECu;
    // 0x10b3ec: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B3ECu;
    SET_GPR_U32(ctx, 31, 0x10B3F4u);
    ctx->pc = 0x10B3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3ECu;
            // 0x10b3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3F4u; }
        if (ctx->pc != 0x10B3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B3F4u; }
        if (ctx->pc != 0x10B3F4u) { return; }
    }
    ctx->pc = 0x10B3F4u;
label_10b3f4:
    // 0x10b3f4: 0xae02015c  sw          $v0, 0x15C($s0)
    ctx->pc = 0x10b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 2));
    // 0x10b3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3fc: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B3FCu;
    SET_GPR_U32(ctx, 31, 0x10B404u);
    ctx->pc = 0x10B400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B3FCu;
            // 0x10b400: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B404u; }
        if (ctx->pc != 0x10B404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B404u; }
        if (ctx->pc != 0x10B404u) { return; }
    }
    ctx->pc = 0x10B404u;
label_10b404:
    // 0x10b404: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x10b404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_10b408:
    // 0x10b408: 0xc042dd4  jal         func_10B750
    ctx->pc = 0x10B408u;
    SET_GPR_U32(ctx, 31, 0x10B410u);
    ctx->pc = 0x10B40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B408u;
            // 0x10b40c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B750u;
    if (runtime->hasFunction(0x10B750u)) {
        auto targetFn = runtime->lookupFunction(0x10B750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B410u; }
        if (ctx->pc != 0x10B410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extrainfo_0x10b750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B410u; }
        if (ctx->pc != 0x10B410u) { return; }
    }
    ctx->pc = 0x10B410u;
label_10b410:
    // 0x10b410: 0xc042d0e  jal         func_10B438
    ctx->pc = 0x10B410u;
    SET_GPR_U32(ctx, 31, 0x10B418u);
    ctx->pc = 0x10B414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B410u;
            // 0x10b414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B438u;
    if (runtime->hasFunction(0x10B438u)) {
        auto targetFn = runtime->lookupFunction(0x10B438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B418u; }
        if (ctx->pc != 0x10B418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _extensionAndUserData_0x10b438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B418u; }
        if (ctx->pc != 0x10B418u) { return; }
    }
    ctx->pc = 0x10B418u;
label_10b418:
    // 0x10b418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b41c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b424: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b42c: 0x8042de6  j           func_10B798
    ctx->pc = 0x10B42Cu;
    ctx->pc = 0x10B430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B42Cu;
            // 0x10b430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B798u;
    if (runtime->hasFunction(0x10B798u)) {
        auto targetFn = runtime->lookupFunction(0x10B798u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _updateTempTackData_0x10b798(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B434u;
}
