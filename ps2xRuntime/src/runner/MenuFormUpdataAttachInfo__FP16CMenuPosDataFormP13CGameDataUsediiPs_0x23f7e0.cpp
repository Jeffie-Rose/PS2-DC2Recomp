#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuFormUpdataAttachInfo__FP16CMenuPosDataFormP13CGameDataUsediiPs
// Address: 0x23f7e0 - 0x23fb14
void MenuFormUpdataAttachInfo__FP16CMenuPosDataFormP13CGameDataUsediiPs_0x23f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuFormUpdataAttachInfo__FP16CMenuPosDataFormP13CGameDataUsediiPs_0x23f7e0");
#endif

    switch (ctx->pc) {
        case 0x23f85cu: goto label_23f85c;
        case 0x23f8acu: goto label_23f8ac;
        case 0x23f8bcu: goto label_23f8bc;
        case 0x23f958u: goto label_23f958;
        case 0x23f96cu: goto label_23f96c;
        case 0x23f98cu: goto label_23f98c;
        case 0x23f9a0u: goto label_23f9a0;
        case 0x23f9acu: goto label_23f9ac;
        case 0x23f9d4u: goto label_23f9d4;
        case 0x23fa08u: goto label_23fa08;
        case 0x23fa30u: goto label_23fa30;
        case 0x23fa4cu: goto label_23fa4c;
        case 0x23fa78u: goto label_23fa78;
        case 0x23fa94u: goto label_23fa94;
        case 0x23fabcu: goto label_23fabc;
        default: break;
    }

    ctx->pc = 0x23f7e0u;

    // 0x23f7e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x23f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x23f7e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x23f7e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23f7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x23f7ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23f7f0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x23f7f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f7f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23f7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23f7f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23f7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23f800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23f800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23f804: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23f804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f80c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x23f80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23f814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f818: 0x122000b3  beqz        $s1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x23F818u;
    {
        const bool branch_taken_0x23f818 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F818u;
            // 0x23f81c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f818) {
            ctx->pc = 0x23FAE8u;
            goto label_23fae8;
        }
    }
    ctx->pc = 0x23F820u;
    // 0x23f820: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F820u;
    {
        const bool branch_taken_0x23f820 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f820) {
            ctx->pc = 0x23F830u;
            goto label_23f830;
        }
    }
    ctx->pc = 0x23F828u;
    // 0x23f828: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x23F828u;
    {
        const bool branch_taken_0x23f828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F828u;
            // 0x23f82c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f828) {
            ctx->pc = 0x23FAECu;
            goto label_23faec;
        }
    }
    ctx->pc = 0x23F830u;
label_23f830:
    // 0x23f830: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x23f830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23f834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f838: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F838u;
    {
        const bool branch_taken_0x23f838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f838) {
            ctx->pc = 0x23F84Cu;
            goto label_23f84c;
        }
    }
    ctx->pc = 0x23F840u;
    // 0x23f840: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23f840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f844: 0x148300a8  bne         $a0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x23F844u;
    {
        const bool branch_taken_0x23f844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f844) {
            ctx->pc = 0x23FAE8u;
            goto label_23fae8;
        }
    }
    ctx->pc = 0x23F84Cu;
label_23f84c:
    // 0x23f84c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f854: 0xc08a240  jal         func_228900
    ctx->pc = 0x23F854u;
    SET_GPR_U32(ctx, 31, 0x23F85Cu);
    ctx->pc = 0x23F858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F854u;
            // 0x23f858: 0x24a5ad30  addiu       $a1, $a1, -0x52D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F85Cu; }
        if (ctx->pc != 0x23F85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F85Cu; }
        if (ctx->pc != 0x23F85Cu) { return; }
    }
    ctx->pc = 0x23F85Cu;
label_23f85c:
    // 0x23f85c: 0x83829674  lb          $v0, -0x698C($gp)
    ctx->pc = 0x23f85cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940276)));
    // 0x23f860: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F860u;
    {
        const bool branch_taken_0x23f860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f860) {
            ctx->pc = 0x23F874u;
            goto label_23f874;
        }
    }
    ctx->pc = 0x23F868u;
    // 0x23f868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f86c: 0xa3809670  sb          $zero, -0x6990($gp)
    ctx->pc = 0x23f86cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940272), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f870: 0xa3829674  sb          $v0, -0x698C($gp)
    ctx->pc = 0x23f870u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940276), (uint8_t)GPR_U32(ctx, 2));
label_23f874:
    // 0x23f874: 0x83829670  lb          $v0, -0x6990($gp)
    ctx->pc = 0x23f874u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940272)));
    // 0x23f878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f87c: 0xa3829670  sb          $v0, -0x6990($gp)
    ctx->pc = 0x23f87cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940272), (uint8_t)GPR_U32(ctx, 2));
    // 0x23f880: 0x83829670  lb          $v0, -0x6990($gp)
    ctx->pc = 0x23f880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940272)));
    // 0x23f884: 0x2841003c  slti        $at, $v0, 0x3C
    ctx->pc = 0x23f884u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x23f888: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F888u;
    {
        const bool branch_taken_0x23f888 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f888) {
            ctx->pc = 0x23F894u;
            goto label_23f894;
        }
    }
    ctx->pc = 0x23F890u;
    // 0x23f890: 0xa3809670  sb          $zero, -0x6990($gp)
    ctx->pc = 0x23f890u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940272), (uint8_t)GPR_U32(ctx, 0));
label_23f894:
    // 0x23f894: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F894u;
    {
        const bool branch_taken_0x23f894 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F894u;
            // 0x23f898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f894) {
            ctx->pc = 0x23F8A4u;
            goto label_23f8a4;
        }
    }
    ctx->pc = 0x23F89Cu;
    // 0x23f89c: 0xa3809670  sb          $zero, -0x6990($gp)
    ctx->pc = 0x23f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940272), (uint8_t)GPR_U32(ctx, 0));
    // 0x23f8a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23f8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23f8a4:
    // 0x23f8a4: 0xc066384  jal         func_198E10
    ctx->pc = 0x23F8A4u;
    SET_GPR_U32(ctx, 31, 0x23F8ACu);
    ctx->pc = 0x23F8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F8A4u;
            // 0x23f8a8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198E10u;
    if (runtime->hasFunction(0x198E10u)) {
        auto targetFn = runtime->lookupFunction(0x198E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F8ACu; }
        if (ctx->pc != 0x23F8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatusParam__13CGameDataUsedFPs_0x198e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F8ACu; }
        if (ctx->pc != 0x23F8ACu) { return; }
    }
    ctx->pc = 0x23F8ACu;
label_23f8ac:
    // 0x23f8ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f8b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23f8bc:
    // 0x23f8bc: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x23f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x23f8c0: 0x244700b0  addiu       $a3, $v0, 0xB0
    ctx->pc = 0x23f8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x23f8c4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F8C4u;
    {
        const bool branch_taken_0x23f8c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F8C4u;
            // 0x23f8c8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8c4) {
            ctx->pc = 0x23F8E8u;
            goto label_23f8e8;
        }
    }
    ctx->pc = 0x23F8CCu;
    // 0x23f8cc: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x23f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x23f8d0: 0x84420090  lh          $v0, 0x90($v0)
    ctx->pc = 0x23f8d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x23f8d4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23f8d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f8d8: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x23F8D8u;
    {
        const bool branch_taken_0x23f8d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f8d8) {
            ctx->pc = 0x23F92Cu;
            goto label_23f92c;
        }
    }
    ctx->pc = 0x23F8E0u;
    // 0x23f8e0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23F8E0u;
    {
        const bool branch_taken_0x23f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F8E0u;
            // 0x23f8e4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8e0) {
            ctx->pc = 0x23F92Cu;
            goto label_23f92c;
        }
    }
    ctx->pc = 0x23F8E8u;
label_23f8e8:
    // 0x23f8e8: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x23f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x23f8ec: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x23f8ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f8f0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23f8f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f8f4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F8F4u;
    {
        const bool branch_taken_0x23f8f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f8f4) {
            ctx->pc = 0x23F914u;
            goto label_23f914;
        }
    }
    ctx->pc = 0x23F8FCu;
    // 0x23f8fc: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x23f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x23f900: 0x84420090  lh          $v0, 0x90($v0)
    ctx->pc = 0x23f900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x23f904: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23f904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f908: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F908u;
    {
        const bool branch_taken_0x23f908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f908) {
            ctx->pc = 0x23F914u;
            goto label_23f914;
        }
    }
    ctx->pc = 0x23F910u;
    // 0x23f910: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x23f910u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_23f914:
    // 0x23f914: 0x0  nop
    ctx->pc = 0x23f914u;
    // NOP
    // 0x23f918: 0x83829670  lb          $v0, -0x6990($gp)
    ctx->pc = 0x23f918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940272)));
    // 0x23f91c: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x23f91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x23f920: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23F920u;
    {
        const bool branch_taken_0x23f920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f920) {
            ctx->pc = 0x23F92Cu;
            goto label_23f92c;
        }
    }
    ctx->pc = 0x23F928u;
    // 0x23f928: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x23f928u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_23f92c:
    // 0x23f92c: 0x0  nop
    ctx->pc = 0x23f92cu;
    // NOP
    // 0x23f930: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23f934: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x23f934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x23f938: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x23f938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x23f93c: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x23F93Cu;
    {
        const bool branch_taken_0x23f93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F93Cu;
            // 0x23f940: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f93c) {
            ctx->pc = 0x23F8BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f8bc;
        }
    }
    ctx->pc = 0x23F944u;
    // 0x23f944: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x23f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x23f948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f94c: 0x8c250bf0  lw          $a1, 0xBF0($at)
    ctx->pc = 0x23f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3056)));
    // 0x23f950: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23F950u;
    SET_GPR_U32(ctx, 31, 0x23F958u);
    ctx->pc = 0x23F954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F950u;
            // 0x23f954: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F958u; }
        if (ctx->pc != 0x23F958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F958u; }
        if (ctx->pc != 0x23F958u) { return; }
    }
    ctx->pc = 0x23F958u;
label_23f958:
    // 0x23f958: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f960: 0x24a5ad38  addiu       $a1, $a1, -0x52C8
    ctx->pc = 0x23f960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946104));
    // 0x23f964: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23F964u;
    SET_GPR_U32(ctx, 31, 0x23F96Cu);
    ctx->pc = 0x23F968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F964u;
            // 0x23f968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F96Cu; }
        if (ctx->pc != 0x23F96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F96Cu; }
        if (ctx->pc != 0x23F96Cu) { return; }
    }
    ctx->pc = 0x23F96Cu;
label_23f96c:
    // 0x23f96c: 0x82620010  lb          $v0, 0x10($s3)
    ctx->pc = 0x23f96cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x23f970: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23f970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f974: 0x1446000b  bne         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x23F974u;
    {
        const bool branch_taken_0x23f974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x23F978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F974u;
            // 0x23f978: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f974) {
            ctx->pc = 0x23F9A4u;
            goto label_23f9a4;
        }
    }
    ctx->pc = 0x23F97Cu;
    // 0x23f97c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23f97cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23f980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f984: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23F984u;
    SET_GPR_U32(ctx, 31, 0x23F98Cu);
    ctx->pc = 0x23F988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F984u;
            // 0x23f988: 0x24a5ad38  addiu       $a1, $a1, -0x52C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F98Cu; }
        if (ctx->pc != 0x23F98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F98Cu; }
        if (ctx->pc != 0x23F98Cu) { return; }
    }
    ctx->pc = 0x23F98Cu;
label_23f98c:
    // 0x23f98c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x23f98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x23f990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f994: 0x8c250bf0  lw          $a1, 0xBF0($at)
    ctx->pc = 0x23f994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3056)));
    // 0x23f998: 0xc08968c  jal         func_225A30
    ctx->pc = 0x23F998u;
    SET_GPR_U32(ctx, 31, 0x23F9A0u);
    ctx->pc = 0x23F99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F998u;
            // 0x23f99c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F9A0u; }
        if (ctx->pc != 0x23F9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F9A0u; }
        if (ctx->pc != 0x23F9A0u) { return; }
    }
    ctx->pc = 0x23F9A0u;
label_23f9a0:
    // 0x23f9a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x23f9a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f9a4:
    // 0x23f9a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23f9a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23f9a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23f9ac:
    // 0x23f9ac: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x23f9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x23f9b0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x23f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x23f9b4: 0x24630bf0  addiu       $v1, $v1, 0xBF0
    ctx->pc = 0x23f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3056));
    // 0x23f9b8: 0x24550090  addiu       $s5, $v0, 0x90
    ctx->pc = 0x23f9b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x23f9bc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x23f9c0: 0x86a60000  lh          $a2, 0x0($s5)
    ctx->pc = 0x23f9c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x23f9c4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x23f9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23f9c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9cc: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23F9CCu;
    SET_GPR_U32(ctx, 31, 0x23F9D4u);
    ctx->pc = 0x23F9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F9CCu;
            // 0x23f9d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F9D4u; }
        if (ctx->pc != 0x23F9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F9D4u; }
        if (ctx->pc != 0x23F9D4u) { return; }
    }
    ctx->pc = 0x23F9D4u;
label_23f9d4:
    // 0x23f9d4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x23F9D4u;
    {
        const bool branch_taken_0x23f9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f9d4) {
            ctx->pc = 0x23FA08u;
            goto label_23fa08;
        }
    }
    ctx->pc = 0x23F9DCu;
    // 0x23f9dc: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x23f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x23f9e0: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x23f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x23f9e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F9E4u;
    {
        const bool branch_taken_0x23f9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f9e4) {
            ctx->pc = 0x23FA08u;
            goto label_23fa08;
        }
    }
    ctx->pc = 0x23F9ECu;
    // 0x23f9ec: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x23f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x23f9f0: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x23f9f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x23f9f4: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x23f9f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23f9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa00: 0xc089728  jal         func_225CA0
    ctx->pc = 0x23FA00u;
    SET_GPR_U32(ctx, 31, 0x23FA08u);
    ctx->pc = 0x23FA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA00u;
            // 0x23fa04: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA08u; }
        if (ctx->pc != 0x23FA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA08u; }
        if (ctx->pc != 0x23FA08u) { return; }
    }
    ctx->pc = 0x23FA08u;
label_23fa08:
    // 0x23fa08: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x23fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x23fa0c: 0x24420bc0  addiu       $v0, $v0, 0xBC0
    ctx->pc = 0x23fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3008));
    // 0x23fa10: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x23fa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23fa14: 0x53a821  addu        $s5, $v0, $s3
    ctx->pc = 0x23fa14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23fa18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23fa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa1c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x23fa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x23fa20: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23fa20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa24: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x23fa24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa28: 0xc089734  jal         func_225CD0
    ctx->pc = 0x23FA28u;
    SET_GPR_U32(ctx, 31, 0x23FA30u);
    ctx->pc = 0x23FA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA28u;
            // 0x23fa2c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA30u; }
        if (ctx->pc != 0x23FA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA30u; }
        if (ctx->pc != 0x23FA30u) { return; }
    }
    ctx->pc = 0x23FA30u;
label_23fa30:
    // 0x23fa30: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x23fa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23fa34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23fa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa3c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23fa3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa40: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x23fa40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa44: 0xc089734  jal         func_225CD0
    ctx->pc = 0x23FA44u;
    SET_GPR_U32(ctx, 31, 0x23FA4Cu);
    ctx->pc = 0x23FA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA44u;
            // 0x23fa48: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA4Cu; }
        if (ctx->pc != 0x23FA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA4Cu; }
        if (ctx->pc != 0x23FA4Cu) { return; }
    }
    ctx->pc = 0x23FA4Cu;
label_23fa4c:
    // 0x23fa4c: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x23fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x23fa50: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x23fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x23fa54: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23FA54u;
    {
        const bool branch_taken_0x23fa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fa54) {
            ctx->pc = 0x23FA94u;
            goto label_23fa94;
        }
    }
    ctx->pc = 0x23FA5Cu;
    // 0x23fa5c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x23fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x23fa60: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x23fa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x23fa64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23fa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa68: 0x240800a4  addiu       $t0, $zero, 0xA4
    ctx->pc = 0x23fa68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x23fa6c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23fa6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa70: 0xc089734  jal         func_225CD0
    ctx->pc = 0x23FA70u;
    SET_GPR_U32(ctx, 31, 0x23FA78u);
    ctx->pc = 0x23FA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA70u;
            // 0x23fa74: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA78u; }
        if (ctx->pc != 0x23FA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA78u; }
        if (ctx->pc != 0x23FA78u) { return; }
    }
    ctx->pc = 0x23FA78u;
label_23fa78:
    // 0x23fa78: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x23fa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x23fa7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23fa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23fa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa84: 0x240800a4  addiu       $t0, $zero, 0xA4
    ctx->pc = 0x23fa84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x23fa88: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x23fa88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa8c: 0xc089734  jal         func_225CD0
    ctx->pc = 0x23FA8Cu;
    SET_GPR_U32(ctx, 31, 0x23FA94u);
    ctx->pc = 0x23FA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FA8Cu;
            // 0x23fa90: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CD0u;
    if (runtime->hasFunction(0x225CD0u)) {
        auto targetFn = runtime->lookupFunction(0x225CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA94u; }
        if (ctx->pc != 0x23FA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartRGBA__16CMenuPosDataFormFPciiii_0x225cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FA94u; }
        if (ctx->pc != 0x23FA94u) { return; }
    }
    ctx->pc = 0x23FA94u;
label_23fa94:
    // 0x23fa94: 0x0  nop
    ctx->pc = 0x23fa94u;
    // NOP
    // 0x23fa98: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x23fa98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x23fa9c: 0x2ac2000a  slti        $v0, $s6, 0xA
    ctx->pc = 0x23fa9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x23faa0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x23faa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x23faa4: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x23FAA4u;
    {
        const bool branch_taken_0x23faa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAA4u;
            // 0x23faa8: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23faa4) {
            ctx->pc = 0x23F9ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23f9ac;
        }
    }
    ctx->pc = 0x23FAACu;
    // 0x23faac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23faacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23fab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fab4: 0xc089664  jal         func_225990
    ctx->pc = 0x23FAB4u;
    SET_GPR_U32(ctx, 31, 0x23FABCu);
    ctx->pc = 0x23FAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAB4u;
            // 0x23fab8: 0x24a5ad40  addiu       $a1, $a1, -0x52C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FABCu; }
        if (ctx->pc != 0x23FABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23FABCu; }
        if (ctx->pc != 0x23FABCu) { return; }
    }
    ctx->pc = 0x23FABCu;
label_23fabc:
    // 0x23fabc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FABCu;
    {
        const bool branch_taken_0x23fabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fabc) {
            ctx->pc = 0x23FAE8u;
            goto label_23fae8;
        }
    }
    ctx->pc = 0x23FAC4u;
    // 0x23fac4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fac8: 0x240300b9  addiu       $v1, $zero, 0xB9
    ctx->pc = 0x23fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x23facc: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x23faccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x23fad0: 0x16e30003  bne         $s7, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FAD0u;
    {
        const bool branch_taken_0x23fad0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x23FAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAD0u;
            // 0x23fad4: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fad0) {
            ctx->pc = 0x23FAE0u;
            goto label_23fae0;
        }
    }
    ctx->pc = 0x23FAD8u;
    // 0x23fad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23FAD8u;
    {
        const bool branch_taken_0x23fad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FAD8u;
            // 0x23fadc: 0xa0400005  sb          $zero, 0x5($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fad8) {
            ctx->pc = 0x23FAE8u;
            goto label_23fae8;
        }
    }
    ctx->pc = 0x23FAE0u;
label_23fae0:
    // 0x23fae0: 0xac570034  sw          $s7, 0x34($v0)
    ctx->pc = 0x23fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 23));
    // 0x23fae4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x23fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_23fae8:
    // 0x23fae8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23fae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23faec:
    // 0x23faec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23faecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23faf0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23faf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23faf4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23faf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23faf8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23faf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fafc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23fafcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fb00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23fb00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fb04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23fb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fb08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23FB0Cu;
            // 0x23fb10: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23FB14u;
}
