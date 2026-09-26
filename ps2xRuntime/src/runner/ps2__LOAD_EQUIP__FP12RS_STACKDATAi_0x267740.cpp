#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_EQUIP__FP12RS_STACKDATAi
// Address: 0x267740 - 0x267be4
void ps2__LOAD_EQUIP__FP12RS_STACKDATAi_0x267740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_EQUIP__FP12RS_STACKDATAi_0x267740");
#endif

    switch (ctx->pc) {
        case 0x26779cu: goto label_26779c;
        case 0x2677c0u: goto label_2677c0;
        case 0x26782cu: goto label_26782c;
        case 0x26783cu: goto label_26783c;
        case 0x26784cu: goto label_26784c;
        case 0x26785cu: goto label_26785c;
        case 0x26786cu: goto label_26786c;
        case 0x267884u: goto label_267884;
        case 0x267898u: goto label_267898;
        case 0x2678a8u: goto label_2678a8;
        case 0x2678b8u: goto label_2678b8;
        case 0x2678c8u: goto label_2678c8;
        case 0x2678d8u: goto label_2678d8;
        case 0x2678f0u: goto label_2678f0;
        case 0x267940u: goto label_267940;
        case 0x267970u: goto label_267970;
        case 0x267988u: goto label_267988;
        case 0x2679a4u: goto label_2679a4;
        case 0x2679c4u: goto label_2679c4;
        case 0x2679f4u: goto label_2679f4;
        case 0x267a18u: goto label_267a18;
        case 0x267a34u: goto label_267a34;
        case 0x267a54u: goto label_267a54;
        case 0x267a78u: goto label_267a78;
        case 0x267ac4u: goto label_267ac4;
        case 0x267ad8u: goto label_267ad8;
        case 0x267aecu: goto label_267aec;
        case 0x267b28u: goto label_267b28;
        case 0x267b3cu: goto label_267b3c;
        case 0x267b50u: goto label_267b50;
        case 0x267b5cu: goto label_267b5c;
        case 0x267b88u: goto label_267b88;
        case 0x267bb4u: goto label_267bb4;
        default: break;
    }

    ctx->pc = 0x267740u;

    // 0x267740: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x267740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x267744: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x267744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x267748: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x267748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x26774c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x26774cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x267750: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x267750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x267754: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x267754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x267758: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x267758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26775c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x267760: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x267760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267764: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x267764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x267768: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x267768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26776c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x267770: 0x12820046  beq         $s4, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x267770u;
    {
        const bool branch_taken_0x267770 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x267774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267770u;
            // 0x267774: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267770) {
            ctx->pc = 0x26788Cu;
            goto label_26788c;
        }
    }
    ctx->pc = 0x267778u;
    // 0x267778: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x267778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26777c: 0x12820043  beq         $s4, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x26777Cu;
    {
        const bool branch_taken_0x26777c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x267780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26777Cu;
            // 0x267780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26777c) {
            ctx->pc = 0x26788Cu;
            goto label_26788c;
        }
    }
    ctx->pc = 0x267784u;
    // 0x267784: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267784u;
    {
        const bool branch_taken_0x267784 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x267784) {
            ctx->pc = 0x267794u;
            goto label_267794;
        }
    }
    ctx->pc = 0x26778Cu;
    // 0x26778c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26778Cu;
    {
        const bool branch_taken_0x26778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26778Cu;
            // 0x267790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26778c) {
            ctx->pc = 0x2678F8u;
            goto label_2678f8;
        }
    }
    ctx->pc = 0x267794u;
label_267794:
    // 0x267794: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267794u;
    SET_GPR_U32(ctx, 31, 0x26779Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26779Cu; }
        if (ctx->pc != 0x26779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26779Cu; }
        if (ctx->pc != 0x26779Cu) { return; }
    }
    ctx->pc = 0x26779Cu;
label_26779c:
    // 0x26779c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26779cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2677a0: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x2677a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x2677a4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2677A4u;
    {
        const bool branch_taken_0x2677a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2677A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2677A4u;
            // 0x2677a8: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677a4) {
            ctx->pc = 0x2677B4u;
            goto label_2677b4;
        }
    }
    ctx->pc = 0x2677ACu;
    // 0x2677ac: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2677ACu;
    {
        const bool branch_taken_0x2677ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2677ACu;
            // 0x2677b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677ac) {
            ctx->pc = 0x267814u;
            goto label_267814;
        }
    }
    ctx->pc = 0x2677B4u;
label_2677b4:
    // 0x2677b4: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x2677b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x2677b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2677B8u;
    {
        const bool branch_taken_0x2677b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2677B8u;
            // 0x2677bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677b8) {
            ctx->pc = 0x2677E8u;
            goto label_2677e8;
        }
    }
    ctx->pc = 0x2677C0u;
label_2677c0:
    // 0x2677c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2677c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2677c4: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2677C4u;
    {
        const bool branch_taken_0x2677c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2677c4) {
            ctx->pc = 0x2677F4u;
            goto label_2677f4;
        }
    }
    ctx->pc = 0x2677CCu;
    // 0x2677cc: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x2677ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2677d0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2677D0u;
    {
        const bool branch_taken_0x2677d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2677d0) {
            ctx->pc = 0x2677E0u;
            goto label_2677e0;
        }
    }
    ctx->pc = 0x2677D8u;
    // 0x2677d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2677D8u;
    {
        const bool branch_taken_0x2677d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2677D8u;
            // 0x2677dc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677d8) {
            ctx->pc = 0x2677E8u;
            goto label_2677e8;
        }
    }
    ctx->pc = 0x2677E0u;
label_2677e0:
    // 0x2677e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2677E0u;
    {
        const bool branch_taken_0x2677e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2677E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2677E0u;
            // 0x2677e4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677e0) {
            ctx->pc = 0x267814u;
            goto label_267814;
        }
    }
    ctx->pc = 0x2677E8u;
label_2677e8:
    // 0x2677e8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2677e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2677ec: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2677ECu;
    {
        const bool branch_taken_0x2677ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2677ec) {
            ctx->pc = 0x2677C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2677c0;
        }
    }
    ctx->pc = 0x2677F4u;
label_2677f4:
    // 0x2677f4: 0x0  nop
    ctx->pc = 0x2677f4u;
    // NOP
    // 0x2677f8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2677F8u;
    {
        const bool branch_taken_0x2677f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2677FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2677F8u;
            // 0x2677fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2677f8) {
            ctx->pc = 0x267808u;
            goto label_267808;
        }
    }
    ctx->pc = 0x267800u;
    // 0x267800: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x267800u;
    {
        const bool branch_taken_0x267800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267800) {
            ctx->pc = 0x267814u;
            goto label_267814;
        }
    }
    ctx->pc = 0x267808u;
label_267808:
    // 0x267808: 0x8cd40008  lw          $s4, 0x8($a2)
    ctx->pc = 0x267808u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x26780c: 0x8cd30004  lw          $s3, 0x4($a2)
    ctx->pc = 0x26780cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x267810: 0x0  nop
    ctx->pc = 0x267810u;
    // NOP
label_267814:
    // 0x267814: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x267814u;
    {
        const bool branch_taken_0x267814 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x267818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267814u;
            // 0x267818: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267814) {
            ctx->pc = 0x267824u;
            goto label_267824;
        }
    }
    ctx->pc = 0x26781Cu;
    // 0x26781c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x26781Cu;
    {
        const bool branch_taken_0x26781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26781Cu;
            // 0x267820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26781c) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267824u;
label_267824:
    // 0x267824: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x267824u;
    SET_GPR_U32(ctx, 31, 0x26782Cu);
    ctx->pc = 0x267828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267824u;
            // 0x267828: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26782Cu; }
        if (ctx->pc != 0x26782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26782Cu; }
        if (ctx->pc != 0x26782Cu) { return; }
    }
    ctx->pc = 0x26782Cu;
label_26782c:
    // 0x26782c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26782cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267830: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x267830u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267834: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x267834u;
    SET_GPR_U32(ctx, 31, 0x26783Cu);
    ctx->pc = 0x267838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267834u;
            // 0x267838: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26783Cu; }
        if (ctx->pc != 0x26783Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26783Cu; }
        if (ctx->pc != 0x26783Cu) { return; }
    }
    ctx->pc = 0x26783Cu;
label_26783c:
    // 0x26783c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26783cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267844: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x267844u;
    SET_GPR_U32(ctx, 31, 0x26784Cu);
    ctx->pc = 0x267848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267844u;
            // 0x267848: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26784Cu; }
        if (ctx->pc != 0x26784Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26784Cu; }
        if (ctx->pc != 0x26784Cu) { return; }
    }
    ctx->pc = 0x26784Cu;
label_26784c:
    // 0x26784c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267850: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x267850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267854: 0xc097f98  jal         func_25FE60
    ctx->pc = 0x267854u;
    SET_GPR_U32(ctx, 31, 0x26785Cu);
    ctx->pc = 0x267858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267854u;
            // 0x267858: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FE60u;
    if (runtime->hasFunction(0x25FE60u)) {
        auto targetFn = runtime->lookupFunction(0x25FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26785Cu; }
        if (ctx->pc != 0x26785Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgString__FP8ARG_DATA_0x25fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26785Cu; }
        if (ctx->pc != 0x26785Cu) { return; }
    }
    ctx->pc = 0x26785Cu;
label_26785c:
    // 0x26785c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26785cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267860: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x267860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x267864: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x267864u;
    SET_GPR_U32(ctx, 31, 0x26786Cu);
    ctx->pc = 0x267868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267864u;
            // 0x267868: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26786Cu; }
        if (ctx->pc != 0x26786Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26786Cu; }
        if (ctx->pc != 0x26786Cu) { return; }
    }
    ctx->pc = 0x26786Cu;
label_26786c:
    // 0x26786c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26786cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267870: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x267870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x267874: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x267874u;
    {
        const bool branch_taken_0x267874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267874u;
            // 0x267878: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267874) {
            ctx->pc = 0x267900u;
            goto label_267900;
        }
    }
    ctx->pc = 0x26787Cu;
    // 0x26787c: 0xc097f6c  jal         func_25FDB0
    ctx->pc = 0x26787Cu;
    SET_GPR_U32(ctx, 31, 0x267884u);
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267884u; }
        if (ctx->pc != 0x267884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267884u; }
        if (ctx->pc != 0x267884u) { return; }
    }
    ctx->pc = 0x267884u;
label_267884:
    // 0x267884: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x267884u;
    {
        const bool branch_taken_0x267884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267884u;
            // 0x267888: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267884) {
            ctx->pc = 0x267900u;
            goto label_267900;
        }
    }
    ctx->pc = 0x26788Cu;
label_26788c:
    // 0x26788c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26788cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267890: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267890u;
    SET_GPR_U32(ctx, 31, 0x267898u);
    ctx->pc = 0x267894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267890u;
            // 0x267894: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267898u; }
        if (ctx->pc != 0x267898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267898u; }
        if (ctx->pc != 0x267898u) { return; }
    }
    ctx->pc = 0x267898u;
label_267898:
    // 0x267898: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x267898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26789c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26789cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678a0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2678A0u;
    SET_GPR_U32(ctx, 31, 0x2678A8u);
    ctx->pc = 0x2678A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2678A0u;
            // 0x2678a4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678A8u; }
        if (ctx->pc != 0x2678A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678A8u; }
        if (ctx->pc != 0x2678A8u) { return; }
    }
    ctx->pc = 0x2678A8u;
label_2678a8:
    // 0x2678a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2678a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2678acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678b0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2678B0u;
    SET_GPR_U32(ctx, 31, 0x2678B8u);
    ctx->pc = 0x2678B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2678B0u;
            // 0x2678b4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678B8u; }
        if (ctx->pc != 0x2678B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678B8u; }
        if (ctx->pc != 0x2678B8u) { return; }
    }
    ctx->pc = 0x2678B8u;
label_2678b8:
    // 0x2678b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2678b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2678bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678c0: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2678C0u;
    SET_GPR_U32(ctx, 31, 0x2678C8u);
    ctx->pc = 0x2678C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2678C0u;
            // 0x2678c4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678C8u; }
        if (ctx->pc != 0x2678C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678C8u; }
        if (ctx->pc != 0x2678C8u) { return; }
    }
    ctx->pc = 0x2678C8u;
label_2678c8:
    // 0x2678c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2678c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678cc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2678ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2678d0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2678D0u;
    SET_GPR_U32(ctx, 31, 0x2678D8u);
    ctx->pc = 0x2678D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2678D0u;
            // 0x2678d4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678D8u; }
        if (ctx->pc != 0x2678D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678D8u; }
        if (ctx->pc != 0x2678D8u) { return; }
    }
    ctx->pc = 0x2678D8u;
label_2678d8:
    // 0x2678d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2678d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2678dc: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x2678dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2678e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2678E0u;
    {
        const bool branch_taken_0x2678e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2678E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2678E0u;
            // 0x2678e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678e0) {
            ctx->pc = 0x267900u;
            goto label_267900;
        }
    }
    ctx->pc = 0x2678E8u;
    // 0x2678e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2678E8u;
    SET_GPR_U32(ctx, 31, 0x2678F0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678F0u; }
        if (ctx->pc != 0x2678F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2678F0u; }
        if (ctx->pc != 0x2678F0u) { return; }
    }
    ctx->pc = 0x2678F0u;
label_2678f0:
    // 0x2678f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2678F0u;
    {
        const bool branch_taken_0x2678f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2678F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2678F0u;
            // 0x2678f4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678f0) {
            ctx->pc = 0x267900u;
            goto label_267900;
        }
    }
    ctx->pc = 0x2678F8u;
label_2678f8:
    // 0x2678f8: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2678F8u;
    {
        const bool branch_taken_0x2678f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2678FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2678F8u;
            // 0x2678fc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2678f8) {
            ctx->pc = 0x267BBCu;
            goto label_267bbc;
        }
    }
    ctx->pc = 0x267900u;
label_267900:
    // 0x267900: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267900u;
    {
        const bool branch_taken_0x267900 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x267904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267900u;
            // 0x267904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267900) {
            ctx->pc = 0x267914u;
            goto label_267914;
        }
    }
    ctx->pc = 0x267908u;
    // 0x267908: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x267908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26790c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26790Cu;
    {
        const bool branch_taken_0x26790c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26790c) {
            ctx->pc = 0x26791Cu;
            goto label_26791c;
        }
    }
    ctx->pc = 0x267914u;
label_267914:
    // 0x267914: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x267914u;
    {
        const bool branch_taken_0x267914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267914) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x26791Cu;
label_26791c:
    // 0x26791c: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26791Cu;
    {
        const bool branch_taken_0x26791c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x267920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26791Cu;
            // 0x267920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26791c) {
            ctx->pc = 0x267930u;
            goto label_267930;
        }
    }
    ctx->pc = 0x267924u;
    // 0x267924: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x267924u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x267928: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x267928u;
    {
        const bool branch_taken_0x267928 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x267928) {
            ctx->pc = 0x267938u;
            goto label_267938;
        }
    }
    ctx->pc = 0x267930u;
label_267930:
    // 0x267930: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x267930u;
    {
        const bool branch_taken_0x267930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267930) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267938u;
label_267938:
    // 0x267938: 0xc064220  jal         func_190880
    ctx->pc = 0x267938u;
    SET_GPR_U32(ctx, 31, 0x267940u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267940u; }
        if (ctx->pc != 0x267940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267940u; }
        if (ctx->pc != 0x267940u) { return; }
    }
    ctx->pc = 0x267940u;
label_267940:
    // 0x267940: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267940u;
    {
        const bool branch_taken_0x267940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267940u;
            // 0x267944: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267940) {
            ctx->pc = 0x267950u;
            goto label_267950;
        }
    }
    ctx->pc = 0x267948u;
    // 0x267948: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x267948u;
    {
        const bool branch_taken_0x267948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26794Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267948u;
            // 0x26794c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267948) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267950u;
label_267950:
    // 0x267950: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x267950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x267954: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x267954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x267958: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267958u;
    {
        const bool branch_taken_0x267958 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26795Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267958u;
            // 0x26795c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267958) {
            ctx->pc = 0x267968u;
            goto label_267968;
        }
    }
    ctx->pc = 0x267960u;
    // 0x267960: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x267960u;
    {
        const bool branch_taken_0x267960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267960u;
            // 0x267964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267960) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267968u;
label_267968:
    // 0x267968: 0xc0675c4  jal         func_19D710
    ctx->pc = 0x267968u;
    SET_GPR_U32(ctx, 31, 0x267970u);
    ctx->pc = 0x26796Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267968u;
            // 0x26796c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D710u;
    if (runtime->hasFunction(0x19D710u)) {
        auto targetFn = runtime->lookupFunction(0x19D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267970u; }
        if (ctx->pc != 0x267970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaEquipDataPath__16CUserDataManagerFii_0x19d710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267970u; }
        if (ctx->pc != 0x267970u) { return; }
    }
    ctx->pc = 0x267970u;
label_267970:
    // 0x267970: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267970u;
    {
        const bool branch_taken_0x267970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267970u;
            // 0x267974: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267970) {
            ctx->pc = 0x267980u;
            goto label_267980;
        }
    }
    ctx->pc = 0x267978u;
    // 0x267978: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x267978u;
    {
        const bool branch_taken_0x267978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267978u;
            // 0x26797c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267978) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267980u;
label_267980:
    // 0x267980: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x267980u;
    SET_GPR_U32(ctx, 31, 0x267988u);
    ctx->pc = 0x267984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267980u;
            // 0x267984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267988u; }
        if (ctx->pc != 0x267988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267988u; }
        if (ctx->pc != 0x267988u) { return; }
    }
    ctx->pc = 0x267988u;
label_267988:
    // 0x267988: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267988u;
    {
        const bool branch_taken_0x267988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26798Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267988u;
            // 0x26798c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267988) {
            ctx->pc = 0x267998u;
            goto label_267998;
        }
    }
    ctx->pc = 0x267990u;
    // 0x267990: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x267990u;
    {
        const bool branch_taken_0x267990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267990u;
            // 0x267994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267990) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267998u;
label_267998:
    // 0x267998: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x267998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26799c: 0xc0a1240  jal         func_284900
    ctx->pc = 0x26799Cu;
    SET_GPR_U32(ctx, 31, 0x2679A4u);
    ctx->pc = 0x2679A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26799Cu;
            // 0x2679a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2679A4u; }
        if (ctx->pc != 0x2679A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2679A4u; }
        if (ctx->pc != 0x2679A4u) { return; }
    }
    ctx->pc = 0x2679A4u;
label_2679a4:
    // 0x2679a4: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2679a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2679a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2679A8u;
    {
        const bool branch_taken_0x2679a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2679A8u;
            // 0x2679ac: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679a8) {
            ctx->pc = 0x2679B8u;
            goto label_2679b8;
        }
    }
    ctx->pc = 0x2679B0u;
    // 0x2679b0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2679B0u;
    {
        const bool branch_taken_0x2679b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2679B0u;
            // 0x2679b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679b0) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x2679B8u;
label_2679b8:
    // 0x2679b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2679b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679bc: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x2679BCu;
    SET_GPR_U32(ctx, 31, 0x2679C4u);
    ctx->pc = 0x2679C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2679BCu;
            // 0x2679c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2679C4u; }
        if (ctx->pc != 0x2679C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2679C4u; }
        if (ctx->pc != 0x2679C4u) { return; }
    }
    ctx->pc = 0x2679C4u;
label_2679c4:
    // 0x2679c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2679C4u;
    {
        const bool branch_taken_0x2679c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2679C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2679C4u;
            // 0x2679c8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679c4) {
            ctx->pc = 0x2679D4u;
            goto label_2679d4;
        }
    }
    ctx->pc = 0x2679CCu;
    // 0x2679cc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2679CCu;
    {
        const bool branch_taken_0x2679cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2679CCu;
            // 0x2679d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679cc) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x2679D4u;
label_2679d4:
    // 0x2679d4: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x2679d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2679d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2679D8u;
    {
        const bool branch_taken_0x2679d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2679D8u;
            // 0x2679dc: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679d8) {
            ctx->pc = 0x2679E8u;
            goto label_2679e8;
        }
    }
    ctx->pc = 0x2679E0u;
    // 0x2679e0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2679E0u;
    {
        const bool branch_taken_0x2679e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2679E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2679E0u;
            // 0x2679e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679e0) {
            ctx->pc = 0x267A68u;
            goto label_267a68;
        }
    }
    ctx->pc = 0x2679E8u;
label_2679e8:
    // 0x2679e8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2679e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2679ec: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x2679ECu;
    SET_GPR_U32(ctx, 31, 0x2679F4u);
    ctx->pc = 0x2679F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2679ECu;
            // 0x2679f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2679F4u; }
        if (ctx->pc != 0x2679F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2679F4u; }
        if (ctx->pc != 0x2679F4u) { return; }
    }
    ctx->pc = 0x2679F4u;
label_2679f4:
    // 0x2679f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2679F4u;
    {
        const bool branch_taken_0x2679f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2679F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2679F4u;
            // 0x2679f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679f4) {
            ctx->pc = 0x267A04u;
            goto label_267a04;
        }
    }
    ctx->pc = 0x2679FCu;
    // 0x2679fc: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x2679FCu;
    {
        const bool branch_taken_0x2679fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2679FCu;
            // 0x267a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679fc) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267A04u;
label_267a04:
    // 0x267a04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x267a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x267a08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x267a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x267a0c: 0x24a5c6d8  addiu       $a1, $a1, -0x3928
    ctx->pc = 0x267a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952664));
    // 0x267a10: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x267A10u;
    SET_GPR_U32(ctx, 31, 0x267A18u);
    ctx->pc = 0x267A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267A10u;
            // 0x267a14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A18u; }
        if (ctx->pc != 0x267A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A18u; }
        if (ctx->pc != 0x267A18u) { return; }
    }
    ctx->pc = 0x267A18u;
label_267a18:
    // 0x267a18: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x267a18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x267a1c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x267a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x267a20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267A20u;
    {
        const bool branch_taken_0x267a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267A20u;
            // 0x267a24: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a20) {
            ctx->pc = 0x267A34u;
            goto label_267a34;
        }
    }
    ctx->pc = 0x267A28u;
    // 0x267a28: 0x262401d8  addiu       $a0, $s1, 0x1D8
    ctx->pc = 0x267a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
    // 0x267a2c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x267A2Cu;
    SET_GPR_U32(ctx, 31, 0x267A34u);
    ctx->pc = 0x267A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267A2Cu;
            // 0x267a30: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A34u; }
        if (ctx->pc != 0x267A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A34u; }
        if (ctx->pc != 0x267A34u) { return; }
    }
    ctx->pc = 0x267A34u;
label_267a34:
    // 0x267a34: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x267a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x267a38: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x267a38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x267a3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x267a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x267a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a44: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x267a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a48: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x267a48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a4c: 0xc05d470  jal         func_1751C0
    ctx->pc = 0x267A4Cu;
    SET_GPR_U32(ctx, 31, 0x267A54u);
    ctx->pc = 0x267A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267A4Cu;
            // 0x267a50: 0x24e7c708  addiu       $a3, $a3, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A54u; }
        if (ctx->pc != 0x267A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A54u; }
        if (ctx->pc != 0x267A54u) { return; }
    }
    ctx->pc = 0x267A54u;
label_267a54:
    // 0x267a54: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x267a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x267a58: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x267A58u;
    {
        const bool branch_taken_0x267a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267A58u;
            // 0x267a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a58) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267A60u;
    // 0x267a60: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x267A60u;
    {
        const bool branch_taken_0x267a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267A60u;
            // 0x267a64: 0xa22001d8  sb          $zero, 0x1D8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a60) {
            ctx->pc = 0x267BB4u;
            goto label_267bb4;
        }
    }
    ctx->pc = 0x267A68u;
label_267a68:
    // 0x267a68: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x267a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a6c: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x267a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x267a70: 0xc098b9c  jal         func_262E70
    ctx->pc = 0x267A70u;
    SET_GPR_U32(ctx, 31, 0x267A78u);
    ctx->pc = 0x267A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267A70u;
            // 0x267a74: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262E70u;
    if (runtime->hasFunction(0x262E70u)) {
        auto targetFn = runtime->lookupFunction(0x262E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A78u; }
        if (ctx->pc != 0x267A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__LOAD_CHARA_sub__FiPPciPUi_0x262e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267A78u; }
        if (ctx->pc != 0x267A78u) { return; }
    }
    ctx->pc = 0x267A78u;
label_267a78:
    // 0x267a78: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267A78u;
    {
        const bool branch_taken_0x267a78 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x267A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267A78u;
            // 0x267a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a78) {
            ctx->pc = 0x267A88u;
            goto label_267a88;
        }
    }
    ctx->pc = 0x267A80u;
    // 0x267a80: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x267A80u;
    {
        const bool branch_taken_0x267a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267a80) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267A88u;
label_267a88:
    // 0x267a88: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x267A88u;
    {
        const bool branch_taken_0x267a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267A88u;
            // 0x267a8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a88) {
            ctx->pc = 0x267AF4u;
            goto label_267af4;
        }
    }
    ctx->pc = 0x267A90u;
    // 0x267a90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267a94: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x267A94u;
    {
        const bool branch_taken_0x267a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267A94u;
            // 0x267a98: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a94) {
            ctx->pc = 0x267AE0u;
            goto label_267ae0;
        }
    }
    ctx->pc = 0x267A9Cu;
    // 0x267a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267aa0: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267AA0u;
    {
        const bool branch_taken_0x267aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267AA0u;
            // 0x267aa4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267aa0) {
            ctx->pc = 0x267ACCu;
            goto label_267acc;
        }
    }
    ctx->pc = 0x267AA8u;
    // 0x267aa8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267AA8u;
    {
        const bool branch_taken_0x267aa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x267AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267AA8u;
            // 0x267aac: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267aa8) {
            ctx->pc = 0x267AB8u;
            goto label_267ab8;
        }
    }
    ctx->pc = 0x267AB0u;
    // 0x267ab0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x267AB0u;
    {
        const bool branch_taken_0x267ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267AB0u;
            // 0x267ab4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ab0) {
            ctx->pc = 0x267B54u;
            goto label_267b54;
        }
    }
    ctx->pc = 0x267AB8u;
label_267ab8:
    // 0x267ab8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x267ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x267abc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x267ABCu;
    SET_GPR_U32(ctx, 31, 0x267AC4u);
    ctx->pc = 0x267AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267ABCu;
            // 0x267ac0: 0x24a5c790  addiu       $a1, $a1, -0x3870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267AC4u; }
        if (ctx->pc != 0x267AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267AC4u; }
        if (ctx->pc != 0x267AC4u) { return; }
    }
    ctx->pc = 0x267AC4u;
label_267ac4:
    // 0x267ac4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x267AC4u;
    {
        const bool branch_taken_0x267ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267ac4) {
            ctx->pc = 0x267B50u;
            goto label_267b50;
        }
    }
    ctx->pc = 0x267ACCu;
label_267acc:
    // 0x267acc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x267accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x267ad0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x267AD0u;
    SET_GPR_U32(ctx, 31, 0x267AD8u);
    ctx->pc = 0x267AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267AD0u;
            // 0x267ad4: 0x24a5c798  addiu       $a1, $a1, -0x3868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267AD8u; }
        if (ctx->pc != 0x267AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267AD8u; }
        if (ctx->pc != 0x267AD8u) { return; }
    }
    ctx->pc = 0x267AD8u;
label_267ad8:
    // 0x267ad8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x267AD8u;
    {
        const bool branch_taken_0x267ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267ad8) {
            ctx->pc = 0x267B50u;
            goto label_267b50;
        }
    }
    ctx->pc = 0x267AE0u;
label_267ae0:
    // 0x267ae0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x267ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x267ae4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x267AE4u;
    SET_GPR_U32(ctx, 31, 0x267AECu);
    ctx->pc = 0x267AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267AE4u;
            // 0x267ae8: 0x24a5c7a8  addiu       $a1, $a1, -0x3858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267AECu; }
        if (ctx->pc != 0x267AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267AECu; }
        if (ctx->pc != 0x267AECu) { return; }
    }
    ctx->pc = 0x267AECu;
label_267aec:
    // 0x267aec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x267AECu;
    {
        const bool branch_taken_0x267aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267aec) {
            ctx->pc = 0x267B50u;
            goto label_267b50;
        }
    }
    ctx->pc = 0x267AF4u;
label_267af4:
    // 0x267af4: 0x16030016  bne         $s0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x267AF4u;
    {
        const bool branch_taken_0x267af4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x267AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267AF4u;
            // 0x267af8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267af4) {
            ctx->pc = 0x267B50u;
            goto label_267b50;
        }
    }
    ctx->pc = 0x267AFCu;
    // 0x267afc: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x267AFCu;
    {
        const bool branch_taken_0x267afc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x267B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267AFCu;
            // 0x267b00: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267afc) {
            ctx->pc = 0x267B44u;
            goto label_267b44;
        }
    }
    ctx->pc = 0x267B04u;
    // 0x267b04: 0x1223000a  beq         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x267B04u;
    {
        const bool branch_taken_0x267b04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x267B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B04u;
            // 0x267b08: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b04) {
            ctx->pc = 0x267B30u;
            goto label_267b30;
        }
    }
    ctx->pc = 0x267B0Cu;
    // 0x267b0c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x267B0Cu;
    {
        const bool branch_taken_0x267b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B0Cu;
            // 0x267b10: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b0c) {
            ctx->pc = 0x267B1Cu;
            goto label_267b1c;
        }
    }
    ctx->pc = 0x267B14u;
    // 0x267b14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x267B14u;
    {
        const bool branch_taken_0x267b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b14) {
            ctx->pc = 0x267B50u;
            goto label_267b50;
        }
    }
    ctx->pc = 0x267B1Cu;
label_267b1c:
    // 0x267b1c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x267b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x267b20: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x267B20u;
    SET_GPR_U32(ctx, 31, 0x267B28u);
    ctx->pc = 0x267B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267B20u;
            // 0x267b24: 0x24a5c7b0  addiu       $a1, $a1, -0x3850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B28u; }
        if (ctx->pc != 0x267B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B28u; }
        if (ctx->pc != 0x267B28u) { return; }
    }
    ctx->pc = 0x267B28u;
label_267b28:
    // 0x267b28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x267B28u;
    {
        const bool branch_taken_0x267b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b28) {
            ctx->pc = 0x267B50u;
            goto label_267b50;
        }
    }
    ctx->pc = 0x267B30u;
label_267b30:
    // 0x267b30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x267b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x267b34: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x267B34u;
    SET_GPR_U32(ctx, 31, 0x267B3Cu);
    ctx->pc = 0x267B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267B34u;
            // 0x267b38: 0x24a5c7c0  addiu       $a1, $a1, -0x3840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B3Cu; }
        if (ctx->pc != 0x267B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B3Cu; }
        if (ctx->pc != 0x267B3Cu) { return; }
    }
    ctx->pc = 0x267B3Cu;
label_267b3c:
    // 0x267b3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x267B3Cu;
    {
        const bool branch_taken_0x267b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267b3c) {
            ctx->pc = 0x267B50u;
            goto label_267b50;
        }
    }
    ctx->pc = 0x267B44u;
label_267b44:
    // 0x267b44: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x267b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x267b48: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x267B48u;
    SET_GPR_U32(ctx, 31, 0x267B50u);
    ctx->pc = 0x267B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267B48u;
            // 0x267b4c: 0x24a5c7c8  addiu       $a1, $a1, -0x3838 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B50u; }
        if (ctx->pc != 0x267B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B50u; }
        if (ctx->pc != 0x267B50u) { return; }
    }
    ctx->pc = 0x267B50u;
label_267b50:
    // 0x267b50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x267b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_267b54:
    // 0x267b54: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x267B54u;
    SET_GPR_U32(ctx, 31, 0x267B5Cu);
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B5Cu; }
        if (ctx->pc != 0x267B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B5Cu; }
        if (ctx->pc != 0x267B5Cu) { return; }
    }
    ctx->pc = 0x267B5Cu;
label_267b5c:
    // 0x267b5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267B5Cu;
    {
        const bool branch_taken_0x267b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B5Cu;
            // 0x267b60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b5c) {
            ctx->pc = 0x267B6Cu;
            goto label_267b6c;
        }
    }
    ctx->pc = 0x267B64u;
    // 0x267b64: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x267B64u;
    {
        const bool branch_taken_0x267b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B64u;
            // 0x267b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b64) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267B6Cu;
label_267b6c:
    // 0x267b6c: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x267b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x267b70: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267B70u;
    {
        const bool branch_taken_0x267b70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x267B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B70u;
            // 0x267b74: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b70) {
            ctx->pc = 0x267B80u;
            goto label_267b80;
        }
    }
    ctx->pc = 0x267B78u;
    // 0x267b78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x267B78u;
    {
        const bool branch_taken_0x267b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B78u;
            // 0x267b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b78) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267B80u;
label_267b80:
    // 0x267b80: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x267B80u;
    SET_GPR_U32(ctx, 31, 0x267B88u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B88u; }
        if (ctx->pc != 0x267B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267B88u; }
        if (ctx->pc != 0x267B88u) { return; }
    }
    ctx->pc = 0x267B88u;
label_267b88:
    // 0x267b88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267B88u;
    {
        const bool branch_taken_0x267b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267b88) {
            ctx->pc = 0x267B98u;
            goto label_267b98;
        }
    }
    ctx->pc = 0x267B90u;
    // 0x267b90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x267B90u;
    {
        const bool branch_taken_0x267b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B90u;
            // 0x267b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b90) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267B98u;
label_267b98:
    // 0x267b98: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x267b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x267b9c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267B9Cu;
    {
        const bool branch_taken_0x267b9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x267BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267B9Cu;
            // 0x267ba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267b9c) {
            ctx->pc = 0x267BACu;
            goto label_267bac;
        }
    }
    ctx->pc = 0x267BA4u;
    // 0x267ba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x267BA4u;
    {
        const bool branch_taken_0x267ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267BA4u;
            // 0x267ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ba4) {
            ctx->pc = 0x267BB8u;
            goto label_267bb8;
        }
    }
    ctx->pc = 0x267BACu;
label_267bac:
    // 0x267bac: 0xc04db0c  jal         func_136C30
    ctx->pc = 0x267BACu;
    SET_GPR_U32(ctx, 31, 0x267BB4u);
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267BB4u; }
        if (ctx->pc != 0x267BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267BB4u; }
        if (ctx->pc != 0x267BB4u) { return; }
    }
    ctx->pc = 0x267BB4u;
label_267bb4:
    // 0x267bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267bb8:
    // 0x267bb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x267bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_267bbc:
    // 0x267bbc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x267bbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267bc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x267bc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267bc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x267bc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x267bc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x267bc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267bcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267bd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x267BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267BDCu;
            // 0x267be0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267BE4u;
}
