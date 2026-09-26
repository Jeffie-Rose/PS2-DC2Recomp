#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Exit__6CSoundFv
// Address: 0x1895e0 - 0x18970c
void Exit__6CSoundFv_0x1895e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Exit__6CSoundFv_0x1895e0");
#endif

    switch (ctx->pc) {
        case 0x189604u: goto label_189604;
        case 0x189610u: goto label_189610;
        case 0x18961cu: goto label_18961c;
        case 0x189628u: goto label_189628;
        case 0x189638u: goto label_189638;
        case 0x189674u: goto label_189674;
        case 0x189680u: goto label_189680;
        case 0x18968cu: goto label_18968c;
        case 0x1896c8u: goto label_1896c8;
        case 0x1896dcu: goto label_1896dc;
        case 0x1896e4u: goto label_1896e4;
        default: break;
    }

    ctx->pc = 0x1895e0u;

    // 0x1895e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1895e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1895e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1895e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1895e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1895e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1895ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1895ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1895f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1895f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1895f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1895f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1895f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1895f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1895fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1895fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189600: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x189600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189604:
    // 0x189604: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x189604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x189608: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189608u;
    SET_GPR_U32(ctx, 31, 0x189610u);
    ctx->pc = 0x18960Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189608u;
            // 0x18960c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189610u; }
        if (ctx->pc != 0x189610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189610u; }
        if (ctx->pc != 0x189610u) { return; }
    }
    ctx->pc = 0x189610u;
label_189610:
    // 0x189610: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x189610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189614: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189614u;
    {
        const bool branch_taken_0x189614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189614u;
            // 0x189618: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189614) {
            ctx->pc = 0x189644u;
            goto label_189644;
        }
    }
    ctx->pc = 0x18961Cu;
label_18961c:
    // 0x18961c: 0x0  nop
    ctx->pc = 0x18961cu;
    // NOP
    // 0x189620: 0xc045c0e  jal         func_117038
    ctx->pc = 0x189620u;
    SET_GPR_U32(ctx, 31, 0x189628u);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189628u; }
        if (ctx->pc != 0x189628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189628u; }
        if (ctx->pc != 0x189628u) { return; }
    }
    ctx->pc = 0x189628u;
label_189628:
    // 0x189628: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x189628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x18962c: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x18962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x189630: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x189630u;
    SET_GPR_U32(ctx, 31, 0x189638u);
    ctx->pc = 0x189634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189630u;
            // 0x189634: 0x24540050  addiu       $s4, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189638u; }
        if (ctx->pc != 0x189638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189638u; }
        if (ctx->pc != 0x189638u) { return; }
    }
    ctx->pc = 0x189638u;
label_189638:
    // 0x189638: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x189638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x18963c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x18963cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x189640: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x189640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_189644:
    // 0x189644: 0x0  nop
    ctx->pc = 0x189644u;
    // NOP
    // 0x189648: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x189648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18964c: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x18964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
    // 0x189650: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x189650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x189654: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x189654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x189658: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x189658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18965c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18965Cu;
    {
        const bool branch_taken_0x18965c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18965Cu;
            // 0x189660: 0x26830090  addiu       $v1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18965c) {
            ctx->pc = 0x18961Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18961c;
        }
    }
    ctx->pc = 0x189664u;
    // 0x189664: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x189664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x189668: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x189668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18966c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18966Cu;
    {
        const bool branch_taken_0x18966c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18966Cu;
            // 0x189670: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18966c) {
            ctx->pc = 0x189694u;
            goto label_189694;
        }
    }
    ctx->pc = 0x189674u;
label_189674:
    // 0x189674: 0x0  nop
    ctx->pc = 0x189674u;
    // NOP
    // 0x189678: 0xc045c0e  jal         func_117038
    ctx->pc = 0x189678u;
    SET_GPR_U32(ctx, 31, 0x189680u);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189680u; }
        if (ctx->pc != 0x189680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189680u; }
        if (ctx->pc != 0x189680u) { return; }
    }
    ctx->pc = 0x189680u;
label_189680:
    // 0x189680: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x189680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x189684: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x189684u;
    SET_GPR_U32(ctx, 31, 0x18968Cu);
    ctx->pc = 0x189688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189684u;
            // 0x189688: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18968Cu; }
        if (ctx->pc != 0x18968Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18968Cu; }
        if (ctx->pc != 0x18968Cu) { return; }
    }
    ctx->pc = 0x18968Cu;
label_18968c:
    // 0x18968c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18968cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x189690: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x189690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_189694:
    // 0x189694: 0x0  nop
    ctx->pc = 0x189694u;
    // NOP
    // 0x189698: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x189698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x18969c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18969cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1896a0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1896A0u;
    {
        const bool branch_taken_0x1896a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1896A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1896A0u;
            // 0x1896a4: 0x268300f4  addiu       $v1, $s4, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896a0) {
            ctx->pc = 0x189674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_189674;
        }
    }
    ctx->pc = 0x1896A8u;
    // 0x1896a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1896a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1896ac: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1896acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1896b0: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1896b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1896b4: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1896B4u;
    {
        const bool branch_taken_0x1896b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1896B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1896B4u;
            // 0x1896b8: 0x26730124  addiu       $s3, $s3, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896b4) {
            ctx->pc = 0x189604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_189604;
        }
    }
    ctx->pc = 0x1896BCu;
    // 0x1896bc: 0x340480f0  ori         $a0, $zero, 0x80F0
    ctx->pc = 0x1896bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1896c0: 0xc062c94  jal         func_18B250
    ctx->pc = 0x1896C0u;
    SET_GPR_U32(ctx, 31, 0x1896C8u);
    ctx->pc = 0x1896C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1896C0u;
            // 0x1896c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1896C8u; }
        if (ctx->pc != 0x1896C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1896C8u; }
        if (ctx->pc != 0x1896C8u) { return; }
    }
    ctx->pc = 0x1896C8u;
label_1896c8:
    // 0x1896c8: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x1896c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x1896cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1896CCu;
    {
        const bool branch_taken_0x1896cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1896D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1896CCu;
            // 0x1896d0: 0xaf808a70  sw          $zero, -0x7590($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1896cc) {
            ctx->pc = 0x1896E8u;
            goto label_1896e8;
        }
    }
    ctx->pc = 0x1896D4u;
    // 0x1896d4: 0xc045c0e  jal         func_117038
    ctx->pc = 0x1896D4u;
    SET_GPR_U32(ctx, 31, 0x1896DCu);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1896DCu; }
        if (ctx->pc != 0x1896DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1896DCu; }
        if (ctx->pc != 0x1896DCu) { return; }
    }
    ctx->pc = 0x1896DCu;
label_1896dc:
    // 0x1896dc: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x1896DCu;
    SET_GPR_U32(ctx, 31, 0x1896E4u);
    ctx->pc = 0x1896E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1896DCu;
            // 0x1896e0: 0x8f848a80  lw          $a0, -0x7580($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1896E4u; }
        if (ctx->pc != 0x1896E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1896E4u; }
        if (ctx->pc != 0x1896E4u) { return; }
    }
    ctx->pc = 0x1896E4u;
label_1896e4:
    // 0x1896e4: 0xaf808a80  sw          $zero, -0x7580($gp)
    ctx->pc = 0x1896e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937216), GPR_U32(ctx, 0));
label_1896e8:
    // 0x1896e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1896e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1896ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1896ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1896f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1896f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1896f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1896f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1896f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1896f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1896fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1896fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189704: 0x3e00008  jr          $ra
    ctx->pc = 0x189704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189704u;
            // 0x189708: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18970Cu;
}
