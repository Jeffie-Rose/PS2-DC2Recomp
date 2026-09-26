#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _slice0
// Address: 0x10a060 - 0x10a250
void _slice0_0x10a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_slice0_0x10a060");
#endif

    switch (ctx->pc) {
        case 0x10a098u: goto label_10a098;
        case 0x10a0a8u: goto label_10a0a8;
        case 0x10a0d8u: goto label_10a0d8;
        case 0x10a0fcu: goto label_10a0fc;
        case 0x10a124u: goto label_10a124;
        case 0x10a150u: goto label_10a150;
        case 0x10a188u: goto label_10a188;
        case 0x10a1b4u: goto label_10a1b4;
        case 0x10a1e0u: goto label_10a1e0;
        case 0x10a20cu: goto label_10a20c;
        default: break;
    }

    ctx->pc = 0x10a060u;

    // 0x10a060: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10a060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10a064: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x10a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x10a068: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x10a068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10a06c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x10a06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x10a070: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10a070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a078: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x10a078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x10a07c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x10a07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x10a080: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x10a080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x10a084: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x10a084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a088: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10a08c: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x10a08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x10a090: 0xc0427cc  jal         func_109F30
    ctx->pc = 0x10A090u;
    SET_GPR_U32(ctx, 31, 0x10A098u);
    ctx->pc = 0x10A094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A090u;
            // 0x10a094: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F30u;
    if (runtime->hasFunction(0x109F30u)) {
        auto targetFn = runtime->lookupFunction(0x109F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A098u; }
        if (ctx->pc != 0x10A098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sliceA0_0x109f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A098u; }
        if (ctx->pc != 0x10A098u) { return; }
    }
    ctx->pc = 0x10A098u;
label_10a098:
    // 0x10a098: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x10A098u;
    {
        const bool branch_taken_0x10a098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A098u;
            // 0x10a09c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a098) {
            ctx->pc = 0x10A238u;
            goto label_10a238;
        }
    }
    ctx->pc = 0x10A0A0u;
    // 0x10a0a0: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x10a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x10a0a4: 0x0  nop
    ctx->pc = 0x10a0a4u;
    // NOP
label_10a0a8:
    // 0x10a0a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a0ac: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x10a0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x10a0b0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A0B0u;
    {
        const bool branch_taken_0x10a0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a0b0) {
            ctx->pc = 0x10A0B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0B0u;
            // 0x10a0b4: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A0C0u;
            goto label_10a0c0;
        }
    }
    ctx->pc = 0x10A0B8u;
    // 0x10a0b8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x10A0B8u;
    {
        const bool branch_taken_0x10a0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0B8u;
            // 0x10a0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0b8) {
            ctx->pc = 0x10A234u;
            goto label_10a234;
        }
    }
    ctx->pc = 0x10A0C0u;
label_10a0c0:
    // 0x10a0c0: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x10a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10a0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0c8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x10a0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x10a0cc: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x10a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x10a0d0: 0xc042660  jal         func_109980
    ctx->pc = 0x10A0D0u;
    SET_GPR_U32(ctx, 31, 0x10A0D8u);
    ctx->pc = 0x10A0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0D0u;
            // 0x10a0d4: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109980u;
    if (runtime->hasFunction(0x109980u)) {
        auto targetFn = runtime->lookupFunction(0x109980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A0D8u; }
        if (ctx->pc != 0x10A0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitBdecOut_0x109980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A0D8u; }
        if (ctx->pc != 0x10A0D8u) { return; }
    }
    ctx->pc = 0x10A0D8u;
label_10a0d8:
    // 0x10a0d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A0D8u;
    {
        const bool branch_taken_0x10a0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0D8u;
            // 0x10a0dc: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0d8) {
            ctx->pc = 0x10A0E8u;
            goto label_10a0e8;
        }
    }
    ctx->pc = 0x10A0E0u;
    // 0x10a0e0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x10A0E0u;
    {
        const bool branch_taken_0x10a0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0E0u;
            // 0x10a0e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0e0) {
            ctx->pc = 0x10A234u;
            goto label_10a234;
        }
    }
    ctx->pc = 0x10A0E8u;
label_10a0e8:
    // 0x10a0e8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10A0E8u;
    {
        const bool branch_taken_0x10a0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0E8u;
            // 0x10a0ec: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0e8) {
            ctx->pc = 0x10A134u;
            goto label_10a134;
        }
    }
    ctx->pc = 0x10A0F0u;
    // 0x10a0f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0f4: 0xc042b8c  jal         func_10AE30
    ctx->pc = 0x10A0F4u;
    SET_GPR_U32(ctx, 31, 0x10A0FCu);
    ctx->pc = 0x10A0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0F4u;
            // 0x10a0f8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AE30u;
    if (runtime->hasFunction(0x10AE30u)) {
        auto targetFn = runtime->lookupFunction(0x10AE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A0FCu; }
        if (ctx->pc != 0x10A0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x10ae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A0FCu; }
        if (ctx->pc != 0x10A0FCu) { return; }
    }
    ctx->pc = 0x10A0FCu;
label_10a0fc:
    // 0x10a0fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A0FCu;
    {
        const bool branch_taken_0x10a0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0fc) {
            ctx->pc = 0x10A100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A0FCu;
            // 0x10a100: 0xae00011c  sw          $zero, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A114u;
            goto label_10a114;
        }
    }
    ctx->pc = 0x10A104u;
    // 0x10a104: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x10a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x10a108: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A108u;
    {
        const bool branch_taken_0x10a108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a108) {
            ctx->pc = 0x10A11Cu;
            goto label_10a11c;
        }
    }
    ctx->pc = 0x10A110u;
    // 0x10a110: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x10a110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_10a114:
    // 0x10a114: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x10A114u;
    {
        const bool branch_taken_0x10a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A114u;
            // 0x10a118: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a114) {
            ctx->pc = 0x10A234u;
            goto label_10a234;
        }
    }
    ctx->pc = 0x10A11Cu;
label_10a11c:
    // 0x10a11c: 0xc042746  jal         func_109D18
    ctx->pc = 0x10A11Cu;
    SET_GPR_U32(ctx, 31, 0x10A124u);
    ctx->pc = 0x10A120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A11Cu;
            // 0x10a120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109D18u;
    if (runtime->hasFunction(0x109D18u)) {
        auto targetFn = runtime->lookupFunction(0x109D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A124u; }
        if (ctx->pc != 0x10A124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _mbAddressIncrement_0x109d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A124u; }
        if (ctx->pc != 0x10A124u) { return; }
    }
    ctx->pc = 0x10A124u;
label_10a124:
    // 0x10a124: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x10a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x10a128: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x10A128u;
    {
        const bool branch_taken_0x10a128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A128u;
            // 0x10a12c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a128) {
            ctx->pc = 0x10A190u;
            goto label_10a190;
        }
    }
    ctx->pc = 0x10A130u;
    // 0x10a130: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10a134:
    // 0x10a134: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x10a134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x10a138: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A138u;
    {
        const bool branch_taken_0x10a138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A138u;
            // 0x10a13c: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a138) {
            ctx->pc = 0x10A158u;
            goto label_10a158;
        }
    }
    ctx->pc = 0x10A140u;
    // 0x10a140: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10a140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10a144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a148: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10A148u;
    SET_GPR_U32(ctx, 31, 0x10A150u);
    ctx->pc = 0x10A14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A148u;
            // 0x10a14c: 0x24a506c8  addiu       $a1, $a1, 0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A150u; }
        if (ctx->pc != 0x10A150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A150u; }
        if (ctx->pc != 0x10A150u) { return; }
    }
    ctx->pc = 0x10A150u;
label_10a150:
    // 0x10a150: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x10A150u;
    {
        const bool branch_taken_0x10a150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A150u;
            // 0x10a154: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a150) {
            ctx->pc = 0x10A234u;
            goto label_10a234;
        }
    }
    ctx->pc = 0x10A158u;
label_10a158:
    // 0x10a158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a15c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10A15Cu;
    {
        const bool branch_taken_0x10a15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A15Cu;
            // 0x10a160: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a15c) {
            ctx->pc = 0x10A19Cu;
            goto label_10a19c;
        }
    }
    ctx->pc = 0x10A164u;
    // 0x10a164: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x10a164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a16c: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x10a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x10a170: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x10a170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x10a174: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x10a174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10a178: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x10a178u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a17c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x10a17cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a180: 0xc0428c4  jal         func_10A310
    ctx->pc = 0x10A180u;
    SET_GPR_U32(ctx, 31, 0x10A188u);
    ctx->pc = 0x10A184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A180u;
            // 0x10a184: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A310u;
    if (runtime->hasFunction(0x10A310u)) {
        auto targetFn = runtime->lookupFunction(0x10A310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A188u; }
        if (ctx->pc != 0x10A188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decMB0_0x10a310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A188u; }
        if (ctx->pc != 0x10A188u) { return; }
    }
    ctx->pc = 0x10A188u;
label_10a188:
    // 0x10a188: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A188u;
    {
        const bool branch_taken_0x10a188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A188u;
            // 0x10a18c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a188) {
            ctx->pc = 0x10A1C0u;
            goto label_10a1c0;
        }
    }
    ctx->pc = 0x10A190u;
label_10a190:
    // 0x10a190: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x10a190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x10a194: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10A194u;
    {
        const bool branch_taken_0x10a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A194u;
            // 0x10a198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a194) {
            ctx->pc = 0x10A234u;
            goto label_10a234;
        }
    }
    ctx->pc = 0x10A19Cu;
label_10a19c:
    // 0x10a19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1a4: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x10a1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x10a1a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x10a1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1ac: 0xc042894  jal         func_10A250
    ctx->pc = 0x10A1ACu;
    SET_GPR_U32(ctx, 31, 0x10A1B4u);
    ctx->pc = 0x10A1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1ACu;
            // 0x10a1b0: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A250u;
    if (runtime->hasFunction(0x10A250u)) {
        auto targetFn = runtime->lookupFunction(0x10A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A1B4u; }
        if (ctx->pc != 0x10A1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _skipMB0_0x10a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A1B4u; }
        if (ctx->pc != 0x10A1B4u) { return; }
    }
    ctx->pc = 0x10A1B4u;
label_10a1b4:
    // 0x10a1b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10A1B4u;
    {
        const bool branch_taken_0x10a1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1B4u;
            // 0x10a1b8: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1b4) {
            ctx->pc = 0x10A1E8u;
            goto label_10a1e8;
        }
    }
    ctx->pc = 0x10A1BCu;
    // 0x10a1bc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x10a1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10a1c0:
    // 0x10a1c0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x10a1c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1c4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x10a1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x10a1c8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x10a1c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1cc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x10a1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10a1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1d4: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x10a1d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x10a1d8: 0xc041f04  jal         func_107C10
    ctx->pc = 0x10A1D8u;
    SET_GPR_U32(ctx, 31, 0x10A1E0u);
    ctx->pc = 0x10A1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1D8u;
            // 0x10a1dc: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107C10u;
    if (runtime->hasFunction(0x107C10u)) {
        auto targetFn = runtime->lookupFunction(0x107C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A1E0u; }
        if (ctx->pc != 0x10A1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionComp0_0x107c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A1E0u; }
        if (ctx->pc != 0x10A1E0u) { return; }
    }
    ctx->pc = 0x10A1E0u;
label_10a1e0:
    // 0x10a1e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A1E0u;
    {
        const bool branch_taken_0x10a1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1E0u;
            // 0x10a1e4: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1e0) {
            ctx->pc = 0x10A1F4u;
            goto label_10a1f4;
        }
    }
    ctx->pc = 0x10A1E8u;
label_10a1e8:
    // 0x10a1e8: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x10a1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x10a1ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10A1ECu;
    {
        const bool branch_taken_0x10a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1ECu;
            // 0x10a1f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1ec) {
            ctx->pc = 0x10A234u;
            goto label_10a234;
        }
    }
    ctx->pc = 0x10A1F4u;
label_10a1f4:
    // 0x10a1f4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A1F4u;
    {
        const bool branch_taken_0x10a1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a1f4) {
            ctx->pc = 0x10A1F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A1F4u;
            // 0x10a1f8: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A214u;
            goto label_10a214;
        }
    }
    ctx->pc = 0x10A1FCu;
    // 0x10a1fc: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x10a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x10a200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a204: 0xc042262  jal         func_108988
    ctx->pc = 0x10A204u;
    SET_GPR_U32(ctx, 31, 0x10A20Cu);
    ctx->pc = 0x10A208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A204u;
            // 0x10a208: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x108988u;
    if (runtime->hasFunction(0x108988u)) {
        auto targetFn = runtime->lookupFunction(0x108988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A20Cu; }
        if (ctx->pc != 0x10A20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doMC_0x108988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A20Cu; }
        if (ctx->pc != 0x10A20Cu) { return; }
    }
    ctx->pc = 0x10A20Cu;
label_10a20c:
    // 0x10a20c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a210: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x10a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
label_10a214:
    // 0x10a214: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10a214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10a218: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x10a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x10a21c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10a21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10a220: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x10a220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x10a224: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10a228: 0xae020810  sw          $v0, 0x810($s0)
    ctx->pc = 0x10a228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 2));
    // 0x10a22c: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x10A22Cu;
    {
        const bool branch_taken_0x10a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A22Cu;
            // 0x10a230: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a22c) {
            ctx->pc = 0x10A0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10a0a8;
        }
    }
    ctx->pc = 0x10A234u;
label_10a234:
    // 0x10a234: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10a234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_10a238:
    // 0x10a238: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x10a238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10a23c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x10a23cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10a240: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x10a240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a244: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x10a244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a248: 0x3e00008  jr          $ra
    ctx->pc = 0x10A248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A248u;
            // 0x10a24c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A250u;
}
