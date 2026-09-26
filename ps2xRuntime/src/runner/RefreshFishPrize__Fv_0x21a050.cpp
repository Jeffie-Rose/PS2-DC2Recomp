#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RefreshFishPrize__Fv
// Address: 0x21a050 - 0x21a1d0
void RefreshFishPrize__Fv_0x21a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RefreshFishPrize__Fv_0x21a050");
#endif

    switch (ctx->pc) {
        case 0x21a074u: goto label_21a074;
        case 0x21a094u: goto label_21a094;
        case 0x21a0a0u: goto label_21a0a0;
        case 0x21a13cu: goto label_21a13c;
        default: break;
    }

    ctx->pc = 0x21a050u;

    // 0x21a050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21a054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21a058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21a05c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21a060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21a064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a06c: 0xc064220  jal         func_190880
    ctx->pc = 0x21A06Cu;
    SET_GPR_U32(ctx, 31, 0x21A074u);
    ctx->pc = 0x21A070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A06Cu;
            // 0x21a070: 0xaf809288  sw          $zero, -0x6D78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A074u; }
        if (ctx->pc != 0x21A074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A074u; }
        if (ctx->pc != 0x21A074u) { return; }
    }
    ctx->pc = 0x21A074u;
label_21a074:
    // 0x21a074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a078: 0x8382927c  lb          $v0, -0x6D84($gp)
    ctx->pc = 0x21a078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939260)));
    // 0x21a07c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x21A07Cu;
    {
        const bool branch_taken_0x21a07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A07Cu;
            // 0x21a080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a07c) {
            ctx->pc = 0x21A134u;
            goto label_21a134;
        }
    }
    ctx->pc = 0x21A084u;
    // 0x21a084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a088: 0x24120016  addiu       $s2, $zero, 0x16
    ctx->pc = 0x21a088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x21a08c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21a08cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a090: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21a090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a094:
    // 0x21a094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a098: 0xc0bd950  jal         func_2F6540
    ctx->pc = 0x21A098u;
    SET_GPR_U32(ctx, 31, 0x21A0A0u);
    ctx->pc = 0x21A09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A098u;
            // 0x21a09c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6540u;
    if (runtime->hasFunction(0x2F6540u)) {
        auto targetFn = runtime->lookupFunction(0x2F6540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A0A0u; }
        if (ctx->pc != 0x21A0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShortFlag__9CSaveDataFi_0x2f6540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A0A0u; }
        if (ctx->pc != 0x21A0A0u) { return; }
    }
    ctx->pc = 0x21A0A0u;
label_21a0a0:
    // 0x21a0a0: 0x8f839274  lw          $v1, -0x6D8C($gp)
    ctx->pc = 0x21a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939252)));
    // 0x21a0a4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x21a0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x21a0a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x21a0a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x21a0ac: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x21a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21a0b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21a0b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a0b8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x21a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x21a0bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x21a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21a0c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A0C0u;
    {
        const bool branch_taken_0x21a0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A0C0u;
            // 0x21a0c4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0c0) {
            ctx->pc = 0x21A0D0u;
            goto label_21a0d0;
        }
    }
    ctx->pc = 0x21A0C8u;
    // 0x21a0c8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x21A0C8u;
    {
        const bool branch_taken_0x21a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A0C8u;
            // 0x21a0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0c8) {
            ctx->pc = 0x21A1B0u;
            goto label_21a1b0;
        }
    }
    ctx->pc = 0x21A0D0u;
label_21a0d0:
    // 0x21a0d0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x21a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x21a0d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21a0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21a0d8: 0x267300cc  addiu       $s3, $s3, 0xCC
    ctx->pc = 0x21a0d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 204));
    // 0x21a0dc: 0xaf839288  sw          $v1, -0x6D78($gp)
    ctx->pc = 0x21a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 3));
    // 0x21a0e0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x21a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x21a0e4: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21a0e8: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x21a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x21a0ec: 0x542821  addu        $a1, $v0, $s4
    ctx->pc = 0x21a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21a0f0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x21a0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21a0f4: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x21a0f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x21a0f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21a0fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x21a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x21a100: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x21a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21a104: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x21a104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x21a108: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x21a108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21a10c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x21a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x21a110: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x21a110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21a114: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x21a114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x21a118: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x21a118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x21a11c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x21a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x21a120: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x21a120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x21a124: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x21A124u;
    {
        const bool branch_taken_0x21a124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A124u;
            // 0x21a128: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a124) {
            ctx->pc = 0x21A094u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a094;
        }
    }
    ctx->pc = 0x21A12Cu;
    // 0x21a12c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x21A12Cu;
    {
        const bool branch_taken_0x21a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A12Cu;
            // 0x21a130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a12c) {
            ctx->pc = 0x21A1B0u;
            goto label_21a1b0;
        }
    }
    ctx->pc = 0x21A134u;
label_21a134:
    // 0x21a134: 0xc0bd950  jal         func_2F6540
    ctx->pc = 0x21A134u;
    SET_GPR_U32(ctx, 31, 0x21A13Cu);
    ctx->pc = 0x21A138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A134u;
            // 0x21a138: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6540u;
    if (runtime->hasFunction(0x2F6540u)) {
        auto targetFn = runtime->lookupFunction(0x2F6540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A13Cu; }
        if (ctx->pc != 0x21A13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShortFlag__9CSaveDataFi_0x2f6540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A13Cu; }
        if (ctx->pc != 0x21A13Cu) { return; }
    }
    ctx->pc = 0x21A13Cu;
label_21a13c:
    // 0x21a13c: 0x8f839274  lw          $v1, -0x6D8C($gp)
    ctx->pc = 0x21a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939252)));
    // 0x21a140: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x21a140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x21a144: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x21a144u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x21a148: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a14c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x21a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21a150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a154: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21a154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21a158: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x21a158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21a15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21a160: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x21a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x21a164: 0xaf839288  sw          $v1, -0x6D78($gp)
    ctx->pc = 0x21a164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 3));
    // 0x21a168: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21a168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21a16c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x21a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21a170: 0xac23c930  sw          $v1, -0x36D0($at)
    ctx->pc = 0x21a170u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953264), GPR_U32(ctx, 3));
    // 0x21a174: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x21a174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21a178: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a17c: 0xac23c934  sw          $v1, -0x36CC($at)
    ctx->pc = 0x21a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953268), GPR_U32(ctx, 3));
    // 0x21a180: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x21a180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21a184: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a188: 0xac23c938  sw          $v1, -0x36C8($at)
    ctx->pc = 0x21a188u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953272), GPR_U32(ctx, 3));
    // 0x21a18c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x21a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x21a190: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a194: 0xac23c93c  sw          $v1, -0x36C4($at)
    ctx->pc = 0x21a194u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953276), GPR_U32(ctx, 3));
    // 0x21a198: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x21a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x21a19c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a1a0: 0xac23c940  sw          $v1, -0x36C0($at)
    ctx->pc = 0x21a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953280), GPR_U32(ctx, 3));
    // 0x21a1a4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x21a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x21a1a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x21a1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21a1ac: 0xac23c944  sw          $v1, -0x36BC($at)
    ctx->pc = 0x21a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953284), GPR_U32(ctx, 3));
label_21a1b0:
    // 0x21a1b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21a1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21a1b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21a1b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a1b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21a1b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a1bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a1c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x21A1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A1C8u;
            // 0x21a1cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A1D0u;
}
