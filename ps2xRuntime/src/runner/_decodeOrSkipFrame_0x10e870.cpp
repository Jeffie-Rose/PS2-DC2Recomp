#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _decodeOrSkipFrame
// Address: 0x10e870 - 0x10e984
void _decodeOrSkipFrame_0x10e870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decodeOrSkipFrame_0x10e870");
#endif

    switch (ctx->pc) {
        case 0x10e8c8u: goto label_10e8c8;
        case 0x10e8d8u: goto label_10e8d8;
        case 0x10e8ecu: goto label_10e8ec;
        case 0x10e8fcu: goto label_10e8fc;
        case 0x10e90cu: goto label_10e90c;
        default: break;
    }

    ctx->pc = 0x10e870u;

    // 0x10e870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10e874: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10e874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10e878: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10e87c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e880: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10e880u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e884: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10e884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10e888: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e88c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10e890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10e894: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E894u;
    {
        const bool branch_taken_0x10e894 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E894u;
            // 0x10e898: 0x8e300040  lw          $s0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e894) {
            ctx->pc = 0x10E8A8u;
            goto label_10e8a8;
        }
    }
    ctx->pc = 0x10E89Cu;
    // 0x10e89c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10e89cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10e8a0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10E8A0u;
    {
        const bool branch_taken_0x10e8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8A0u;
            // 0x10e8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8a0) {
            ctx->pc = 0x10E8E4u;
            goto label_10e8e4;
        }
    }
    ctx->pc = 0x10E8A8u;
label_10e8a8:
    // 0x10e8a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10e8ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E8ACu;
    {
        const bool branch_taken_0x10e8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8ACu;
            // 0x10e8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8ac) {
            ctx->pc = 0x10E8C0u;
            goto label_10e8c0;
        }
    }
    ctx->pc = 0x10E8B4u;
    // 0x10e8b4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10e8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e8bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10e8c0:
    // 0x10e8c0: 0xc042f18  jal         func_10BC60
    ctx->pc = 0x10E8C0u;
    SET_GPR_U32(ctx, 31, 0x10E8C8u);
    ctx->pc = 0x10E8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8C0u;
            // 0x10e8c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BC60u;
    if (runtime->hasFunction(0x10BC60u)) {
        auto targetFn = runtime->lookupFunction(0x10BC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8C8u; }
        if (ctx->pc != 0x10E8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x10bc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8C8u; }
        if (ctx->pc != 0x10E8C8u) { return; }
    }
    ctx->pc = 0x10E8C8u;
label_10e8c8:
    // 0x10e8c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E8C8u;
    {
        const bool branch_taken_0x10e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8C8u;
            // 0x10e8cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8c8) {
            ctx->pc = 0x10E8DCu;
            goto label_10e8dc;
        }
    }
    ctx->pc = 0x10E8D0u;
    // 0x10e8d0: 0xc042ec0  jal         func_10BB00
    ctx->pc = 0x10E8D0u;
    SET_GPR_U32(ctx, 31, 0x10E8D8u);
    ctx->pc = 0x10E8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8D0u;
            // 0x10e8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BB00u;
    if (runtime->hasFunction(0x10BB00u)) {
        auto targetFn = runtime->lookupFunction(0x10BB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8D8u; }
        if (ctx->pc != 0x10E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x10bb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8D8u; }
        if (ctx->pc != 0x10E8D8u) { return; }
    }
    ctx->pc = 0x10E8D8u;
label_10e8d8:
    // 0x10e8d8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x10e8d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10e8dc:
    // 0x10e8dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10E8DCu;
    {
        const bool branch_taken_0x10e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8DCu;
            // 0x10e8e0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8dc) {
            ctx->pc = 0x10E8FCu;
            goto label_10e8fc;
        }
    }
    ctx->pc = 0x10E8E4u;
label_10e8e4:
    // 0x10e8e4: 0xc042f18  jal         func_10BC60
    ctx->pc = 0x10E8E4u;
    SET_GPR_U32(ctx, 31, 0x10E8ECu);
    ctx->pc = 0x10E8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8E4u;
            // 0x10e8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BC60u;
    if (runtime->hasFunction(0x10BC60u)) {
        auto targetFn = runtime->lookupFunction(0x10BC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8ECu; }
        if (ctx->pc != 0x10E8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x10bc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8ECu; }
        if (ctx->pc != 0x10E8ECu) { return; }
    }
    ctx->pc = 0x10E8ECu;
label_10e8ec:
    // 0x10e8ec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10e8ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e8f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10e8f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e8f4: 0xc04395e  jal         func_10E578
    ctx->pc = 0x10E8F4u;
    SET_GPR_U32(ctx, 31, 0x10E8FCu);
    ctx->pc = 0x10E8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E8F4u;
            // 0x10e8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E578u;
    if (runtime->hasFunction(0x10E578u)) {
        auto targetFn = runtime->lookupFunction(0x10E578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8FCu; }
        if (ctx->pc != 0x10E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x10e578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E8FCu; }
        if (ctx->pc != 0x10E8FCu) { return; }
    }
    ctx->pc = 0x10E8FCu;
label_10e8fc:
    // 0x10e8fc: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x10e8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x10e900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e904: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x10E904u;
    SET_GPR_U32(ctx, 31, 0x10E90Cu);
    ctx->pc = 0x10E908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E904u;
            // 0x10e908: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (runtime->hasFunction(0x10BBD0u)) {
        auto targetFn = runtime->lookupFunction(0x10BBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E90Cu; }
        if (ctx->pc != 0x10E90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x10bbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E90Cu; }
        if (ctx->pc != 0x10E90Cu) { return; }
    }
    ctx->pc = 0x10E90Cu;
label_10e90c:
    // 0x10e90c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x10e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10e910: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10e910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10e914: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10E914u;
    {
        const bool branch_taken_0x10e914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10e914) {
            ctx->pc = 0x10E918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10E914u;
            // 0x10e918: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10E934u;
            goto label_10e934;
        }
    }
    ctx->pc = 0x10E91Cu;
    // 0x10e91c: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E91Cu;
    {
        const bool branch_taken_0x10e91c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e91c) {
            ctx->pc = 0x10E920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10E91Cu;
            // 0x10e920: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10E934u;
            goto label_10e934;
        }
    }
    ctx->pc = 0x10E924u;
    // 0x10e924: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x10e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x10e928: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10e928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10e92c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x10e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x10e930: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x10e930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_10e934:
    // 0x10e934: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x10e934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x10e938: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10e938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10e93c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x10e940: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x10e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x10e944: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E944u;
    {
        const bool branch_taken_0x10e944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E944u;
            // 0x10e948: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e944) {
            ctx->pc = 0x10E968u;
            goto label_10e968;
        }
    }
    ctx->pc = 0x10E94Cu;
    // 0x10e94c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x10e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x10e950: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10e950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10e954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10e958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10e958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10e95c: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x10e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x10e960: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x10e960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x10e964: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x10e964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10e968:
    // 0x10e968: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10e968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e96c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10e96cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e970: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e974: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e97c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E97Cu;
            // 0x10e980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E984u;
}
