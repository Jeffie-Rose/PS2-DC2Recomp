#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PickupRandomItem__FP22TRESURE_BOX_FLOOR_INFOii
// Address: 0x28e070 - 0x28e1bc
void PickupRandomItem__FP22TRESURE_BOX_FLOOR_INFOii_0x28e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PickupRandomItem__FP22TRESURE_BOX_FLOOR_INFOii_0x28e070");
#endif

    switch (ctx->pc) {
        case 0x28e0d4u: goto label_28e0d4;
        case 0x28e0f4u: goto label_28e0f4;
        case 0x28e114u: goto label_28e114;
        case 0x28e148u: goto label_28e148;
        case 0x28e158u: goto label_28e158;
        default: break;
    }

    ctx->pc = 0x28e070u;

    // 0x28e070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28e074: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28e078: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28e078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28e07c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28e080: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28e084: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28e084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e088: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28e08c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28e08cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e094: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28e094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e09c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E09Cu;
    {
        const bool branch_taken_0x28e09c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x28E0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E09Cu;
            // 0x28e0a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e09c) {
            ctx->pc = 0x28E0ACu;
            goto label_28e0ac;
        }
    }
    ctx->pc = 0x28E0A4u;
    // 0x28e0a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28e0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0a8: 0x129023  negu        $s2, $s2
    ctx->pc = 0x28e0a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
label_28e0ac:
    // 0x28e0ac: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x28e0acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28e0b0: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x28e0b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x28e0b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x28E0B4u;
    {
        const bool branch_taken_0x28e0b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e0b4) {
            ctx->pc = 0x28E0C0u;
            goto label_28e0c0;
        }
    }
    ctx->pc = 0x28E0BCu;
    // 0x28e0bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28e0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e0c0:
    // 0x28e0c0: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x28e0c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x28e0c4: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x28e0c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28e0c8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x28E0C8u;
    {
        const bool branch_taken_0x28e0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e0c8) {
            ctx->pc = 0x28E0D4u;
            goto label_28e0d4;
        }
    }
    ctx->pc = 0x28E0D0u;
    // 0x28e0d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28e0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e0d4:
    // 0x28e0d4: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x28e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x28e0d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28e0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28e0dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x28e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x28e0e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28e0e4: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x28e0e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x28e0e8: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x28e0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x28e0ec: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x28E0ECu;
    SET_GPR_U32(ctx, 31, 0x28E0F4u);
    ctx->pc = 0x28E0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0ECu;
            // 0x28e0f0: 0x8c242208  lw          $a0, 0x2208($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E0F4u; }
        if (ctx->pc != 0x28E0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E0F4u; }
        if (ctx->pc != 0x28E0F4u) { return; }
    }
    ctx->pc = 0x28E0F4u;
label_28e0f4:
    // 0x28e0f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28e0f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28e0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28e0fc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x28e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28e100: 0x26910004  addiu       $s1, $s4, 0x4
    ctx->pc = 0x28e100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x28e104: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x28e104u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x28e108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e10c: 0x8c23220c  lw          $v1, 0x220C($at)
    ctx->pc = 0x28e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8716)));
    // 0x28e110: 0x0  nop
    ctx->pc = 0x28e110u;
    // NOP
label_28e114:
    // 0x28e114: 0x0  nop
    ctx->pc = 0x28e114u;
    // NOP
    // 0x28e118: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e11c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28E11Cu;
    {
        const bool branch_taken_0x28e11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28E120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E11Cu;
            // 0x28e120: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e11c) {
            ctx->pc = 0x28E150u;
            goto label_28e150;
        }
    }
    ctx->pc = 0x28E124u;
    // 0x28e124: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28e124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28e128: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x28e128u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x28e12c: 0x8c222204  lw          $v0, 0x2204($at)
    ctx->pc = 0x28e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8708)));
    // 0x28e130: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28e130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28e134: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28E134u;
    {
        const bool branch_taken_0x28e134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E134u;
            // 0x28e138: 0x26310488  addiu       $s1, $s1, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e134) {
            ctx->pc = 0x28E114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e114;
        }
    }
    ctx->pc = 0x28E13Cu;
    // 0x28e13c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x28e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x28e140: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x28E140u;
    SET_GPR_U32(ctx, 31, 0x28E148u);
    ctx->pc = 0x28E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E140u;
            // 0x28e144: 0x2484d750  addiu       $a0, $a0, -0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E148u; }
        if (ctx->pc != 0x28E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E148u; }
        if (ctx->pc != 0x28E148u) { return; }
    }
    ctx->pc = 0x28E148u;
label_28e148:
    // 0x28e148: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x28E148u;
    {
        const bool branch_taken_0x28e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e148) {
            ctx->pc = 0x28E148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e148;
        }
    }
    ctx->pc = 0x28E150u;
label_28e150:
    // 0x28e150: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x28E150u;
    SET_GPR_U32(ctx, 31, 0x28E158u);
    ctx->pc = 0x28E154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E150u;
            // 0x28e154: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E158u; }
        if (ctx->pc != 0x28E158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E158u; }
        if (ctx->pc != 0x28E158u) { return; }
    }
    ctx->pc = 0x28E158u;
label_28e158:
    // 0x28e158: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x28e158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x28e15c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28e160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28e164: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28e168: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E168u;
    {
        const bool branch_taken_0x28e168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E168u;
            // 0x28e16c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e168) {
            ctx->pc = 0x28E188u;
            goto label_28e188;
        }
    }
    ctx->pc = 0x28E170u;
    // 0x28e170: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28e170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e174: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x28e174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x28e178: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x28E178u;
    {
        const bool branch_taken_0x28e178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e178) {
            ctx->pc = 0x28E0D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e0d4;
        }
    }
    ctx->pc = 0x28E180u;
    // 0x28e180: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E180u;
    {
        const bool branch_taken_0x28e180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E180u;
            // 0x28e184: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e180) {
            ctx->pc = 0x28E19Cu;
            goto label_28e19c;
        }
    }
    ctx->pc = 0x28E188u;
label_28e188:
    // 0x28e188: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28e18c: 0x243082a  slt         $at, $s2, $v1
    ctx->pc = 0x28e18cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e190: 0x1420ffd0  bnez        $at, . + 4 + (-0x30 << 2)
    ctx->pc = 0x28E190u;
    {
        const bool branch_taken_0x28e190 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e190) {
            ctx->pc = 0x28E0D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e0d4;
        }
    }
    ctx->pc = 0x28E198u;
    // 0x28e198: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28e198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28e19c:
    // 0x28e19c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28e19cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e1a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28e1a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e1a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28e1a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e1a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28e1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e1ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e1b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28E1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1B4u;
            // 0x28e1b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E1BCu;
}
