#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NoteOn__9sndCSeSeqFiii
// Address: 0x18bc20 - 0x18bd38
void NoteOn__9sndCSeSeqFiii_0x18bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NoteOn__9sndCSeSeqFiii_0x18bc20");
#endif

    switch (ctx->pc) {
        case 0x18bc4cu: goto label_18bc4c;
        case 0x18bc70u: goto label_18bc70;
        case 0x18bc90u: goto label_18bc90;
        case 0x18bd1cu: goto label_18bd1c;
        default: break;
    }

    ctx->pc = 0x18bc20u;

    // 0x18bc20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18bc24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18bc28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18bc2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18bc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18bc30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18bc30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18bc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18bc38: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x18bc38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18bc40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18bc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc44: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18BC44u;
    SET_GPR_U32(ctx, 31, 0x18BC4Cu);
    ctx->pc = 0x18BC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC44u;
            // 0x18bc48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC4Cu; }
        if (ctx->pc != 0x18BC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_trk__9sndCSeSeqFi_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC4Cu; }
        if (ctx->pc != 0x18BC4Cu) { return; }
    }
    ctx->pc = 0x18BC4Cu;
label_18bc4c:
    // 0x18bc4c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x18BC4Cu;
    {
        const bool branch_taken_0x18bc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bc4c) {
            ctx->pc = 0x18BD1Cu;
            goto label_18bd1c;
        }
    }
    ctx->pc = 0x18BC54u;
    // 0x18bc54: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x18BC54u;
    {
        const bool branch_taken_0x18bc54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC54u;
            // 0x18bc58: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc54) {
            ctx->pc = 0x18BC78u;
            goto label_18bc78;
        }
    }
    ctx->pc = 0x18BC5Cu;
    // 0x18bc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc64: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x18bc64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc68: 0xc062f50  jal         func_18BD40
    ctx->pc = 0x18BC68u;
    SET_GPR_U32(ctx, 31, 0x18BC70u);
    ctx->pc = 0x18BC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC68u;
            // 0x18bc6c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BD40u;
    if (runtime->hasFunction(0x18BD40u)) {
        auto targetFn = runtime->lookupFunction(0x18BD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC70u; }
        if (ctx->pc != 0x18BC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NoteOff__9sndCSeSeqFiii_0x18bd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC70u; }
        if (ctx->pc != 0x18BC70u) { return; }
    }
    ctx->pc = 0x18BC70u;
label_18bc70:
    // 0x18bc70: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18BC70u;
    {
        const bool branch_taken_0x18bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC70u;
            // 0x18bc74: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bc70) {
            ctx->pc = 0x18BD20u;
            goto label_18bd20;
        }
    }
    ctx->pc = 0x18BC78u;
label_18bc78:
    // 0x18bc78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18bc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18bc80: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18bc80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bc84: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x18bc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x18bc88: 0xc0630d0  jal         func_18C340
    ctx->pc = 0x18BC88u;
    SET_GPR_U32(ctx, 31, 0x18BC90u);
    ctx->pc = 0x18BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BC88u;
            // 0x18bc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C340u;
    if (runtime->hasFunction(0x18C340u)) {
        auto targetFn = runtime->lookupFunction(0x18C340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC90u; }
        if (ctx->pc != 0x18BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NoteOn__8sndTrackFii_0x18c340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BC90u; }
        if (ctx->pc != 0x18BC90u) { return; }
    }
    ctx->pc = 0x18BC90u;
label_18bc90:
    // 0x18bc90: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18BC90u;
    {
        const bool branch_taken_0x18bc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bc90) {
            ctx->pc = 0x18BD1Cu;
            goto label_18bd1c;
        }
    }
    ctx->pc = 0x18BC98u;
    // 0x18bc98: 0x82050000  lb          $a1, 0x0($s0)
    ctx->pc = 0x18bc98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18bc9c: 0x3c028102  lui         $v0, 0x8102
    ctx->pc = 0x18bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33026 << 16));
    // 0x18bca0: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x18bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x18bca4: 0x344c0409  ori         $t4, $v0, 0x409
    ctx->pc = 0x18bca4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1033);
    // 0x18bca8: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x18bca8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x18bcac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x18bcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bcb0: 0x82020006  lb          $v0, 0x6($s0)
    ctx->pc = 0x18bcb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x18bcb4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x18bcb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bcb8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x18bcb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18bcbc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x18bcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x18bcc0: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x18bcc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x18bcc4: 0x646818  mult        $t5, $v1, $a0
    ctx->pc = 0x18bcc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x18bcc8: 0x82060002  lb          $a2, 0x2($s0)
    ctx->pc = 0x18bcc8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x18bccc: 0x820a0003  lb          $t2, 0x3($s0)
    ctx->pc = 0x18bcccu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x18bcd0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x18bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18bcd4: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x18bcd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18bcd8: 0x18d0018  mult        $zero, $t4, $t5
    ctx->pc = 0x18bcd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18bcdc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x18bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x18bce0: 0xd4fc2  srl         $t1, $t5, 31
    ctx->pc = 0x18bce0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x18bce4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bce8: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x18bce8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18bcec: 0x1010  mfhi        $v0
    ctx->pc = 0x18bcecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bcf0: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x18bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x18bcf4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x18bcf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x18bcf8: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x18bcf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x18bcfc: 0x1890018  mult        $zero, $t4, $t1
    ctx->pc = 0x18bcfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x18bd00: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x18bd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x18bd04: 0x0  nop
    ctx->pc = 0x18bd04u;
    // NOP
    // 0x18bd08: 0x1010  mfhi        $v0
    ctx->pc = 0x18bd08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18bd0c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x18bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x18bd10: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x18bd10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x18bd14: 0xc063cd4  jal         func_18F350
    ctx->pc = 0x18BD14u;
    SET_GPR_U32(ctx, 31, 0x18BD1Cu);
    ctx->pc = 0x18BD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD14u;
            // 0x18bd18: 0x434821  addu        $t1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F350u;
    if (runtime->hasFunction(0x18F350u)) {
        auto targetFn = runtime->lookupFunction(0x18F350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD1Cu; }
        if (ctx->pc != 0x18BD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayPBPrKr__Fiiiiiiiii_0x18f350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD1Cu; }
        if (ctx->pc != 0x18BD1Cu) { return; }
    }
    ctx->pc = 0x18BD1Cu;
label_18bd1c:
    // 0x18bd1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18bd20:
    // 0x18bd20: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18bd20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bd24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18bd24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bd28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18bd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bd2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18bd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bd30: 0x3e00008  jr          $ra
    ctx->pc = 0x18BD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD30u;
            // 0x18bd34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BD38u;
}
