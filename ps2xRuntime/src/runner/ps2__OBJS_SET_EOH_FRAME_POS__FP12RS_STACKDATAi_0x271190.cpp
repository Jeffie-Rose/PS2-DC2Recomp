#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_EOH_FRAME_POS__FP12RS_STACKDATAi
// Address: 0x271190 - 0x271344
void ps2__OBJS_SET_EOH_FRAME_POS__FP12RS_STACKDATAi_0x271190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_EOH_FRAME_POS__FP12RS_STACKDATAi_0x271190");
#endif

    switch (ctx->pc) {
        case 0x2711c4u: goto label_2711c4;
        case 0x271204u: goto label_271204;
        case 0x271214u: goto label_271214;
        case 0x271220u: goto label_271220;
        case 0x271230u: goto label_271230;
        case 0x271240u: goto label_271240;
        case 0x271250u: goto label_271250;
        case 0x27125cu: goto label_27125c;
        case 0x27126cu: goto label_27126c;
        case 0x27127cu: goto label_27127c;
        case 0x27128cu: goto label_27128c;
        case 0x27129cu: goto label_27129c;
        case 0x2712acu: goto label_2712ac;
        case 0x2712bcu: goto label_2712bc;
        case 0x2712ccu: goto label_2712cc;
        case 0x2712dcu: goto label_2712dc;
        case 0x2712e8u: goto label_2712e8;
        case 0x2712f8u: goto label_2712f8;
        case 0x27131cu: goto label_27131c;
        default: break;
    }

    ctx->pc = 0x271190u;

    // 0x271190: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x271190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x271194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x271194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x271198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27119c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27119cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2711a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2711a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2711a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2711a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2711a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2711acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2711b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2711b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2711b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2711b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2711b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2711b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711bc: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2711BCu;
    SET_GPR_U32(ctx, 31, 0x2711C4u);
    ctx->pc = 0x2711C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2711BCu;
            // 0x2711c0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2711C4u; }
        if (ctx->pc != 0x2711C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2711C4u; }
        if (ctx->pc != 0x2711C4u) { return; }
    }
    ctx->pc = 0x2711C4u;
label_2711c4:
    // 0x2711c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2711c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2711c8: 0x12820036  beq         $s4, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2711C8u;
    {
        const bool branch_taken_0x2711c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2711CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2711C8u;
            // 0x2711cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711c8) {
            ctx->pc = 0x2712A4u;
            goto label_2712a4;
        }
    }
    ctx->pc = 0x2711D0u;
    // 0x2711d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2711d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2711d4: 0x12820023  beq         $s4, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2711D4u;
    {
        const bool branch_taken_0x2711d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2711D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2711D4u;
            // 0x2711d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711d4) {
            ctx->pc = 0x271264u;
            goto label_271264;
        }
    }
    ctx->pc = 0x2711DCu;
    // 0x2711dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2711dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2711e0: 0x12820011  beq         $s4, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2711E0u;
    {
        const bool branch_taken_0x2711e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2711E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2711E0u;
            // 0x2711e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711e0) {
            ctx->pc = 0x271228u;
            goto label_271228;
        }
    }
    ctx->pc = 0x2711E8u;
    // 0x2711e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2711e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2711ec: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2711ECu;
    {
        const bool branch_taken_0x2711ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2711F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2711ECu;
            // 0x2711f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711ec) {
            ctx->pc = 0x2711FCu;
            goto label_2711fc;
        }
    }
    ctx->pc = 0x2711F4u;
    // 0x2711f4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2711F4u;
    {
        const bool branch_taken_0x2711f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2711F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2711F4u;
            // 0x2711f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711f4) {
            ctx->pc = 0x2712F0u;
            goto label_2712f0;
        }
    }
    ctx->pc = 0x2711FCu;
label_2711fc:
    // 0x2711fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2711FCu;
    SET_GPR_U32(ctx, 31, 0x271204u);
    ctx->pc = 0x271200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2711FCu;
            // 0x271200: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271204u; }
        if (ctx->pc != 0x271204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271204u; }
        if (ctx->pc != 0x271204u) { return; }
    }
    ctx->pc = 0x271204u;
label_271204:
    // 0x271204: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27120c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27120Cu;
    SET_GPR_U32(ctx, 31, 0x271214u);
    ctx->pc = 0x271210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27120Cu;
            // 0x271210: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271214u; }
        if (ctx->pc != 0x271214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271214u; }
        if (ctx->pc != 0x271214u) { return; }
    }
    ctx->pc = 0x271214u;
label_271214:
    // 0x271214: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271218: 0xc097e48  jal         func_25F920
    ctx->pc = 0x271218u;
    SET_GPR_U32(ctx, 31, 0x271220u);
    ctx->pc = 0x27121Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271218u;
            // 0x27121c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271220u; }
        if (ctx->pc != 0x271220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271220u; }
        if (ctx->pc != 0x271220u) { return; }
    }
    ctx->pc = 0x271220u;
label_271220:
    // 0x271220: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x271220u;
    {
        const bool branch_taken_0x271220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271220u;
            // 0x271224: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271220) {
            ctx->pc = 0x2712ECu;
            goto label_2712ec;
        }
    }
    ctx->pc = 0x271228u;
label_271228:
    // 0x271228: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271228u;
    SET_GPR_U32(ctx, 31, 0x271230u);
    ctx->pc = 0x27122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271228u;
            // 0x27122c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271230u; }
        if (ctx->pc != 0x271230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271230u; }
        if (ctx->pc != 0x271230u) { return; }
    }
    ctx->pc = 0x271230u;
label_271230:
    // 0x271230: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271238: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271238u;
    SET_GPR_U32(ctx, 31, 0x271240u);
    ctx->pc = 0x27123Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271238u;
            // 0x27123c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271240u; }
        if (ctx->pc != 0x271240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271240u; }
        if (ctx->pc != 0x271240u) { return; }
    }
    ctx->pc = 0x271240u;
label_271240:
    // 0x271240: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271248: 0xc097e48  jal         func_25F920
    ctx->pc = 0x271248u;
    SET_GPR_U32(ctx, 31, 0x271250u);
    ctx->pc = 0x27124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271248u;
            // 0x27124c: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271250u; }
        if (ctx->pc != 0x271250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271250u; }
        if (ctx->pc != 0x271250u) { return; }
    }
    ctx->pc = 0x271250u;
label_271250:
    // 0x271250: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271254: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271254u;
    SET_GPR_U32(ctx, 31, 0x27125Cu);
    ctx->pc = 0x271258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271254u;
            // 0x271258: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27125Cu; }
        if (ctx->pc != 0x27125Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27125Cu; }
        if (ctx->pc != 0x27125Cu) { return; }
    }
    ctx->pc = 0x27125Cu;
label_27125c:
    // 0x27125c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x27125Cu;
    {
        const bool branch_taken_0x27125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27125Cu;
            // 0x271260: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27125c) {
            ctx->pc = 0x2712ECu;
            goto label_2712ec;
        }
    }
    ctx->pc = 0x271264u;
label_271264:
    // 0x271264: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271264u;
    SET_GPR_U32(ctx, 31, 0x27126Cu);
    ctx->pc = 0x271268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271264u;
            // 0x271268: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27126Cu; }
        if (ctx->pc != 0x27126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27126Cu; }
        if (ctx->pc != 0x27126Cu) { return; }
    }
    ctx->pc = 0x27126Cu;
label_27126c:
    // 0x27126c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271274: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271274u;
    SET_GPR_U32(ctx, 31, 0x27127Cu);
    ctx->pc = 0x271278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271274u;
            // 0x271278: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27127Cu; }
        if (ctx->pc != 0x27127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27127Cu; }
        if (ctx->pc != 0x27127Cu) { return; }
    }
    ctx->pc = 0x27127Cu;
label_27127c:
    // 0x27127c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27127cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271280: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x271280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271284: 0xc097e48  jal         func_25F920
    ctx->pc = 0x271284u;
    SET_GPR_U32(ctx, 31, 0x27128Cu);
    ctx->pc = 0x271288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271284u;
            // 0x271288: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27128Cu; }
        if (ctx->pc != 0x27128Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27128Cu; }
        if (ctx->pc != 0x27128Cu) { return; }
    }
    ctx->pc = 0x27128Cu;
label_27128c:
    // 0x27128c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27128cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271290: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x271290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271294: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x271294u;
    SET_GPR_U32(ctx, 31, 0x27129Cu);
    ctx->pc = 0x271298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271294u;
            // 0x271298: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27129Cu; }
        if (ctx->pc != 0x27129Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27129Cu; }
        if (ctx->pc != 0x27129Cu) { return; }
    }
    ctx->pc = 0x27129Cu;
label_27129c:
    // 0x27129c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27129Cu;
    {
        const bool branch_taken_0x27129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27129c) {
            ctx->pc = 0x2712ECu;
            goto label_2712ec;
        }
    }
    ctx->pc = 0x2712A4u;
label_2712a4:
    // 0x2712a4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2712A4u;
    SET_GPR_U32(ctx, 31, 0x2712ACu);
    ctx->pc = 0x2712A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712A4u;
            // 0x2712a8: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712ACu; }
        if (ctx->pc != 0x2712ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712ACu; }
        if (ctx->pc != 0x2712ACu) { return; }
    }
    ctx->pc = 0x2712ACu;
label_2712ac:
    // 0x2712ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2712acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2712b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712b4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2712B4u;
    SET_GPR_U32(ctx, 31, 0x2712BCu);
    ctx->pc = 0x2712B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712B4u;
            // 0x2712b8: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712BCu; }
        if (ctx->pc != 0x2712BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712BCu; }
        if (ctx->pc != 0x2712BCu) { return; }
    }
    ctx->pc = 0x2712BCu;
label_2712bc:
    // 0x2712bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2712bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2712c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712c4: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2712C4u;
    SET_GPR_U32(ctx, 31, 0x2712CCu);
    ctx->pc = 0x2712C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712C4u;
            // 0x2712c8: 0x24950008  addiu       $s5, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712CCu; }
        if (ctx->pc != 0x2712CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712CCu; }
        if (ctx->pc != 0x2712CCu) { return; }
    }
    ctx->pc = 0x2712CCu;
label_2712cc:
    // 0x2712cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2712ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2712d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2712d4: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2712D4u;
    SET_GPR_U32(ctx, 31, 0x2712DCu);
    ctx->pc = 0x2712D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712D4u;
            // 0x2712d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712DCu; }
        if (ctx->pc != 0x2712DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712DCu; }
        if (ctx->pc != 0x2712DCu) { return; }
    }
    ctx->pc = 0x2712DCu;
label_2712dc:
    // 0x2712dc: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x2712dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x2712e0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2712E0u;
    SET_GPR_U32(ctx, 31, 0x2712E8u);
    ctx->pc = 0x2712E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2712E0u;
            // 0x2712e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712E8u; }
        if (ctx->pc != 0x2712E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712E8u; }
        if (ctx->pc != 0x2712E8u) { return; }
    }
    ctx->pc = 0x2712E8u;
label_2712e8:
    // 0x2712e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2712e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2712ec:
    // 0x2712ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2712ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2712f0:
    // 0x2712f0: 0xc098a44  jal         func_262910
    ctx->pc = 0x2712F0u;
    SET_GPR_U32(ctx, 31, 0x2712F8u);
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712F8u; }
        if (ctx->pc != 0x2712F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2712F8u; }
        if (ctx->pc != 0x2712F8u) { return; }
    }
    ctx->pc = 0x2712F8u;
label_2712f8:
    // 0x2712f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2712F8u;
    {
        const bool branch_taken_0x2712f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2712FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2712F8u;
            // 0x2712fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712f8) {
            ctx->pc = 0x271308u;
            goto label_271308;
        }
    }
    ctx->pc = 0x271300u;
    // 0x271300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x271300u;
    {
        const bool branch_taken_0x271300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271300u;
            // 0x271304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271300) {
            ctx->pc = 0x271320u;
            goto label_271320;
        }
    }
    ctx->pc = 0x271308u;
label_271308:
    // 0x271308: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x271308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27130c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27130cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271310: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x271310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271314: 0xc0972f8  jal         func_25CBE0
    ctx->pc = 0x271314u;
    SET_GPR_U32(ctx, 31, 0x27131Cu);
    ctx->pc = 0x271318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271314u;
            // 0x271318: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE0u;
    if (runtime->hasFunction(0x25CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27131Cu; }
        if (ctx->pc != 0x27131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEohFramePos__12CSceneObjSeqFiPciPf_0x25cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27131Cu; }
        if (ctx->pc != 0x27131Cu) { return; }
    }
    ctx->pc = 0x27131Cu;
label_27131c:
    // 0x27131c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271320:
    // 0x271320: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x271320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x271324: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x271324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271328: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x271328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27132c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27132cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271330: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271334: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271334u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27133c: 0x3e00008  jr          $ra
    ctx->pc = 0x27133Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27133Cu;
            // 0x271340: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271344u;
}
