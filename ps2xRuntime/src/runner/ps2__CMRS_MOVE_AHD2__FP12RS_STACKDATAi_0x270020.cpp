#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_MOVE_AHD2__FP12RS_STACKDATAi
// Address: 0x270020 - 0x2701f4
void ps2__CMRS_MOVE_AHD2__FP12RS_STACKDATAi_0x270020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_MOVE_AHD2__FP12RS_STACKDATAi_0x270020");
#endif

    switch (ctx->pc) {
        case 0x270064u: goto label_270064;
        case 0x270088u: goto label_270088;
        case 0x2700f0u: goto label_2700f0;
        case 0x270100u: goto label_270100;
        case 0x270110u: goto label_270110;
        case 0x270120u: goto label_270120;
        case 0x270130u: goto label_270130;
        case 0x27013cu: goto label_27013c;
        case 0x27014cu: goto label_27014c;
        case 0x27015cu: goto label_27015c;
        case 0x27016cu: goto label_27016c;
        case 0x27017cu: goto label_27017c;
        case 0x27018cu: goto label_27018c;
        case 0x270198u: goto label_270198;
        case 0x2701ccu: goto label_2701cc;
        default: break;
    }

    ctx->pc = 0x270020u;

    // 0x270020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x270020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x270024: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x270024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x270028: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x270028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27002c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x270030: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x270030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x270034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x270034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x270038: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x270038u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27003c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x27003cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x270040: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x270040u;
    {
        const bool branch_taken_0x270040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x270044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270040u;
            // 0x270044: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270040) {
            ctx->pc = 0x270144u;
            goto label_270144;
        }
    }
    ctx->pc = 0x270048u;
    // 0x270048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27004c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27004Cu;
    {
        const bool branch_taken_0x27004c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x27004c) {
            ctx->pc = 0x27005Cu;
            goto label_27005c;
        }
    }
    ctx->pc = 0x270054u;
    // 0x270054: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x270054u;
    {
        const bool branch_taken_0x270054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270054u;
            // 0x270058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270054) {
            ctx->pc = 0x2701A0u;
            goto label_2701a0;
        }
    }
    ctx->pc = 0x27005Cu;
label_27005c:
    // 0x27005c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27005Cu;
    SET_GPR_U32(ctx, 31, 0x270064u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270064u; }
        if (ctx->pc != 0x270064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270064u; }
        if (ctx->pc != 0x270064u) { return; }
    }
    ctx->pc = 0x270064u;
label_270064:
    // 0x270064: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x270064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x270068: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x270068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x27006c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27006Cu;
    {
        const bool branch_taken_0x27006c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27006Cu;
            // 0x270070: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27006c) {
            ctx->pc = 0x27007Cu;
            goto label_27007c;
        }
    }
    ctx->pc = 0x270074u;
    // 0x270074: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x270074u;
    {
        const bool branch_taken_0x270074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270074u;
            // 0x270078: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270074) {
            ctx->pc = 0x2700D8u;
            goto label_2700d8;
        }
    }
    ctx->pc = 0x27007Cu;
label_27007c:
    // 0x27007c: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x27007cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x270080: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x270080u;
    {
        const bool branch_taken_0x270080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270080u;
            // 0x270084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270080) {
            ctx->pc = 0x2700B0u;
            goto label_2700b0;
        }
    }
    ctx->pc = 0x270088u;
label_270088:
    // 0x270088: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x270088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27008c: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27008Cu;
    {
        const bool branch_taken_0x27008c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27008c) {
            ctx->pc = 0x2700BCu;
            goto label_2700bc;
        }
    }
    ctx->pc = 0x270094u;
    // 0x270094: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x270094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x270098: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x270098u;
    {
        const bool branch_taken_0x270098 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x270098) {
            ctx->pc = 0x2700A8u;
            goto label_2700a8;
        }
    }
    ctx->pc = 0x2700A0u;
    // 0x2700a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2700A0u;
    {
        const bool branch_taken_0x2700a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700A0u;
            // 0x2700a4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700a0) {
            ctx->pc = 0x2700B0u;
            goto label_2700b0;
        }
    }
    ctx->pc = 0x2700A8u;
label_2700a8:
    // 0x2700a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2700A8u;
    {
        const bool branch_taken_0x2700a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700A8u;
            // 0x2700ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700a8) {
            ctx->pc = 0x2700D8u;
            goto label_2700d8;
        }
    }
    ctx->pc = 0x2700B0u;
label_2700b0:
    // 0x2700b0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2700b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2700b4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2700B4u;
    {
        const bool branch_taken_0x2700b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2700b4) {
            ctx->pc = 0x270088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270088;
        }
    }
    ctx->pc = 0x2700BCu;
label_2700bc:
    // 0x2700bc: 0x0  nop
    ctx->pc = 0x2700bcu;
    // NOP
    // 0x2700c0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2700C0u;
    {
        const bool branch_taken_0x2700c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2700C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700C0u;
            // 0x2700c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700c0) {
            ctx->pc = 0x2700D0u;
            goto label_2700d0;
        }
    }
    ctx->pc = 0x2700C8u;
    // 0x2700c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2700C8u;
    {
        const bool branch_taken_0x2700c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2700c8) {
            ctx->pc = 0x2700D8u;
            goto label_2700d8;
        }
    }
    ctx->pc = 0x2700D0u;
label_2700d0:
    // 0x2700d0: 0x8cd20004  lw          $s2, 0x4($a2)
    ctx->pc = 0x2700d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2700d4: 0x0  nop
    ctx->pc = 0x2700d4u;
    // NOP
label_2700d8:
    // 0x2700d8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2700D8u;
    {
        const bool branch_taken_0x2700d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2700DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700D8u;
            // 0x2700dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700d8) {
            ctx->pc = 0x2700E8u;
            goto label_2700e8;
        }
    }
    ctx->pc = 0x2700E0u;
    // 0x2700e0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2700E0u;
    {
        const bool branch_taken_0x2700e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2700E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2700E0u;
            // 0x2700e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700e0) {
            ctx->pc = 0x2701D0u;
            goto label_2701d0;
        }
    }
    ctx->pc = 0x2700E8u;
label_2700e8:
    // 0x2700e8: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x2700E8u;
    SET_GPR_U32(ctx, 31, 0x2700F0u);
    ctx->pc = 0x2700ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2700E8u;
            // 0x2700ec: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700F0u; }
        if (ctx->pc != 0x2700F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700F0u; }
        if (ctx->pc != 0x2700F0u) { return; }
    }
    ctx->pc = 0x2700F0u;
label_2700f0:
    // 0x2700f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2700f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2700f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2700f8: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x2700F8u;
    SET_GPR_U32(ctx, 31, 0x270100u);
    ctx->pc = 0x2700FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2700F8u;
            // 0x2700fc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270100u; }
        if (ctx->pc != 0x270100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270100u; }
        if (ctx->pc != 0x270100u) { return; }
    }
    ctx->pc = 0x270100u;
label_270100:
    // 0x270100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270104: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x270104u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x270108: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x270108u;
    SET_GPR_U32(ctx, 31, 0x270110u);
    ctx->pc = 0x27010Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270108u;
            // 0x27010c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270110u; }
        if (ctx->pc != 0x270110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270110u; }
        if (ctx->pc != 0x270110u) { return; }
    }
    ctx->pc = 0x270110u;
label_270110:
    // 0x270110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270114: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x270114u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x270118: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270118u;
    SET_GPR_U32(ctx, 31, 0x270120u);
    ctx->pc = 0x27011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270118u;
            // 0x27011c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270120u; }
        if (ctx->pc != 0x270120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270120u; }
        if (ctx->pc != 0x270120u) { return; }
    }
    ctx->pc = 0x270120u;
label_270120:
    // 0x270120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270128: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x270128u;
    SET_GPR_U32(ctx, 31, 0x270130u);
    ctx->pc = 0x27012Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270128u;
            // 0x27012c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270130u; }
        if (ctx->pc != 0x270130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270130u; }
        if (ctx->pc != 0x270130u) { return; }
    }
    ctx->pc = 0x270130u;
label_270130:
    // 0x270130: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270134: 0xc097f84  jal         func_25FE10
    ctx->pc = 0x270134u;
    SET_GPR_U32(ctx, 31, 0x27013Cu);
    ctx->pc = 0x270138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270134u;
            // 0x270138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE10u;
    if (runtime->hasFunction(0x25FE10u)) {
        auto targetFn = runtime->lookupFunction(0x25FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27013Cu; }
        if (ctx->pc != 0x27013Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgFloat__FP8ARG_DATA_0x25fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27013Cu; }
        if (ctx->pc != 0x27013Cu) { return; }
    }
    ctx->pc = 0x27013Cu;
label_27013c:
    // 0x27013c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27013Cu;
    {
        const bool branch_taken_0x27013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27013c) {
            ctx->pc = 0x2701A8u;
            goto label_2701a8;
        }
    }
    ctx->pc = 0x270144u;
label_270144:
    // 0x270144: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270144u;
    SET_GPR_U32(ctx, 31, 0x27014Cu);
    ctx->pc = 0x270148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270144u;
            // 0x270148: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27014Cu; }
        if (ctx->pc != 0x27014Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27014Cu; }
        if (ctx->pc != 0x27014Cu) { return; }
    }
    ctx->pc = 0x27014Cu;
label_27014c:
    // 0x27014c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27014cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270150: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x270150u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x270154: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270154u;
    SET_GPR_U32(ctx, 31, 0x27015Cu);
    ctx->pc = 0x270158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270154u;
            // 0x270158: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27015Cu; }
        if (ctx->pc != 0x27015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27015Cu; }
        if (ctx->pc != 0x27015Cu) { return; }
    }
    ctx->pc = 0x27015Cu;
label_27015c:
    // 0x27015c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270160: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x270160u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x270164: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270164u;
    SET_GPR_U32(ctx, 31, 0x27016Cu);
    ctx->pc = 0x270168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270164u;
            // 0x270168: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27016Cu; }
        if (ctx->pc != 0x27016Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27016Cu; }
        if (ctx->pc != 0x27016Cu) { return; }
    }
    ctx->pc = 0x27016Cu;
label_27016c:
    // 0x27016c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270170: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x270170u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x270174: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270174u;
    SET_GPR_U32(ctx, 31, 0x27017Cu);
    ctx->pc = 0x270178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270174u;
            // 0x270178: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27017Cu; }
        if (ctx->pc != 0x27017Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27017Cu; }
        if (ctx->pc != 0x27017Cu) { return; }
    }
    ctx->pc = 0x27017Cu;
label_27017c:
    // 0x27017c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27017cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270184: 0xc097e18  jal         func_25F860
    ctx->pc = 0x270184u;
    SET_GPR_U32(ctx, 31, 0x27018Cu);
    ctx->pc = 0x270188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270184u;
            // 0x270188: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27018Cu; }
        if (ctx->pc != 0x27018Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27018Cu; }
        if (ctx->pc != 0x27018Cu) { return; }
    }
    ctx->pc = 0x27018Cu;
label_27018c:
    // 0x27018c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27018cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270190: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x270190u;
    SET_GPR_U32(ctx, 31, 0x270198u);
    ctx->pc = 0x270194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270190u;
            // 0x270194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270198u; }
        if (ctx->pc != 0x270198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270198u; }
        if (ctx->pc != 0x270198u) { return; }
    }
    ctx->pc = 0x270198u;
label_270198:
    // 0x270198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270198u;
    {
        const bool branch_taken_0x270198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270198) {
            ctx->pc = 0x2701A8u;
            goto label_2701a8;
        }
    }
    ctx->pc = 0x2701A0u;
label_2701a0:
    // 0x2701a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2701A0u;
    {
        const bool branch_taken_0x2701a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701A0u;
            // 0x2701a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701a0) {
            ctx->pc = 0x2701D4u;
            goto label_2701d4;
        }
    }
    ctx->pc = 0x2701A8u;
label_2701a8:
    // 0x2701a8: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x2701a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x2701ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2701acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2701b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2701b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2701b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2701b8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2701b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2701bc: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x2701bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x2701c0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2701c0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2701c4: 0xc0968ac  jal         func_25A2B0
    ctx->pc = 0x2701C4u;
    SET_GPR_U32(ctx, 31, 0x2701CCu);
    ctx->pc = 0x2701C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2701C4u;
            // 0x2701c8: 0x460003c6  mov.s       $f15, $f0 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A2B0u;
    if (runtime->hasFunction(0x25A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x25A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2701CCu; }
        if (ctx->pc != 0x2701CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveAHD2__12CSceneCmrSeqFfffiif_0x25a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2701CCu; }
        if (ctx->pc != 0x2701CCu) { return; }
    }
    ctx->pc = 0x2701CCu;
label_2701cc:
    // 0x2701cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2701ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2701d0:
    // 0x2701d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2701d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2701d4:
    // 0x2701d4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2701d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2701d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2701d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2701dc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2701dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2701e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2701e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2701e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2701e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2701e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2701e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2701ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2701ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2701F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701ECu;
            // 0x2701f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2701F4u;
}
