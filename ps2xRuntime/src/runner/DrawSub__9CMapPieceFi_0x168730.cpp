#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawSub__9CMapPieceFi
// Address: 0x168730 - 0x168848
void DrawSub__9CMapPieceFi_0x168730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSub__9CMapPieceFi_0x168730");
#endif

    switch (ctx->pc) {
        case 0x16877cu: goto label_16877c;
        case 0x1687d8u: goto label_1687d8;
        case 0x1687e8u: goto label_1687e8;
        case 0x1687fcu: goto label_1687fc;
        default: break;
    }

    ctx->pc = 0x168730u;

    // 0x168730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x168730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x168734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16873c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x16873cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x168740: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168740u;
    {
        const bool branch_taken_0x168740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168740u;
            // 0x168744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168740) {
            ctx->pc = 0x168750u;
            goto label_168750;
        }
    }
    ctx->pc = 0x168748u;
    // 0x168748: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x168748u;
    {
        const bool branch_taken_0x168748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16874Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168748u;
            // 0x16874c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168748) {
            ctx->pc = 0x168838u;
            goto label_168838;
        }
    }
    ctx->pc = 0x168750u;
label_168750:
    // 0x168750: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x168750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x168754: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x168754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x168758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168758u;
    {
        const bool branch_taken_0x168758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168758u;
            // 0x16875c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168758) {
            ctx->pc = 0x168768u;
            goto label_168768;
        }
    }
    ctx->pc = 0x168760u;
    // 0x168760: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x168760u;
    {
        const bool branch_taken_0x168760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168760u;
            // 0x168764: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168760) {
            ctx->pc = 0x16883Cu;
            goto label_16883c;
        }
    }
    ctx->pc = 0x168768u;
label_168768:
    // 0x168768: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x168768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x16876c: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x16876Cu;
    {
        const bool branch_taken_0x16876c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x168770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16876Cu;
            // 0x168770: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16876c) {
            ctx->pc = 0x1687C8u;
            goto label_1687c8;
        }
    }
    ctx->pc = 0x168774u;
    // 0x168774: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x168774u;
    {
        const bool branch_taken_0x168774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168774u;
            // 0x168778: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168774) {
            ctx->pc = 0x1687B4u;
            goto label_1687b4;
        }
    }
    ctx->pc = 0x16877Cu;
label_16877c:
    // 0x16877c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x168780: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168780u;
    {
        const bool branch_taken_0x168780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168780) {
            ctx->pc = 0x1687A4u;
            goto label_1687a4;
        }
    }
    ctx->pc = 0x168788u;
    // 0x168788: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x168788u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16878c: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x16878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x168790: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x168790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x168794: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x168794u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x168798: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x168798u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x16879c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x16879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1687a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1687a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1687a4:
    // 0x1687a4: 0x0  nop
    ctx->pc = 0x1687a4u;
    // NOP
    // 0x1687a8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1687a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1687ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1687acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1687b0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1687b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_1687b4:
    // 0x1687b4: 0x0  nop
    ctx->pc = 0x1687b4u;
    // NOP
    // 0x1687b8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1687b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1687bc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1687bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1687c0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1687C0u;
    {
        const bool branch_taken_0x1687c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1687c0) {
            ctx->pc = 0x16877Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16877c;
        }
    }
    ctx->pc = 0x1687C8u;
label_1687c8:
    // 0x1687c8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1687C8u;
    {
        const bool branch_taken_0x1687c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1687C8u;
            // 0x1687cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687c8) {
            ctx->pc = 0x1687E0u;
            goto label_1687e0;
        }
    }
    ctx->pc = 0x1687D0u;
    // 0x1687d0: 0xc05a804  jal         func_16A010
    ctx->pc = 0x1687D0u;
    SET_GPR_U32(ctx, 31, 0x1687D8u);
    ctx->pc = 0x1687D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1687D0u;
            // 0x1687d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A010u;
    if (runtime->hasFunction(0x16A010u)) {
        auto targetFn = runtime->lookupFunction(0x16A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687D8u; }
        if (ctx->pc != 0x1687D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__12CObjectFrameFv_0x16a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687D8u; }
        if (ctx->pc != 0x1687D8u) { return; }
    }
    ctx->pc = 0x1687D8u;
label_1687d8:
    // 0x1687d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1687D8u;
    {
        const bool branch_taken_0x1687d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1687D8u;
            // 0x1687dc: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687d8) {
            ctx->pc = 0x1687ECu;
            goto label_1687ec;
        }
    }
    ctx->pc = 0x1687E0u;
label_1687e0:
    // 0x1687e0: 0xc05a7f4  jal         func_169FD0
    ctx->pc = 0x1687E0u;
    SET_GPR_U32(ctx, 31, 0x1687E8u);
    ctx->pc = 0x169FD0u;
    if (runtime->hasFunction(0x169FD0u)) {
        auto targetFn = runtime->lookupFunction(0x169FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687E8u; }
        if (ctx->pc != 0x1687E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CObjectFrameFv_0x169fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1687E8u; }
        if (ctx->pc != 0x1687E8u) { return; }
    }
    ctx->pc = 0x1687E8u;
label_1687e8:
    // 0x1687e8: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x1687e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1687ec:
    // 0x1687ec: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1687ECu;
    {
        const bool branch_taken_0x1687ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1687ECu;
            // 0x1687f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687ec) {
            ctx->pc = 0x168838u;
            goto label_168838;
        }
    }
    ctx->pc = 0x1687F4u;
    // 0x1687f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1687F4u;
    {
        const bool branch_taken_0x1687f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1687F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1687F4u;
            // 0x1687f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1687f4) {
            ctx->pc = 0x168824u;
            goto label_168824;
        }
    }
    ctx->pc = 0x1687FCu;
label_1687fc:
    // 0x1687fc: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1687fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x168800: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x168800u;
    {
        const bool branch_taken_0x168800 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x168804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168800u;
            // 0x168804: 0x9d1821  addu        $v1, $a0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168800) {
            ctx->pc = 0x168814u;
            goto label_168814;
        }
    }
    ctx->pc = 0x168808u;
    // 0x168808: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x168808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16880c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x16880cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168810: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x168810u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_168814:
    // 0x168814: 0x0  nop
    ctx->pc = 0x168814u;
    // NOP
    // 0x168818: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x168818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x16881c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16881cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x168820: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x168820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_168824:
    // 0x168824: 0x0  nop
    ctx->pc = 0x168824u;
    // NOP
    // 0x168828: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x168828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x16882c: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x16882cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168830: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x168830u;
    {
        const bool branch_taken_0x168830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168830) {
            ctx->pc = 0x1687FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1687fc;
        }
    }
    ctx->pc = 0x168838u;
label_168838:
    // 0x168838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16883c:
    // 0x16883c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16883cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168840: 0x3e00008  jr          $ra
    ctx->pc = 0x168840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168840u;
            // 0x168844: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168848u;
}
