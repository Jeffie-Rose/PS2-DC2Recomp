#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsDrawS
// Address: 0x105230 - 0x1053dc
void sceDevConsDrawS_0x105230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsDrawS_0x105230");
#endif

    switch (ctx->pc) {
        case 0x105270u: goto label_105270;
        case 0x105294u: goto label_105294;
        case 0x1052a4u: goto label_1052a4;
        case 0x1052c0u: goto label_1052c0;
        case 0x1052e0u: goto label_1052e0;
        case 0x105304u: goto label_105304;
        case 0x105330u: goto label_105330;
        case 0x105344u: goto label_105344;
        case 0x10534cu: goto label_10534c;
        case 0x105358u: goto label_105358;
        case 0x105374u: goto label_105374;
        case 0x1053acu: goto label_1053ac;
        default: break;
    }

    ctx->pc = 0x105230u;

    // 0x105230: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x105230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x105234: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x105234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x105238: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x105238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x10523c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x10523cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105240: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x105240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x105244: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x105244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x105248: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x105248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x10524c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10524cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105250: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x105250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x105254: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x105254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x105258: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x105258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x10525c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x10525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x105260: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x105260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x105264: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x105264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x105268: 0xc0410b0  jal         func_1042C0
    ctx->pc = 0x105268u;
    SET_GPR_U32(ctx, 31, 0x105270u);
    ctx->pc = 0x10526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105268u;
            // 0x10526c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042C0u;
    if (runtime->hasFunction(0x1042C0u)) {
        auto targetFn = runtime->lookupFunction(0x1042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105270u; }
        if (ctx->pc != 0x105270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105270u; }
        if (ctx->pc != 0x105270u) { return; }
    }
    ctx->pc = 0x105270u;
label_105270:
    // 0x105270: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x105270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x105274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105278: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x105278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10527c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x10527cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x105280: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x105280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x105284: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x105284u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105288: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x105288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x10528c: 0xc04198c  jal         func_106630
    ctx->pc = 0x10528Cu;
    SET_GPR_U32(ctx, 31, 0x105294u);
    ctx->pc = 0x105290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10528Cu;
            // 0x105290: 0x8c550008  lw          $s5, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106630u;
    if (runtime->hasFunction(0x106630u)) {
        auto targetFn = runtime->lookupFunction(0x106630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105294u; }
        if (ctx->pc != 0x105294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x106630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105294u; }
        if (ctx->pc != 0x105294u) { return; }
    }
    ctx->pc = 0x105294u;
label_105294:
    // 0x105294: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x105294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x105298: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x105298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10529c: 0xc04198c  jal         func_106630
    ctx->pc = 0x10529Cu;
    SET_GPR_U32(ctx, 31, 0x1052A4u);
    ctx->pc = 0x1052A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10529Cu;
            // 0x1052a0: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106630u;
    if (runtime->hasFunction(0x106630u)) {
        auto targetFn = runtime->lookupFunction(0x106630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1052A4u; }
        if (ctx->pc != 0x1052A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x106630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1052A4u; }
        if (ctx->pc != 0x1052A4u) { return; }
    }
    ctx->pc = 0x1052A4u;
label_1052a4:
    // 0x1052a4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1052a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1052a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1052a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1052ac: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1052acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1052b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1052b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1052b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1052b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1052b8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1052B8u;
    {
        const bool branch_taken_0x1052b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1052B8u;
            // 0x1052bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052b8) {
            ctx->pc = 0x1053A4u;
            goto label_1053a4;
        }
    }
    ctx->pc = 0x1052C0u;
label_1052c0:
    // 0x1052c0: 0x12c00032  beqz        $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x1052C0u;
    {
        const bool branch_taken_0x1052c0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1052C0u;
            // 0x1052c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052c0) {
            ctx->pc = 0x10538Cu;
            goto label_10538c;
        }
    }
    ctx->pc = 0x1052C8u;
    // 0x1052c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1052c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1052cc: 0x27be0004  addiu       $fp, $sp, 0x4
    ctx->pc = 0x1052ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1052d0: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x1052d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1052d4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1052d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1052d8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1052d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1052dc: 0x0  nop
    ctx->pc = 0x1052dcu;
    // NOP
label_1052e0:
    // 0x1052e0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1052e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1052e4: 0x2d38023  subu        $s0, $s6, $s3
    ctx->pc = 0x1052e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1052e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1052e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1052ec: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1052ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1052f0: 0x3b28821  addu        $s1, $sp, $s2
    ctx->pc = 0x1052f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1052f4: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1052f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1052f8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1052f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    // 0x1052fc: 0xc041990  jal         func_106640
    ctx->pc = 0x1052FCu;
    SET_GPR_U32(ctx, 31, 0x105304u);
    ctx->pc = 0x105300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1052FCu;
            // 0x105300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106640u;
    if (runtime->hasFunction(0x106640u)) {
        auto targetFn = runtime->lookupFunction(0x106640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105304u; }
        if (ctx->pc != 0x105304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReset_0x106640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105304u; }
        if (ctx->pc != 0x105304u) { return; }
    }
    ctx->pc = 0x105304u;
label_105304:
    // 0x105304: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x105304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x105308: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x105308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10530c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10530cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105310: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x105310u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105314: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x105314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x105318: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x105318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10531c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x10531cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x105320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105324: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x105324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105328: 0xc0417e8  jal         func_105FA0
    ctx->pc = 0x105328u;
    SET_GPR_U32(ctx, 31, 0x105330u);
    ctx->pc = 0x10532Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105328u;
            // 0x10532c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105FA0u;
    if (runtime->hasFunction(0x105FA0u)) {
        auto targetFn = runtime->lookupFunction(0x105FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105330u; }
        if (ctx->pc != 0x105330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevFontRefStrN_0x105fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105330u; }
        if (ctx->pc != 0x105330u) { return; }
    }
    ctx->pc = 0x105330u;
label_105330:
    // 0x105330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x105334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10533c: 0xc0419ee  jal         func_1067B8
    ctx->pc = 0x10533Cu;
    SET_GPR_U32(ctx, 31, 0x105344u);
    ctx->pc = 0x105340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10533Cu;
            // 0x105340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1067B8u;
    if (runtime->hasFunction(0x1067B8u)) {
        auto targetFn = runtime->lookupFunction(0x1067B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105344u; }
        if (ctx->pc != 0x105344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x1067b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105344u; }
        if (ctx->pc != 0x105344u) { return; }
    }
    ctx->pc = 0x105344u;
label_105344:
    // 0x105344: 0xc041994  jal         func_106650
    ctx->pc = 0x105344u;
    SET_GPR_U32(ctx, 31, 0x10534Cu);
    ctx->pc = 0x105348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105344u;
            // 0x105348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106650u;
    if (runtime->hasFunction(0x106650u)) {
        auto targetFn = runtime->lookupFunction(0x106650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10534Cu; }
        if (ctx->pc != 0x10534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkTerminate_0x106650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10534Cu; }
        if (ctx->pc != 0x10534Cu) { return; }
    }
    ctx->pc = 0x10534Cu;
label_10534c:
    // 0x10534c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105350: 0xc040ce6  jal         func_103398
    ctx->pc = 0x105350u;
    SET_GPR_U32(ctx, 31, 0x105358u);
    ctx->pc = 0x105354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105350u;
            // 0x105354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105358u; }
        if (ctx->pc != 0x105358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105358u; }
        if (ctx->pc != 0x105358u) { return; }
    }
    ctx->pc = 0x105358u;
label_105358:
    // 0x105358: 0x3d29021  addu        $s2, $fp, $s2
    ctx->pc = 0x105358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x10535c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x10535cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x105360: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x105360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105364: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x105364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x105368: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x105368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x10536c: 0xc041184  jal         func_104610
    ctx->pc = 0x10536Cu;
    SET_GPR_U32(ctx, 31, 0x105374u);
    ctx->pc = 0x105370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10536Cu;
            // 0x105370: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105374u; }
        if (ctx->pc != 0x105374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105374u; }
        if (ctx->pc != 0x105374u) { return; }
    }
    ctx->pc = 0x105374u;
label_105374:
    // 0x105374: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x105374u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x105378: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x105378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x10537c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x10537Cu;
    {
        const bool branch_taken_0x10537c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10537Cu;
            // 0x105380: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10537c) {
            ctx->pc = 0x1052E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1052e0;
        }
    }
    ctx->pc = 0x105384u;
    // 0x105384: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x105384u;
    {
        const bool branch_taken_0x105384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105384u;
            // 0x105388: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105384) {
            ctx->pc = 0x105394u;
            goto label_105394;
        }
    }
    ctx->pc = 0x10538Cu;
label_10538c:
    // 0x10538c: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x10538cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x105390: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x105390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_105394:
    // 0x105394: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x105394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105398: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x105398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10539c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x10539Cu;
    {
        const bool branch_taken_0x10539c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1053A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10539Cu;
            // 0x1053a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10539c) {
            ctx->pc = 0x1052C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1052c0;
        }
    }
    ctx->pc = 0x1053A4u;
label_1053a4:
    // 0x1053a4: 0xc040ce6  jal         func_103398
    ctx->pc = 0x1053A4u;
    SET_GPR_U32(ctx, 31, 0x1053ACu);
    ctx->pc = 0x1053A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1053A4u;
            // 0x1053a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053ACu; }
        if (ctx->pc != 0x1053ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1053ACu; }
        if (ctx->pc != 0x1053ACu) { return; }
    }
    ctx->pc = 0x1053ACu;
label_1053ac:
    // 0x1053ac: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1053acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1053b0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1053b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1053b4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1053b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1053b8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1053b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1053bc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1053bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1053c0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1053c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1053c4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1053c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1053c8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1053c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1053cc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1053ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1053d0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1053d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1053d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1053D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1053D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1053D4u;
            // 0x1053d8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1053DCu;
}
