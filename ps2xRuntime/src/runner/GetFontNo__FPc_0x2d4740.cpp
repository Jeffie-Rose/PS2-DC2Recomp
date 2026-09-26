#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFontNo__FPc
// Address: 0x2d4740 - 0x2d4878
void GetFontNo__FPc_0x2d4740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFontNo__FPc_0x2d4740");
#endif

    switch (ctx->pc) {
        case 0x2d4774u: goto label_2d4774;
        case 0x2d4794u: goto label_2d4794;
        case 0x2d47e8u: goto label_2d47e8;
        default: break;
    }

    ctx->pc = 0x2d4740u;

    // 0x2d4740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d4744: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2d4744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d4748: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d4748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d474c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d474cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d4750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d4758: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2d4758u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d475c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D475Cu;
    {
        const bool branch_taken_0x2d475c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D4760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D475Cu;
            // 0x2d4760: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d475c) {
            ctx->pc = 0x2D476Cu;
            goto label_2d476c;
        }
    }
    ctx->pc = 0x2D4764u;
    // 0x2d4764: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2D4764u;
    {
        const bool branch_taken_0x2d4764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4764u;
            // 0x2d4768: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4764) {
            ctx->pc = 0x2D4860u;
            goto label_2d4860;
        }
    }
    ctx->pc = 0x2D476Cu;
label_2d476c:
    // 0x2d476c: 0xc0b50cc  jal         func_2D4330
    ctx->pc = 0x2D476Cu;
    SET_GPR_U32(ctx, 31, 0x2D4774u);
    ctx->pc = 0x2D4330u;
    if (runtime->hasFunction(0x2D4330u)) {
        auto targetFn = runtime->lookupFunction(0x2D4330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4774u; }
        if (ctx->pc != 0x2D4774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetYoyakuTblTop__Fv_0x2d4330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4774u; }
        if (ctx->pc != 0x2D4774u) { return; }
    }
    ctx->pc = 0x2D4774u;
label_2d4774:
    // 0x2d4774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d4774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4778: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2d4778u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2d477c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2d477cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d4780: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2d4780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d4784: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d4784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4788: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d4788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d478c: 0xc0b50f0  jal         func_2D43C0
    ctx->pc = 0x2D478Cu;
    SET_GPR_U32(ctx, 31, 0x2D4794u);
    ctx->pc = 0x2D4790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D478Cu;
            // 0x2d4790: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D43C0u;
    if (runtime->hasFunction(0x2D43C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D43C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4794u; }
        if (ctx->pc != 0x2D4794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetYoyakuTblNum__Fv_0x2d43c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4794u; }
        if (ctx->pc != 0x2D4794u) { return; }
    }
    ctx->pc = 0x2D4794u;
label_2d4794:
    // 0x2d4794: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2d4794u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4798: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x2d4798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2d479c: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x2d479cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2d47a0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2d47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2d47a4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d47a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d47a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2d47a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d47ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D47ACu;
    {
        const bool branch_taken_0x2d47ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D47B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D47ACu;
            // 0x2d47b0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47ac) {
            ctx->pc = 0x2D47BCu;
            goto label_2d47bc;
        }
    }
    ctx->pc = 0x2D47B4u;
    // 0x2d47b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2D47B4u;
    {
        const bool branch_taken_0x2d47b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D47B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D47B4u;
            // 0x2d47b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47b4) {
            ctx->pc = 0x2D4860u;
            goto label_2d4860;
        }
    }
    ctx->pc = 0x2D47BCu;
label_2d47bc:
    // 0x2d47bc: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x2d47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d47c0: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2d47c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d47c4: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2d47c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d47c8: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x2d47c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2d47cc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2d47ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2d47d0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d47d4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2d47d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d47d8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D47D8u;
    {
        const bool branch_taken_0x2d47d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D47DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D47D8u;
            // 0x2d47dc: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47d8) {
            ctx->pc = 0x2D47ECu;
            goto label_2d47ec;
        }
    }
    ctx->pc = 0x2D47E0u;
    // 0x2d47e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D47E0u;
    {
        const bool branch_taken_0x2d47e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D47E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D47E0u;
            // 0x2d47e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47e0) {
            ctx->pc = 0x2D4864u;
            goto label_2d4864;
        }
    }
    ctx->pc = 0x2D47E8u;
label_2d47e8:
    // 0x2d47e8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2d47e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2d47ec:
    // 0x2d47ec: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D47ECu;
    {
        const bool branch_taken_0x2d47ec = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2D47F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D47ECu;
            // 0x2d47f0: 0x43043  sra         $a2, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d47ec) {
            ctx->pc = 0x2D47FCu;
            goto label_2d47fc;
        }
    }
    ctx->pc = 0x2D47F4u;
    // 0x2d47f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d47f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d47f8: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x2d47f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
label_2d47fc:
    // 0x2d47fc: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x2d47fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2d4800: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2d4800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d4804: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2d4804u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4808: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x2d4808u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2d480c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2d480cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2d4810: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d4810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d4814: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2d4814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2d4818: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2d4818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d481c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D481Cu;
    {
        const bool branch_taken_0x2d481c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d481c) {
            ctx->pc = 0x2D482Cu;
            goto label_2d482c;
        }
    }
    ctx->pc = 0x2D4824u;
    // 0x2d4824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D4824u;
    {
        const bool branch_taken_0x2d4824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4824u;
            // 0x2d4828: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4824) {
            ctx->pc = 0x2D4850u;
            goto label_2d4850;
        }
    }
    ctx->pc = 0x2D482Cu;
label_2d482c:
    // 0x2d482c: 0x0  nop
    ctx->pc = 0x2d482cu;
    // NOP
    // 0x2d4830: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2d4830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d4834: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4834u;
    {
        const bool branch_taken_0x2d4834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4834u;
            // 0x2d4838: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4834) {
            ctx->pc = 0x2D4844u;
            goto label_2d4844;
        }
    }
    ctx->pc = 0x2D483Cu;
    // 0x2d483c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D483Cu;
    {
        const bool branch_taken_0x2d483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D483Cu;
            // 0x2d4840: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d483c) {
            ctx->pc = 0x2D4854u;
            goto label_2d4854;
        }
    }
    ctx->pc = 0x2D4844u;
label_2d4844:
    // 0x2d4844: 0x0  nop
    ctx->pc = 0x2d4844u;
    // NOP
    // 0x2d4848: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4848u;
    {
        const bool branch_taken_0x2d4848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4848u;
            // 0x2d484c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4848) {
            ctx->pc = 0x2D4860u;
            goto label_2d4860;
        }
    }
    ctx->pc = 0x2D4850u;
label_2d4850:
    // 0x2d4850: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2d4850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d4854:
    // 0x2d4854: 0x1444ffe4  bne         $v0, $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2D4854u;
    {
        const bool branch_taken_0x2d4854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2d4854) {
            ctx->pc = 0x2D47E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d47e8;
        }
    }
    ctx->pc = 0x2D485Cu;
    // 0x2d485c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d4860:
    // 0x2d4860: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d4860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d4864:
    // 0x2d4864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d4864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d4868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d486c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d486cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4870: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4870u;
            // 0x2d4874: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4878u;
}
