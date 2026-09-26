#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_NEXT_POS__FP12RS_STACKDATAi
// Address: 0x2680b0 - 0x2681e0
void ps2__SET_CAMERA_NEXT_POS__FP12RS_STACKDATAi_0x2680b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_NEXT_POS__FP12RS_STACKDATAi_0x2680b0");
#endif

    switch (ctx->pc) {
        case 0x2680d0u: goto label_2680d0;
        case 0x268108u: goto label_268108;
        case 0x26812cu: goto label_26812c;
        case 0x268198u: goto label_268198;
        case 0x2681a8u: goto label_2681a8;
        case 0x2681c4u: goto label_2681c4;
        default: break;
    }

    ctx->pc = 0x2680b0u;

    // 0x2680b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2680b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2680b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2680b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2680b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2680b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2680bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2680bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2680c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2680c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2680c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2680c8: 0xc0956c8  jal         func_255B20
    ctx->pc = 0x2680C8u;
    SET_GPR_U32(ctx, 31, 0x2680D0u);
    ctx->pc = 0x2680CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2680C8u;
            // 0x2680cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2680D0u; }
        if (ctx->pc != 0x2680D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2680D0u; }
        if (ctx->pc != 0x2680D0u) { return; }
    }
    ctx->pc = 0x2680D0u;
label_2680d0:
    // 0x2680d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2680D0u;
    {
        const bool branch_taken_0x2680d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2680D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2680D0u;
            // 0x2680d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680d0) {
            ctx->pc = 0x2680E0u;
            goto label_2680e0;
        }
    }
    ctx->pc = 0x2680D8u;
    // 0x2680d8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2680D8u;
    {
        const bool branch_taken_0x2680d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2680D8u;
            // 0x2680dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680d8) {
            ctx->pc = 0x2681C8u;
            goto label_2681c8;
        }
    }
    ctx->pc = 0x2680E0u;
label_2680e0:
    // 0x2680e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2680e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2680e4: 0x1222002e  beq         $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2680E4u;
    {
        const bool branch_taken_0x2680e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2680E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2680E4u;
            // 0x2680e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680e4) {
            ctx->pc = 0x2681A0u;
            goto label_2681a0;
        }
    }
    ctx->pc = 0x2680ECu;
    // 0x2680ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2680ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2680f0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2680F0u;
    {
        const bool branch_taken_0x2680f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2680F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2680F0u;
            // 0x2680f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680f0) {
            ctx->pc = 0x268100u;
            goto label_268100;
        }
    }
    ctx->pc = 0x2680F8u;
    // 0x2680f8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2680F8u;
    {
        const bool branch_taken_0x2680f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2680FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2680F8u;
            // 0x2680fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2680f8) {
            ctx->pc = 0x2681B0u;
            goto label_2681b0;
        }
    }
    ctx->pc = 0x268100u;
label_268100:
    // 0x268100: 0xc097e18  jal         func_25F860
    ctx->pc = 0x268100u;
    SET_GPR_U32(ctx, 31, 0x268108u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268108u; }
        if (ctx->pc != 0x268108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268108u; }
        if (ctx->pc != 0x268108u) { return; }
    }
    ctx->pc = 0x268108u;
label_268108:
    // 0x268108: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x268108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26810c: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26810cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x268110: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x268110u;
    {
        const bool branch_taken_0x268110 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x268114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268110u;
            // 0x268114: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268110) {
            ctx->pc = 0x268120u;
            goto label_268120;
        }
    }
    ctx->pc = 0x268118u;
    // 0x268118: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x268118u;
    {
        const bool branch_taken_0x268118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26811Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268118u;
            // 0x26811c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268118) {
            ctx->pc = 0x268180u;
            goto label_268180;
        }
    }
    ctx->pc = 0x268120u;
label_268120:
    // 0x268120: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x268120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x268124: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x268124u;
    {
        const bool branch_taken_0x268124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268124u;
            // 0x268128: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268124) {
            ctx->pc = 0x268158u;
            goto label_268158;
        }
    }
    ctx->pc = 0x26812Cu;
label_26812c:
    // 0x26812c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x268130: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x268130u;
    {
        const bool branch_taken_0x268130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x268130) {
            ctx->pc = 0x268164u;
            goto label_268164;
        }
    }
    ctx->pc = 0x268138u;
    // 0x268138: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x268138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26813c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26813Cu;
    {
        const bool branch_taken_0x26813c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26813c) {
            ctx->pc = 0x26814Cu;
            goto label_26814c;
        }
    }
    ctx->pc = 0x268144u;
    // 0x268144: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x268144u;
    {
        const bool branch_taken_0x268144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268144u;
            // 0x268148: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268144) {
            ctx->pc = 0x268158u;
            goto label_268158;
        }
    }
    ctx->pc = 0x26814Cu;
label_26814c:
    // 0x26814c: 0x0  nop
    ctx->pc = 0x26814cu;
    // NOP
    // 0x268150: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x268150u;
    {
        const bool branch_taken_0x268150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268150u;
            // 0x268154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268150) {
            ctx->pc = 0x268180u;
            goto label_268180;
        }
    }
    ctx->pc = 0x268158u;
label_268158:
    // 0x268158: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x268158u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26815c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x26815Cu;
    {
        const bool branch_taken_0x26815c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26815c) {
            ctx->pc = 0x26812Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26812c;
        }
    }
    ctx->pc = 0x268164u;
label_268164:
    // 0x268164: 0x0  nop
    ctx->pc = 0x268164u;
    // NOP
    // 0x268168: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x268168u;
    {
        const bool branch_taken_0x268168 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268168u;
            // 0x26816c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268168) {
            ctx->pc = 0x268178u;
            goto label_268178;
        }
    }
    ctx->pc = 0x268170u;
    // 0x268170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x268170u;
    {
        const bool branch_taken_0x268170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268170) {
            ctx->pc = 0x268180u;
            goto label_268180;
        }
    }
    ctx->pc = 0x268178u;
label_268178:
    // 0x268178: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x268178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26817c: 0x0  nop
    ctx->pc = 0x26817cu;
    // NOP
label_268180:
    // 0x268180: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x268180u;
    {
        const bool branch_taken_0x268180 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x268184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268180u;
            // 0x268184: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268180) {
            ctx->pc = 0x268190u;
            goto label_268190;
        }
    }
    ctx->pc = 0x268188u;
    // 0x268188: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x268188u;
    {
        const bool branch_taken_0x268188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268188u;
            // 0x26818c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268188) {
            ctx->pc = 0x2681C8u;
            goto label_2681c8;
        }
    }
    ctx->pc = 0x268190u;
label_268190:
    // 0x268190: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x268190u;
    SET_GPR_U32(ctx, 31, 0x268198u);
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268198u; }
        if (ctx->pc != 0x268198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268198u; }
        if (ctx->pc != 0x268198u) { return; }
    }
    ctx->pc = 0x268198u;
label_268198:
    // 0x268198: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x268198u;
    {
        const bool branch_taken_0x268198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26819Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268198u;
            // 0x26819c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268198) {
            ctx->pc = 0x2681BCu;
            goto label_2681bc;
        }
    }
    ctx->pc = 0x2681A0u;
label_2681a0:
    // 0x2681a0: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x2681A0u;
    SET_GPR_U32(ctx, 31, 0x2681A8u);
    ctx->pc = 0x2681A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2681A0u;
            // 0x2681a4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2681A8u; }
        if (ctx->pc != 0x2681A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2681A8u; }
        if (ctx->pc != 0x2681A8u) { return; }
    }
    ctx->pc = 0x2681A8u;
label_2681a8:
    // 0x2681a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2681A8u;
    {
        const bool branch_taken_0x2681a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2681a8) {
            ctx->pc = 0x2681B8u;
            goto label_2681b8;
        }
    }
    ctx->pc = 0x2681B0u;
label_2681b0:
    // 0x2681b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2681B0u;
    {
        const bool branch_taken_0x2681b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2681B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2681B0u;
            // 0x2681b4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2681b0) {
            ctx->pc = 0x2681CCu;
            goto label_2681cc;
        }
    }
    ctx->pc = 0x2681B8u;
label_2681b8:
    // 0x2681b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2681b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2681bc:
    // 0x2681bc: 0xc04c50c  jal         func_131430
    ctx->pc = 0x2681BCu;
    SET_GPR_U32(ctx, 31, 0x2681C4u);
    ctx->pc = 0x2681C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2681BCu;
            // 0x2681c0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2681C4u; }
        if (ctx->pc != 0x2681C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2681C4u; }
        if (ctx->pc != 0x2681C4u) { return; }
    }
    ctx->pc = 0x2681C4u;
label_2681c4:
    // 0x2681c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2681c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2681c8:
    // 0x2681c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2681c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2681cc:
    // 0x2681cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2681ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2681d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2681d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2681d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2681d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2681d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2681D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2681DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2681D8u;
            // 0x2681dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2681E0u;
}
