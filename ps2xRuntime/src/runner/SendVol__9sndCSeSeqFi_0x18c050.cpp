#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SendVol__9sndCSeSeqFi
// Address: 0x18c050 - 0x18c140
void SendVol__9sndCSeSeqFi_0x18c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SendVol__9sndCSeSeqFi_0x18c050");
#endif

    switch (ctx->pc) {
        case 0x18c078u: goto label_18c078;
        case 0x18c0e8u: goto label_18c0e8;
        case 0x18c104u: goto label_18c104;
        default: break;
    }

    ctx->pc = 0x18c050u;

    // 0x18c050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18c050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18c054: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18c054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18c058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18c058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18c05c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18c060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c064: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18c064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c070: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18C070u;
    SET_GPR_U32(ctx, 31, 0x18C078u);
    ctx->pc = 0x18C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C070u;
            // 0x18c074: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C078u; }
        if (ctx->pc != 0x18C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_trk__9sndCSeSeqFi_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C078u; }
        if (ctx->pc != 0x18C078u) { return; }
    }
    ctx->pc = 0x18C078u;
label_18c078:
    // 0x18c078: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x18C078u;
    {
        const bool branch_taken_0x18c078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C078u;
            // 0x18c07c: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c078) {
            ctx->pc = 0x18C120u;
            goto label_18c120;
        }
    }
    ctx->pc = 0x18C080u;
    // 0x18c080: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x18c080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x18c084: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x18c084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x18c088: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18c088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c08c: 0x80e50030  lb          $a1, 0x30($a3)
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x18c090: 0x3c038102  lui         $v1, 0x8102
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33026 << 16));
    // 0x18c094: 0x34660409  ori         $a2, $v1, 0x409
    ctx->pc = 0x18c094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1033);
    // 0x18c098: 0x24f00030  addiu       $s0, $a3, 0x30
    ctx->pc = 0x18c098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x18c09c: 0x80e30031  lb          $v1, 0x31($a3)
    ctx->pc = 0x18c09cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 49)));
    // 0x18c0a0: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x18c0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x18c0a4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x18c0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18c0a8: 0x642818  mult        $a1, $v1, $a0
    ctx->pc = 0x18c0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x18c0ac: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x18c0acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18c0b0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x18c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x18c0b4: 0x0  nop
    ctx->pc = 0x18c0b4u;
    // NOP
    // 0x18c0b8: 0x1810  mfhi        $v1
    ctx->pc = 0x18c0b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18c0bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18c0c0: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x18c0c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x18c0c4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x18c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18c0c8: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x18c0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18c0cc: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x18c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x18c0d0: 0x0  nop
    ctx->pc = 0x18c0d0u;
    // NOP
    // 0x18c0d4: 0x1810  mfhi        $v1
    ctx->pc = 0x18c0d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18c0d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18c0dc: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x18c0dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x18c0e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18C0E0u;
    {
        const bool branch_taken_0x18c0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0E0u;
            // 0x18c0e4: 0x64a021  addu        $s4, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0e0) {
            ctx->pc = 0x18C10Cu;
            goto label_18c10c;
        }
    }
    ctx->pc = 0x18C0E8u;
label_18c0e8:
    // 0x18c0e8: 0x82260001  lb          $a2, 0x1($s1)
    ctx->pc = 0x18c0e8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x18c0ec: 0x82270002  lb          $a3, 0x2($s1)
    ctx->pc = 0x18c0ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x18c0f0: 0x82090006  lb          $t1, 0x6($s0)
    ctx->pc = 0x18c0f0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x18c0f4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c0f8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x18c0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18c0fc: 0xc063d28  jal         func_18F4A0
    ctx->pc = 0x18C0FCu;
    SET_GPR_U32(ctx, 31, 0x18C104u);
    ctx->pc = 0x18C100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C0FCu;
            // 0x18c100: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F4A0u;
    if (runtime->hasFunction(0x18F4A0u)) {
        auto targetFn = runtime->lookupFunction(0x18F4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C104u; }
        if (ctx->pc != 0x18C104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolPBPrKr__Fiiiiii_0x18f4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C104u; }
        if (ctx->pc != 0x18C104u) { return; }
    }
    ctx->pc = 0x18C104u;
label_18c104:
    // 0x18c104: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18c104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18c108: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18c108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_18c10c:
    // 0x18c10c: 0x0  nop
    ctx->pc = 0x18c10cu;
    // NOP
    // 0x18c110: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x18c110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18c114: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x18c114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c118: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x18C118u;
    {
        const bool branch_taken_0x18c118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c118) {
            ctx->pc = 0x18C0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c0e8;
        }
    }
    ctx->pc = 0x18C120u;
label_18c120:
    // 0x18c120: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18c120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c124: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18c124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c128: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c12c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c12cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c138: 0x3e00008  jr          $ra
    ctx->pc = 0x18C138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C138u;
            // 0x18c13c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C140u;
}
