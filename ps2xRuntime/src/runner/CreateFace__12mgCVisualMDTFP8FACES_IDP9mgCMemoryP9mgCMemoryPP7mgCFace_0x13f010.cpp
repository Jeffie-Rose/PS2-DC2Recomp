#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateFace__12mgCVisualMDTFP8FACES_IDP9mgCMemoryP9mgCMemoryPP7mgCFace
// Address: 0x13f010 - 0x13f28c
void CreateFace__12mgCVisualMDTFP8FACES_IDP9mgCMemoryP9mgCMemoryPP7mgCFace_0x13f010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateFace__12mgCVisualMDTFP8FACES_IDP9mgCMemoryP9mgCMemoryPP7mgCFace_0x13f010");
#endif

    switch (ctx->pc) {
        case 0x13f04cu: goto label_13f04c;
        case 0x13f058u: goto label_13f058;
        case 0x13f104u: goto label_13f104;
        case 0x13f110u: goto label_13f110;
        case 0x13f154u: goto label_13f154;
        case 0x13f160u: goto label_13f160;
        case 0x13f178u: goto label_13f178;
        case 0x13f190u: goto label_13f190;
        case 0x13f1dcu: goto label_13f1dc;
        case 0x13f1e8u: goto label_13f1e8;
        case 0x13f200u: goto label_13f200;
        case 0x13f234u: goto label_13f234;
        default: break;
    }

    ctx->pc = 0x13f010u;

    // 0x13f010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13f010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13f014: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13f014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13f018: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13f01c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13f020: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x13f020u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f024: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13f028: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x13f028u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f02c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13f030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13f034: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x13f034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f03c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f044: 0xc04fa08  jal         func_13E820
    ctx->pc = 0x13F044u;
    SET_GPR_U32(ctx, 31, 0x13F04Cu);
    ctx->pc = 0x13F048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F044u;
            // 0x13f048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E820u;
    if (runtime->hasFunction(0x13E820u)) {
        auto targetFn = runtime->lookupFunction(0x13E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F04Cu; }
        if (ctx->pc != 0x13F04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureManager__9mgCVisualFv_0x13e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F04Cu; }
        if (ctx->pc != 0x13F04Cu) { return; }
    }
    ctx->pc = 0x13F04Cu;
label_13f04c:
    // 0x13f04c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13f04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f050: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13F050u;
    SET_GPR_U32(ctx, 31, 0x13F058u);
    ctx->pc = 0x13F054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F050u;
            // 0x13f054: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F058u; }
        if (ctx->pc != 0x13F058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F058u; }
        if (ctx->pc != 0x13F058u) { return; }
    }
    ctx->pc = 0x13F058u;
label_13f058:
    // 0x13f058: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x13f058u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f05c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13f060: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f064: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x13f064u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x13f068: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x13f068u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f06c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x13f06cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x13f070: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x13f070u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x13f074: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x13f074u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f078: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13f078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13f07c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F07Cu;
    {
        const bool branch_taken_0x13f07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f07c) {
            ctx->pc = 0x13F090u;
            goto label_13f090;
        }
    }
    ctx->pc = 0x13F084u;
    // 0x13f084: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x13f084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13f088: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13f08c: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x13f08cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_13f090:
    // 0x13f090: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x13f090u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f094: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x13f094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x13f098: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F098u;
    {
        const bool branch_taken_0x13f098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f098) {
            ctx->pc = 0x13F0ACu;
            goto label_13f0ac;
        }
    }
    ctx->pc = 0x13F0A0u;
    // 0x13f0a0: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x13f0a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13f0a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13f0a8: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x13f0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_13f0ac:
    // 0x13f0ac: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x13f0acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f0b0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x13f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x13f0b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F0B4u;
    {
        const bool branch_taken_0x13f0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f0b4) {
            ctx->pc = 0x13F0C8u;
            goto label_13f0c8;
        }
    }
    ctx->pc = 0x13F0BCu;
    // 0x13f0bc: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x13f0bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13f0c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13f0c4: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x13f0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_13f0c8:
    // 0x13f0c8: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x13f0c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13f0cc: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x13f0ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13f0d0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x13f0d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13f0d4: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x13f0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x13f0d8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x13f0d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f0dc: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x13f0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x13f0e0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x13f0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x13f0e4: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x13f0e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x13f0e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F0E8u;
    {
        const bool branch_taken_0x13f0e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13F0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0E8u;
            // 0x13f0ec: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0e8) {
            ctx->pc = 0x13F0F8u;
            goto label_13f0f8;
        }
    }
    ctx->pc = 0x13F0F0u;
    // 0x13f0f0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13f0f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x13f0f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_13f0f8:
    // 0x13f0f8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x13f0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13f0fc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13F0FCu;
    SET_GPR_U32(ctx, 31, 0x13F104u);
    ctx->pc = 0x13F100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F0FCu;
            // 0x13f100: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F104u; }
        if (ctx->pc != 0x13F104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F104u; }
        if (ctx->pc != 0x13F104u) { return; }
    }
    ctx->pc = 0x13F104u;
label_13f104:
    // 0x13f104: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x13f104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x13f108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13F108u;
    {
        const bool branch_taken_0x13f108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F108u;
            // 0x13f10c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f108) {
            ctx->pc = 0x13F124u;
            goto label_13f124;
        }
    }
    ctx->pc = 0x13F110u;
label_13f110:
    // 0x13f110: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f114: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13f118: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13f118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13f11c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x13f11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13f120: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x13f120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_13f124:
    // 0x13f124: 0x0  nop
    ctx->pc = 0x13f124u;
    // NOP
    // 0x13f128: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x13f128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x13f12c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x13f12cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13f130: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13F130u;
    {
        const bool branch_taken_0x13f130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f130) {
            ctx->pc = 0x13F110u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f110;
        }
    }
    ctx->pc = 0x13F138u;
    // 0x13f138: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x13f138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x13f13c: 0x8e340048  lw          $s4, 0x48($s1)
    ctx->pc = 0x13f13cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x13f140: 0x1680001c  bnez        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x13F140u;
    {
        const bool branch_taken_0x13f140 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f140) {
            ctx->pc = 0x13F1B4u;
            goto label_13f1b4;
        }
    }
    ctx->pc = 0x13F148u;
    // 0x13f148: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13f148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f14c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13F14Cu;
    SET_GPR_U32(ctx, 31, 0x13F154u);
    ctx->pc = 0x13F150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F14Cu;
            // 0x13f150: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F154u; }
        if (ctx->pc != 0x13F154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F154u; }
        if (ctx->pc != 0x13F154u) { return; }
    }
    ctx->pc = 0x13F154u;
label_13f154:
    // 0x13f154: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x13f154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13f158: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x13F158u;
    SET_GPR_U32(ctx, 31, 0x13F160u);
    ctx->pc = 0x13F15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F158u;
            // 0x13f15c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F160u; }
        if (ctx->pc != 0x13F160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F160u; }
        if (ctx->pc != 0x13F160u) { return; }
    }
    ctx->pc = 0x13F160u;
label_13f160:
    // 0x13f160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F160u;
    {
        const bool branch_taken_0x13f160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F160u;
            // 0x13f164: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f160) {
            ctx->pc = 0x13F178u;
            goto label_13f178;
        }
    }
    ctx->pc = 0x13F168u;
    // 0x13f168: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13f168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f16c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f170: 0xc049c86  jal         func_127218
    ctx->pc = 0x13F170u;
    SET_GPR_U32(ctx, 31, 0x13F178u);
    ctx->pc = 0x13F174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F170u;
            // 0x13f174: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F178u; }
        if (ctx->pc != 0x13F178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F178u; }
        if (ctx->pc != 0x13F178u) { return; }
    }
    ctx->pc = 0x13F178u;
label_13f178:
    // 0x13f178: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x13f178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x13f17c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x13f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x13f180: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x13f180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13f184: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x13f184u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x13f188: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13F188u;
    {
        const bool branch_taken_0x13f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F188u;
            // 0x13f18c: 0xae330048  sw          $s3, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f188) {
            ctx->pc = 0x13F220u;
            goto label_13f220;
        }
    }
    ctx->pc = 0x13F190u;
label_13f190:
    // 0x13f190: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x13f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13f194: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x13f194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13f198: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F198u;
    {
        const bool branch_taken_0x13f198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f198) {
            ctx->pc = 0x13F1ACu;
            goto label_13f1ac;
        }
    }
    ctx->pc = 0x13F1A0u;
    // 0x13f1a0: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x13f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x13f1a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F1A4u;
    {
        const bool branch_taken_0x13f1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f1a4) {
            ctx->pc = 0x13F1C4u;
            goto label_13f1c4;
        }
    }
    ctx->pc = 0x13F1ACu;
label_13f1ac:
    // 0x13f1ac: 0x0  nop
    ctx->pc = 0x13f1acu;
    // NOP
    // 0x13f1b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13f1b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13f1b4:
    // 0x13f1b4: 0x0  nop
    ctx->pc = 0x13f1b4u;
    // NOP
    // 0x13f1b8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x13f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13f1bc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x13F1BCu;
    {
        const bool branch_taken_0x13f1bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f1bc) {
            ctx->pc = 0x13F190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f190;
        }
    }
    ctx->pc = 0x13F1C4u;
label_13f1c4:
    // 0x13f1c4: 0x0  nop
    ctx->pc = 0x13f1c4u;
    // NOP
    // 0x13f1c8: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13F1C8u;
    {
        const bool branch_taken_0x13f1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1C8u;
            // 0x13f1cc: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1c8) {
            ctx->pc = 0x13F220u;
            goto label_13f220;
        }
    }
    ctx->pc = 0x13F1D0u;
    // 0x13f1d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13F1D4u;
    SET_GPR_U32(ctx, 31, 0x13F1DCu);
    ctx->pc = 0x13F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1D4u;
            // 0x13f1d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F1DCu; }
        if (ctx->pc != 0x13F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F1DCu; }
        if (ctx->pc != 0x13F1DCu) { return; }
    }
    ctx->pc = 0x13F1DCu;
label_13f1dc:
    // 0x13f1dc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x13f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13f1e0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x13F1E0u;
    SET_GPR_U32(ctx, 31, 0x13F1E8u);
    ctx->pc = 0x13F1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1E0u;
            // 0x13f1e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F1E8u; }
        if (ctx->pc != 0x13F1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F1E8u; }
        if (ctx->pc != 0x13F1E8u) { return; }
    }
    ctx->pc = 0x13F1E8u;
label_13f1e8:
    // 0x13f1e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F1E8u;
    {
        const bool branch_taken_0x13f1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1E8u;
            // 0x13f1ec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1e8) {
            ctx->pc = 0x13F200u;
            goto label_13f200;
        }
    }
    ctx->pc = 0x13F1F0u;
    // 0x13f1f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13f1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13f1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1f8: 0xc049c86  jal         func_127218
    ctx->pc = 0x13F1F8u;
    SET_GPR_U32(ctx, 31, 0x13F200u);
    ctx->pc = 0x13F1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F1F8u;
            // 0x13f1fc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F200u; }
        if (ctx->pc != 0x13F200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F200u; }
        if (ctx->pc != 0x13F200u) { return; }
    }
    ctx->pc = 0x13F200u;
label_13f200:
    // 0x13f200: 0xae930008  sw          $s3, 0x8($s4)
    ctx->pc = 0x13f200u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 19));
    // 0x13f204: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x13f204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x13f208: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x13f208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x13f20c: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x13f20cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13f210: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x13f210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x13f214: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13F214u;
    {
        const bool branch_taken_0x13f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F214u;
            // 0x13f218: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f214) {
            ctx->pc = 0x13F220u;
            goto label_13f220;
        }
    }
    ctx->pc = 0x13F21Cu;
    // 0x13f21c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x13f21cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f220:
    // 0x13f220: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x13f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x13f224: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F224u;
    {
        const bool branch_taken_0x13f224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f224) {
            ctx->pc = 0x13F238u;
            goto label_13f238;
        }
    }
    ctx->pc = 0x13F22Cu;
    // 0x13f22c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13F22Cu;
    {
        const bool branch_taken_0x13f22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F22Cu;
            // 0x13f230: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f22c) {
            ctx->pc = 0x13F254u;
            goto label_13f254;
        }
    }
    ctx->pc = 0x13F234u;
label_13f234:
    // 0x13f234: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13f234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_13f238:
    // 0x13f238: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x13f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13f23c: 0x0  nop
    ctx->pc = 0x13f23cu;
    // NOP
    // 0x13f240: 0x0  nop
    ctx->pc = 0x13f240u;
    // NOP
    // 0x13f244: 0x0  nop
    ctx->pc = 0x13f244u;
    // NOP
    // 0x13f248: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13F248u;
    {
        const bool branch_taken_0x13f248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f248) {
            ctx->pc = 0x13F234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f234;
        }
    }
    ctx->pc = 0x13F250u;
    // 0x13f250: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x13f250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
label_13f254:
    // 0x13f254: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F254u;
    {
        const bool branch_taken_0x13f254 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F254u;
            // 0x13f258: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f254) {
            ctx->pc = 0x13F264u;
            goto label_13f264;
        }
    }
    ctx->pc = 0x13F25Cu;
    // 0x13f25c: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x13f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x13f260: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13f260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f264:
    // 0x13f264: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13f264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13f268: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13f268u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13f26c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13f26cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13f270: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13f270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f274: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13f274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f27c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f284: 0x3e00008  jr          $ra
    ctx->pc = 0x13F284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F284u;
            // 0x13f288: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F28Cu;
}
