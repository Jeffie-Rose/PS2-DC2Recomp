#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TRAIN_NPC_POS__FP12RS_STACKDATAi
// Address: 0x266640 - 0x266728
void ps2__GET_TRAIN_NPC_POS__FP12RS_STACKDATAi_0x266640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TRAIN_NPC_POS__FP12RS_STACKDATAi_0x266640");
#endif

    switch (ctx->pc) {
        case 0x266660u: goto label_266660;
        case 0x26668cu: goto label_26668c;
        case 0x2666b8u: goto label_2666b8;
        case 0x2666dcu: goto label_2666dc;
        case 0x2666f4u: goto label_2666f4;
        case 0x266708u: goto label_266708;
        case 0x266714u: goto label_266714;
        default: break;
    }

    ctx->pc = 0x266640u;

    // 0x266640: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x266640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x266644: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x266644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x266648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26664c: 0x24c61bf0  addiu       $a2, $a2, 0x1BF0
    ctx->pc = 0x26664cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7152));
    // 0x266650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266654: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x266654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x266658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26665c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_266660:
    // 0x266660: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x266660u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x266664: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x266664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x266668: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x266668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x26666c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x26666cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x266670: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x266670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x266674: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x266674u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x266678: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x266678u;
    {
        const bool branch_taken_0x266678 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x26667Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266678u;
            // 0x26667c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266678) {
            ctx->pc = 0x266660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266660;
        }
    }
    ctx->pc = 0x266680u;
    // 0x266680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266684: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266684u;
    SET_GPR_U32(ctx, 31, 0x26668Cu);
    ctx->pc = 0x266688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266684u;
            // 0x266688: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26668Cu; }
        if (ctx->pc != 0x26668Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26668Cu; }
        if (ctx->pc != 0x26668Cu) { return; }
    }
    ctx->pc = 0x26668Cu;
label_26668c:
    // 0x26668c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26668Cu;
    {
        const bool branch_taken_0x26668c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x266690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26668Cu;
            // 0x266690: 0x2843000c  slti        $v1, $v0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26668c) {
            ctx->pc = 0x26669Cu;
            goto label_26669c;
        }
    }
    ctx->pc = 0x266694u;
    // 0x266694: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x266694u;
    {
        const bool branch_taken_0x266694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x266698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266694u;
            // 0x266698: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266694) {
            ctx->pc = 0x2666A4u;
            goto label_2666a4;
        }
    }
    ctx->pc = 0x26669Cu;
label_26669c:
    // 0x26669c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26669Cu;
    {
        const bool branch_taken_0x26669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26669Cu;
            // 0x2666a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26669c) {
            ctx->pc = 0x266718u;
            goto label_266718;
        }
    }
    ctx->pc = 0x2666A4u;
label_2666a4:
    // 0x2666a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2666a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2666a8: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x2666a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2666ac: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x2666acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2666b0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2666B0u;
    SET_GPR_U32(ctx, 31, 0x2666B8u);
    ctx->pc = 0x2666B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2666B0u;
            // 0x2666b4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2666B8u; }
        if (ctx->pc != 0x2666B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2666B8u; }
        if (ctx->pc != 0x2666B8u) { return; }
    }
    ctx->pc = 0x2666B8u;
label_2666b8:
    // 0x2666b8: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x2666b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2666bc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2666bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2666c0: 0x8c632e60  lw          $v1, 0x2E60($v1)
    ctx->pc = 0x2666c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11872)));
    // 0x2666c4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2666C4u;
    {
        const bool branch_taken_0x2666c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2666C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2666C4u;
            // 0x2666c8: 0xdd1021  addu        $v0, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666c4) {
            ctx->pc = 0x2666E4u;
            goto label_2666e4;
        }
    }
    ctx->pc = 0x2666CCu;
    // 0x2666cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2666ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2666d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2666d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2666d4: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2666D4u;
    SET_GPR_U32(ctx, 31, 0x2666DCu);
    ctx->pc = 0x2666D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2666D4u;
            // 0x2666d8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2666DCu; }
        if (ctx->pc != 0x2666DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2666DCu; }
        if (ctx->pc != 0x2666DCu) { return; }
    }
    ctx->pc = 0x2666DCu;
label_2666dc:
    // 0x2666dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2666DCu;
    {
        const bool branch_taken_0x2666dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2666E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2666DCu;
            // 0x2666e0: 0xdd1021  addu        $v0, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2666dc) {
            ctx->pc = 0x2666F8u;
            goto label_2666f8;
        }
    }
    ctx->pc = 0x2666E4u;
label_2666e4:
    // 0x2666e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2666e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2666e8: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x2666e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2666ec: 0xc097e54  jal         func_25F950
    ctx->pc = 0x2666ECu;
    SET_GPR_U32(ctx, 31, 0x2666F4u);
    ctx->pc = 0x2666F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2666ECu;
            // 0x2666f0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2666F4u; }
        if (ctx->pc != 0x2666F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2666F4u; }
        if (ctx->pc != 0x2666F4u) { return; }
    }
    ctx->pc = 0x2666F4u;
label_2666f4:
    // 0x2666f4: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x2666f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_2666f8:
    // 0x2666f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2666f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2666fc: 0xc44c0028  lwc1        $f12, 0x28($v0)
    ctx->pc = 0x2666fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x266700: 0xc097e54  jal         func_25F950
    ctx->pc = 0x266700u;
    SET_GPR_U32(ctx, 31, 0x266708u);
    ctx->pc = 0x266704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266700u;
            // 0x266704: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266708u; }
        if (ctx->pc != 0x266708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266708u; }
        if (ctx->pc != 0x266708u) { return; }
    }
    ctx->pc = 0x266708u;
label_266708:
    // 0x266708: 0xc44c002c  lwc1        $f12, 0x2C($v0)
    ctx->pc = 0x266708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26670c: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26670Cu;
    SET_GPR_U32(ctx, 31, 0x266714u);
    ctx->pc = 0x266710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26670Cu;
            // 0x266710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266714u; }
        if (ctx->pc != 0x266714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266714u; }
        if (ctx->pc != 0x266714u) { return; }
    }
    ctx->pc = 0x266714u;
label_266714:
    // 0x266714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266718:
    // 0x266718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26671c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26671cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266720: 0x3e00008  jr          $ra
    ctx->pc = 0x266720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266720u;
            // 0x266724: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266728u;
}
