#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawGaiji__5CFontFP11mgCDrawPrimiii
// Address: 0x2d55a0 - 0x2d5704
void DrawGaiji__5CFontFP11mgCDrawPrimiii_0x2d55a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawGaiji__5CFontFP11mgCDrawPrimiii_0x2d55a0");
#endif

    switch (ctx->pc) {
        case 0x2d5660u: goto label_2d5660;
        case 0x2d568cu: goto label_2d568c;
        case 0x2d56c0u: goto label_2d56c0;
        case 0x2d56d4u: goto label_2d56d4;
        default: break;
    }

    ctx->pc = 0x2d55a0u;

    // 0x2d55a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2d55a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2d55a4: 0x24c28000  addiu       $v0, $a2, -0x8000
    ctx->pc = 0x2d55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934528));
    // 0x2d55a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d55a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d55ac: 0x24438300  addiu       $v1, $v0, -0x7D00
    ctx->pc = 0x2d55acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935296));
    // 0x2d55b0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d55b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d55b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2d55b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2d55b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d55b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d55bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d55c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d55c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d55c4: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2d55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x2d55c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d55c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d55cc: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x2d55ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d55d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d55d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d55d4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d55d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d55d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d55dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d55dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d55e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d55e4: 0x246365c4  addiu       $v1, $v1, 0x65C4
    ctx->pc = 0x2d55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26052));
    // 0x2d55e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d55e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d55ec: 0x244265c8  addiu       $v0, $v0, 0x65C8
    ctx->pc = 0x2d55ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26056));
    // 0x2d55f0: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2d55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d55f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d55f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d55f8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2d55f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d55fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d55fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5600: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d5600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5604: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d5604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5608: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d5608u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d560c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2d560cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2d5610: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d5610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d5614: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d5614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d5618: 0x8c7e0000  lw          $fp, 0x0($v1)
    ctx->pc = 0x2d5618u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d561c: 0x244265cc  addiu       $v0, $v0, 0x65CC
    ctx->pc = 0x2d561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26060));
    // 0x2d5620: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d5620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d5624: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d5624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5628: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d5628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d562c: 0x244265d0  addiu       $v0, $v0, 0x65D0
    ctx->pc = 0x2d562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26064));
    // 0x2d5630: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2d5630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d5634: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d5634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d5638: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2d5638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d563c: 0x244265d4  addiu       $v0, $v0, 0x65D4
    ctx->pc = 0x2d563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26068));
    // 0x2d5640: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d5640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d5644: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x2d5644u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5648: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2d5648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2d564c: 0x244265d8  addiu       $v0, $v0, 0x65D8
    ctx->pc = 0x2d564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26072));
    // 0x2d5650: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d5650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d5654: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2d5654u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5658: 0xc0b551c  jal         func_2D5470
    ctx->pc = 0x2D5658u;
    SET_GPR_U32(ctx, 31, 0x2D5660u);
    ctx->pc = 0x2D565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5658u;
            // 0x2d565c: 0x248409c8  addiu       $a0, $a0, 0x9C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5470u;
    if (runtime->hasFunction(0x2D5470u)) {
        auto targetFn = runtime->lookupFunction(0x2D5470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5660u; }
        if (ctx->pc != 0x2D5660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetTex__FPcP11mgCDrawPrim_0x2d5470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5660u; }
        if (ctx->pc != 0x2D5660u) { return; }
    }
    ctx->pc = 0x2D5660u;
label_2d5660:
    // 0x2d5660: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2d5660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d5664: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2d5664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d5668: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d5668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d566c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d5670: 0xa3a200db  sb          $v0, 0xDB($sp)
    ctx->pc = 0x2d5670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 219), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d5674: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d5674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5678: 0xa3a200da  sb          $v0, 0xDA($sp)
    ctx->pc = 0x2d5678u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 218), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d567c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d567cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5680: 0xa3a200d9  sb          $v0, 0xD9($sp)
    ctx->pc = 0x2d5680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 217), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d5684: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D5684u;
    SET_GPR_U32(ctx, 31, 0x2D568Cu);
    ctx->pc = 0x2D5688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5684u;
            // 0x2d5688: 0xa3a200d8  sb          $v0, 0xD8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 216), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D568Cu; }
        if (ctx->pc != 0x2D568Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D568Cu; }
        if (ctx->pc != 0x2D568Cu) { return; }
    }
    ctx->pc = 0x2D568Cu;
label_2d568c:
    // 0x2d568c: 0x8ea200a0  lw          $v0, 0xA0($s5)
    ctx->pc = 0x2d568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x2d5690: 0x2772821  addu        $a1, $s3, $s7
    ctx->pc = 0x2d5690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x2d5694: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2d5694u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d5698: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5698u;
    {
        const bool branch_taken_0x2d5698 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5698u;
            // 0x2d569c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5698) {
            ctx->pc = 0x2D56A8u;
            goto label_2d56a8;
        }
    }
    ctx->pc = 0x2D56A0u;
    // 0x2d56a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d56a4: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2d56a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2d56a8:
    // 0x2d56a8: 0x2561021  addu        $v0, $s2, $s6
    ctx->pc = 0x2d56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x2d56ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d56acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56b0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2d56b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d56b4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d56b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D56B8u;
    SET_GPR_U32(ctx, 31, 0x2D56C0u);
    ctx->pc = 0x2D56BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D56B8u;
            // 0x2d56bc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D56C0u; }
        if (ctx->pc != 0x2D56C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D56C0u; }
        if (ctx->pc != 0x2D56C0u) { return; }
    }
    ctx->pc = 0x2D56C0u;
label_2d56c0:
    // 0x2d56c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d56c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56c4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2d56c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d56c8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2d56c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d56cc: 0xc054590  jal         func_151640
    ctx->pc = 0x2D56CCu;
    SET_GPR_U32(ctx, 31, 0x2D56D4u);
    ctx->pc = 0x2D56D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D56CCu;
            // 0x2d56d0: 0x27a700d8  addiu       $a3, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (runtime->hasFunction(0x151640u)) {
        auto targetFn = runtime->lookupFunction(0x151640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D56D4u; }
        if (ctx->pc != 0x2D56D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSpriteEasy__FP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D56D4u; }
        if (ctx->pc != 0x2D56D4u) { return; }
    }
    ctx->pc = 0x2D56D4u;
label_2d56d4:
    // 0x2d56d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d56d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d56d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d56d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d56dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d56dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d56e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d56e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d56e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d56e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d56e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d56e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d56ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d56ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d56f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d56f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d56f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d56f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d56f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d56f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d56fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D56FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D56FCu;
            // 0x2d5700: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5704u;
}
