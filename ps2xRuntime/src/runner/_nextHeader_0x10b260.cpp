#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _nextHeader
// Address: 0x10b260 - 0x10b36c
void _nextHeader_0x10b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_nextHeader_0x10b260");
#endif

    switch (ctx->pc) {
        case 0x10b2a0u: goto label_10b2a0;
        case 0x10b2a8u: goto label_10b2a8;
        case 0x10b2b4u: goto label_10b2b4;
        case 0x10b2f8u: goto label_10b2f8;
        case 0x10b308u: goto label_10b308;
        case 0x10b318u: goto label_10b318;
        case 0x10b330u: goto label_10b330;
        default: break;
    }

    ctx->pc = 0x10b260u;

    // 0x10b260: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10b264: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x10b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10b268: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x10b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x10b26c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x10b26cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10b270: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x10b274: 0x241501b3  addiu       $s5, $zero, 0x1B3
    ctx->pc = 0x10b274u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x10b278: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10b27c: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x10b27cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10b280: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10b284: 0x241301b7  addiu       $s3, $zero, 0x1B7
    ctx->pc = 0x10b284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x10b288: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10b28c: 0x241201b8  addiu       $s2, $zero, 0x1B8
    ctx->pc = 0x10b28cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x10b290: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10b290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10b294: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x10b294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b298: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10b298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10b29c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b2a0:
    // 0x10b2a0: 0xc042c5e  jal         func_10B178
    ctx->pc = 0x10B2A0u;
    SET_GPR_U32(ctx, 31, 0x10B2A8u);
    ctx->pc = 0x10B2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2A0u;
            // 0x10b2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B178u;
    if (runtime->hasFunction(0x10B178u)) {
        auto targetFn = runtime->lookupFunction(0x10B178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2A8u; }
        if (ctx->pc != 0x10B2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x10b178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2A8u; }
        if (ctx->pc != 0x10B2A8u) { return; }
    }
    ctx->pc = 0x10B2A8u;
label_10b2a8:
    // 0x10b2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2ac: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10B2ACu;
    SET_GPR_U32(ctx, 31, 0x10B2B4u);
    ctx->pc = 0x10B2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2ACu;
            // 0x10b2b0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2B4u; }
        if (ctx->pc != 0x10B2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2B4u; }
        if (ctx->pc != 0x10B2B4u) { return; }
    }
    ctx->pc = 0x10B2B4u;
label_10b2b4:
    // 0x10b2b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b2b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2b8: 0x1075000d  beq         $v1, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x10B2B8u;
    {
        const bool branch_taken_0x10b2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x10B2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2B8u;
            // 0x10b2bc: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2b8) {
            ctx->pc = 0x10B2F0u;
            goto label_10b2f0;
        }
    }
    ctx->pc = 0x10B2C0u;
    // 0x10b2c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B2C0u;
    {
        const bool branch_taken_0x10b2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2c0) {
            ctx->pc = 0x10B2D8u;
            goto label_10b2d8;
        }
    }
    ctx->pc = 0x10B2C8u;
    // 0x10b2c8: 0x10740011  beq         $v1, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x10B2C8u;
    {
        const bool branch_taken_0x10b2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x10b2c8) {
            ctx->pc = 0x10B310u;
            goto label_10b310;
        }
    }
    ctx->pc = 0x10B2D0u;
    // 0x10b2d0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x10B2D0u;
    {
        const bool branch_taken_0x10b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2d0) {
            ctx->pc = 0x10B2A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b2a0;
        }
    }
    ctx->pc = 0x10B2D8u;
label_10b2d8:
    // 0x10b2d8: 0x1073001a  beq         $v1, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x10B2D8u;
    {
        const bool branch_taken_0x10b2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x10B2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2D8u;
            // 0x10b2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2d8) {
            ctx->pc = 0x10B344u;
            goto label_10b344;
        }
    }
    ctx->pc = 0x10B2E0u;
    // 0x10b2e0: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B2E0u;
    {
        const bool branch_taken_0x10b2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x10b2e0) {
            ctx->pc = 0x10B300u;
            goto label_10b300;
        }
    }
    ctx->pc = 0x10B2E8u;
    // 0x10b2e8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x10B2E8u;
    {
        const bool branch_taken_0x10b2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2e8) {
            ctx->pc = 0x10B2A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b2a0;
        }
    }
    ctx->pc = 0x10B2F0u;
label_10b2f0:
    // 0x10b2f0: 0xc043bbe  jal         func_10EEF8
    ctx->pc = 0x10B2F0u;
    SET_GPR_U32(ctx, 31, 0x10B2F8u);
    ctx->pc = 0x10B2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B2F0u;
            // 0x10b2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EEF8u;
    if (runtime->hasFunction(0x10EEF8u)) {
        auto targetFn = runtime->lookupFunction(0x10EEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2F8u; }
        if (ctx->pc != 0x10B2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sequenceHeader_0x10eef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B2F8u; }
        if (ctx->pc != 0x10B2F8u) { return; }
    }
    ctx->pc = 0x10B2F8u;
label_10b2f8:
    // 0x10b2f8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x10B2F8u;
    {
        const bool branch_taken_0x10b2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b2f8) {
            ctx->pc = 0x10B2A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b2a0;
        }
    }
    ctx->pc = 0x10B300u;
label_10b300:
    // 0x10b300: 0xc042e04  jal         func_10B810
    ctx->pc = 0x10B300u;
    SET_GPR_U32(ctx, 31, 0x10B308u);
    ctx->pc = 0x10B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B300u;
            // 0x10b304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B810u;
    if (runtime->hasFunction(0x10B810u)) {
        auto targetFn = runtime->lookupFunction(0x10B810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B308u; }
        if (ctx->pc != 0x10B308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _groupOfPicturesHeader_0x10b810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B308u; }
        if (ctx->pc != 0x10B308u) { return; }
    }
    ctx->pc = 0x10B308u;
label_10b308:
    // 0x10b308: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x10B308u;
    {
        const bool branch_taken_0x10b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b308) {
            ctx->pc = 0x10B2A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10b2a0;
        }
    }
    ctx->pc = 0x10B310u;
label_10b310:
    // 0x10b310: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x10B310u;
    SET_GPR_U32(ctx, 31, 0x10B318u);
    ctx->pc = 0x10B314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B310u;
            // 0x10b314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B370u;
    if (runtime->hasFunction(0x10B370u)) {
        auto targetFn = runtime->lookupFunction(0x10B370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B318u; }
        if (ctx->pc != 0x10B318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pictureHeader_0x10b370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B318u; }
        if (ctx->pc != 0x10B318u) { return; }
    }
    ctx->pc = 0x10B318u;
label_10b318:
    // 0x10b318: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x10b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x10b31c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10b31cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b320: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x10b320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x10b324: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b328: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10B328u;
    SET_GPR_U32(ctx, 31, 0x10B330u);
    ctx->pc = 0x10B32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B328u;
            // 0x10b32c: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B330u; }
        if (ctx->pc != 0x10B330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B330u; }
        if (ctx->pc != 0x10B330u) { return; }
    }
    ctx->pc = 0x10B330u;
label_10b330:
    // 0x10b330: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x10b330u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b334: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x10b334u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b338: 0xfe020830  sd          $v0, 0x830($s0)
    ctx->pc = 0x10b338u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2096), GPR_U64(ctx, 2));
    // 0x10b33c: 0xfe030828  sd          $v1, 0x828($s0)
    ctx->pc = 0x10b33cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2088), GPR_U64(ctx, 3));
    // 0x10b340: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x10b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_10b344:
    // 0x10b344: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10b344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b348: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x10b348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b34c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x10b34cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b350: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10b350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b354: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10b354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b358: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10b358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b35c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10b35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b360: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b364: 0x3e00008  jr          $ra
    ctx->pc = 0x10B364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B364u;
            // 0x10b368: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B36Cu;
}
