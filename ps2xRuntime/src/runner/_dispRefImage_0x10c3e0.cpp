#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dispRefImage
// Address: 0x10c3e0 - 0x10c4f0
void _dispRefImage_0x10c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispRefImage_0x10c3e0");
#endif

    switch (ctx->pc) {
        case 0x10c40cu: goto label_10c40c;
        case 0x10c48cu: goto label_10c48c;
        case 0x10c4b4u: goto label_10c4b4;
        case 0x10c4c4u: goto label_10c4c4;
        default: break;
    }

    ctx->pc = 0x10c3e0u;

    // 0x10c3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10c3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10c3e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10c3e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c3ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10c3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c3f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3f8: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x10c3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x10c3fc: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x10c3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x10c400: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x10c400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x10c404: 0xc043094  jal         func_10C250
    ctx->pc = 0x10C404u;
    SET_GPR_U32(ctx, 31, 0x10C40Cu);
    ctx->pc = 0x10C408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C404u;
            // 0x10c408: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C250u;
    if (runtime->hasFunction(0x10C250u)) {
        auto targetFn = runtime->lookupFunction(0x10C250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C40Cu; }
        if (ctx->pc != 0x10C40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x10c250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C40Cu; }
        if (ctx->pc != 0x10C40Cu) { return; }
    }
    ctx->pc = 0x10C40Cu;
label_10c40c:
    // 0x10c40c: 0x8e070858  lw          $a3, 0x858($s0)
    ctx->pc = 0x10c40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x10c410: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x10c410u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x10c414: 0x24c604b8  addiu       $a2, $a2, 0x4B8
    ctx->pc = 0x10c414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1208));
    // 0x10c418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c41c: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x10c41cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x10c420: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c424: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x10c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x10c428: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x10c428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x10c42c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10c42cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10c430: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x10c430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x10c434: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x10c434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x10c438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10c438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10c43c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x10c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x10c440: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10c440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x10c444: 0x9c460000  lwu         $a2, 0x0($v0)
    ctx->pc = 0x10c444u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c448: 0xae0300cc  sw          $v1, 0xCC($s0)
    ctx->pc = 0x10c448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
    // 0x10c44c: 0xfe060088  sd          $a2, 0x88($s0)
    ctx->pc = 0x10c44cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 6));
    // 0x10c450: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x10c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x10c454: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x10c454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x10c458: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x10c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x10c45c: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x10c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x10c460: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x10c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x10c464: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x10c464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    // 0x10c468: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x10c468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x10c46c: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x10c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x10c470: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x10c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x10c474: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x10c474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x10c478: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x10c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x10c47c: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x10c47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x10c480: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x10c480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x10c484: 0xc042fc6  jal         func_10BF18
    ctx->pc = 0x10C484u;
    SET_GPR_U32(ctx, 31, 0x10C48Cu);
    ctx->pc = 0x10C488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C484u;
            // 0x10c488: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF18u;
    if (runtime->hasFunction(0x10BF18u)) {
        auto targetFn = runtime->lookupFunction(0x10BF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C48Cu; }
        if (ctx->pc != 0x10C48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x10bf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C48Cu; }
        if (ctx->pc != 0x10C48Cu) { return; }
    }
    ctx->pc = 0x10C48Cu;
label_10c48c:
    // 0x10c48c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10C48Cu;
    {
        const bool branch_taken_0x10c48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C48Cu;
            // 0x10c490: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c48c) {
            ctx->pc = 0x10C4DCu;
            goto label_10c4dc;
        }
    }
    ctx->pc = 0x10C494u;
    // 0x10c494: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x10c494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x10c498: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C498u;
    {
        const bool branch_taken_0x10c498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C498u;
            // 0x10c49c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c498) {
            ctx->pc = 0x10C4E0u;
            goto label_10c4e0;
        }
    }
    ctx->pc = 0x10C4A0u;
    // 0x10c4a0: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x10c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x10c4a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C4A4u;
    {
        const bool branch_taken_0x10c4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4A4u;
            // 0x10c4a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4a4) {
            ctx->pc = 0x10C4BCu;
            goto label_10c4bc;
        }
    }
    ctx->pc = 0x10C4ACu;
    // 0x10c4ac: 0xc04336e  jal         func_10CDB8
    ctx->pc = 0x10C4ACu;
    SET_GPR_U32(ctx, 31, 0x10C4B4u);
    ctx->pc = 0x10C4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4ACu;
            // 0x10c4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CDB8u;
    if (runtime->hasFunction(0x10CDB8u)) {
        auto targetFn = runtime->lookupFunction(0x10CDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C4B4u; }
        if (ctx->pc != 0x10C4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x10cdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C4B4u; }
        if (ctx->pc != 0x10C4B4u) { return; }
    }
    ctx->pc = 0x10C4B4u;
label_10c4b4:
    // 0x10c4b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C4B4u;
    {
        const bool branch_taken_0x10c4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4B4u;
            // 0x10c4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4b4) {
            ctx->pc = 0x10C4C8u;
            goto label_10c4c8;
        }
    }
    ctx->pc = 0x10C4BCu;
label_10c4bc:
    // 0x10c4bc: 0xc042fee  jal         func_10BFB8
    ctx->pc = 0x10C4BCu;
    SET_GPR_U32(ctx, 31, 0x10C4C4u);
    ctx->pc = 0x10C4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4BCu;
            // 0x10c4c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BFB8u;
    if (runtime->hasFunction(0x10BFB8u)) {
        auto targetFn = runtime->lookupFunction(0x10BFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C4C4u; }
        if (ctx->pc != 0x10C4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x10bfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C4C4u; }
        if (ctx->pc != 0x10C4C4u) { return; }
    }
    ctx->pc = 0x10C4C4u;
label_10c4c4:
    // 0x10c4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c4c8:
    // 0x10c4c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c4cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10c4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c4d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c4d4: 0x804308a  j           func_10C228
    ctx->pc = 0x10C4D4u;
    ctx->pc = 0x10C4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4D4u;
            // 0x10c4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C228u;
    if (runtime->hasFunction(0x10C228u)) {
        auto targetFn = runtime->lookupFunction(0x10C228u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _markOutput_0x10c228(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10C4DCu;
label_10c4dc:
    // 0x10c4dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10c4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10c4e0:
    // 0x10c4e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10c4e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c4e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c4e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C4E8u;
            // 0x10c4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C4F0u;
}
