#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CVillagerMngrFv
// Address: 0x2cd5b0 - 0x2cda54
void Step__13CVillagerMngrFv_0x2cd5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CVillagerMngrFv_0x2cd5b0");
#endif

    switch (ctx->pc) {
        case 0x2cd5d8u: goto label_2cd5d8;
        case 0x2cd5e0u: goto label_2cd5e0;
        case 0x2cd780u: goto label_2cd780;
        case 0x2cd78cu: goto label_2cd78c;
        case 0x2cd7a0u: goto label_2cd7a0;
        case 0x2cd7b8u: goto label_2cd7b8;
        case 0x2cd80cu: goto label_2cd80c;
        case 0x2cd82cu: goto label_2cd82c;
        case 0x2cd878u: goto label_2cd878;
        case 0x2cd934u: goto label_2cd934;
        case 0x2cd93cu: goto label_2cd93c;
        case 0x2cd974u: goto label_2cd974;
        case 0x2cd980u: goto label_2cd980;
        case 0x2cd988u: goto label_2cd988;
        case 0x2cd9a0u: goto label_2cd9a0;
        case 0x2cd9dcu: goto label_2cd9dc;
        case 0x2cd9ecu: goto label_2cd9ec;
        default: break;
    }

    ctx->pc = 0x2cd5b0u;

    // 0x2cd5b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cd5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2cd5b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cd5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cd5b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cd5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cd5bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cd5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cd5c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cd5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cd5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cd5c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2cd5c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2cd5cc: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x2CD5CCu;
    {
        const bool branch_taken_0x2cd5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD5CCu;
            // 0x2cd5d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5cc) {
            ctx->pc = 0x2CDA24u;
            goto label_2cda24;
        }
    }
    ctx->pc = 0x2CD5D4u;
    // 0x2cd5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cd5d8:
    // 0x2cd5d8: 0xc0b34a4  jal         func_2CD290
    ctx->pc = 0x2CD5D8u;
    SET_GPR_U32(ctx, 31, 0x2CD5E0u);
    ctx->pc = 0x2CD5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD5D8u;
            // 0x2cd5dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD5E0u; }
        if (ctx->pc != 0x2CD5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD5E0u; }
        if (ctx->pc != 0x2CD5E0u) { return; }
    }
    ctx->pc = 0x2CD5E0u;
label_2cd5e0:
    // 0x2cd5e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cd5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd5e4: 0x1220010d  beqz        $s1, . + 4 + (0x10D << 2)
    ctx->pc = 0x2CD5E4u;
    {
        const bool branch_taken_0x2cd5e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd5e4) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD5ECu;
    // 0x2cd5ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cd5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cd5f0: 0x460010a  bltz        $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x2CD5F0u;
    {
        const bool branch_taken_0x2cd5f0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2cd5f0) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD5F8u;
    // 0x2cd5f8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2cd5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cd5fc: 0x10800107  beqz        $a0, . + 4 + (0x107 << 2)
    ctx->pc = 0x2CD5FCu;
    {
        const bool branch_taken_0x2cd5fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd5fc) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD604u;
    // 0x2cd604: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2cd604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2cd608: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CD608u;
    {
        const bool branch_taken_0x2cd608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd608) {
            ctx->pc = 0x2CD7D0u;
            goto label_2cd7d0;
        }
    }
    ctx->pc = 0x2CD610u;
    // 0x2cd610: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2cd610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2cd614: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x2cd614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2cd618: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x2CD618u;
    {
        const bool branch_taken_0x2cd618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd618) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD620u;
    // 0x2cd620: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2cd620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2cd624: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cd624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cd628: 0x24840220  addiu       $a0, $a0, 0x220
    ctx->pc = 0x2cd628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x2cd62c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cd630: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cd630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cd634: 0x600008  jr          $v1
    ctx->pc = 0x2CD634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CD63Cu: goto label_2cd63c;
            case 0x2CD660u: goto label_2cd660;
            case 0x2CD690u: goto label_2cd690;
            case 0x2CD6C8u: goto label_2cd6c8;
            case 0x2CD6ECu: goto label_2cd6ec;
            case 0x2CD704u: goto label_2cd704;
            case 0x2CD710u: goto label_2cd710;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CD63Cu;
label_2cd63c:
    // 0x2cd63c: 0x0  nop
    ctx->pc = 0x2cd63cu;
    // NOP
    // 0x2cd640: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd644: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x2cd644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x2cd648: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2cd648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cd64c: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2cd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2cd650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd654: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x2cd654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x2cd658: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2CD658u;
    {
        const bool branch_taken_0x2cd658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD658u;
            // 0x2cd65c: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd658) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD660u;
label_2cd660:
    // 0x2cd660: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cd660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd664: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2cd664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2cd668: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2cd668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2cd66c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CD66Cu;
    {
        const bool branch_taken_0x2cd66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd66c) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD674u;
    // 0x2cd674: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2cd674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cd678: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2cd678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd67c: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2cd67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2cd680: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cd680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cd684: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x2cd684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x2cd688: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2CD688u;
    {
        const bool branch_taken_0x2cd688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD688u;
            // 0x2cd68c: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd688) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD690u;
label_2cd690:
    // 0x2cd690: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2cd690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cd694: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2cd694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2cd698: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2cd698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2cd69c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2cd69cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cd6a0: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CD6A0u;
    {
        const bool branch_taken_0x2cd6a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6a0) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD6A8u;
    // 0x2cd6a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd6ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd6b0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2cd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x2cd6b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2cd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cd6b8: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x2cd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
    // 0x2cd6bc: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2cd6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2cd6c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2CD6C0u;
    {
        const bool branch_taken_0x2cd6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD6C0u;
            // 0x2cd6c4: 0xae240038  sw          $a0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6c0) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD6C8u;
label_2cd6c8:
    // 0x2cd6c8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2cd6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2cd6cc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CD6CCu;
    {
        const bool branch_taken_0x2cd6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6cc) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD6D4u;
    // 0x2cd6d4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2cd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cd6d8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2cd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x2cd6dc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2cd6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cd6e0: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x2cd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2cd6e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CD6E4u;
    {
        const bool branch_taken_0x2cd6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD6E4u;
            // 0x2cd6e8: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6e4) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD6ECu;
label_2cd6ec:
    // 0x2cd6ec: 0x0  nop
    ctx->pc = 0x2cd6ecu;
    // NOP
    // 0x2cd6f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2cd6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cd6f4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2cd6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x2cd6f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cd6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd6fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD6FCu;
    {
        const bool branch_taken_0x2cd6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD6FCu;
            // 0x2cd700: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6fc) {
            ctx->pc = 0x2CD710u;
            goto label_2cd710;
        }
    }
    ctx->pc = 0x2CD704u;
label_2cd704:
    // 0x2cd704: 0x0  nop
    ctx->pc = 0x2cd704u;
    // NOP
    // 0x2cd708: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2cd708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2cd70c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2cd70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2cd710:
    // 0x2cd710: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2cd710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2cd714: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cd714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cd718: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD718u;
    {
        const bool branch_taken_0x2cd718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd718) {
            ctx->pc = 0x2CD734u;
            goto label_2cd734;
        }
    }
    ctx->pc = 0x2CD720u;
    // 0x2cd720: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cd720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd724: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD724u;
    {
        const bool branch_taken_0x2cd724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd724) {
            ctx->pc = 0x2CD734u;
            goto label_2cd734;
        }
    }
    ctx->pc = 0x2CD72Cu;
    // 0x2cd72c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CD72Cu;
    {
        const bool branch_taken_0x2cd72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd72c) {
            ctx->pc = 0x2CD764u;
            goto label_2cd764;
        }
    }
    ctx->pc = 0x2CD734u;
label_2cd734:
    // 0x2cd734: 0x0  nop
    ctx->pc = 0x2cd734u;
    // NOP
    // 0x2cd738: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x2cd738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2cd73c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2cd73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cd740: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD740u;
    {
        const bool branch_taken_0x2cd740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd740) {
            ctx->pc = 0x2CD764u;
            goto label_2cd764;
        }
    }
    ctx->pc = 0x2CD748u;
    // 0x2cd748: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cd748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cd74c: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD74Cu;
    {
        const bool branch_taken_0x2cd74c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2cd74c) {
            ctx->pc = 0x2CD764u;
            goto label_2cd764;
        }
    }
    ctx->pc = 0x2CD754u;
    // 0x2cd754: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2cd754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cd758: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD758u;
    {
        const bool branch_taken_0x2cd758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd758) {
            ctx->pc = 0x2CD764u;
            goto label_2cd764;
        }
    }
    ctx->pc = 0x2CD760u;
    // 0x2cd760: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x2cd760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
label_2cd764:
    // 0x2cd764: 0x0  nop
    ctx->pc = 0x2cd764u;
    // NOP
    // 0x2cd768: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2cd768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2cd76c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CD76Cu;
    {
        const bool branch_taken_0x2cd76c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd76c) {
            ctx->pc = 0x2CD7BCu;
            goto label_2cd7bc;
        }
    }
    ctx->pc = 0x2CD774u;
    // 0x2cd774: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2cd774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cd778: 0xc0516cc  jal         func_145B30
    ctx->pc = 0x2CD778u;
    SET_GPR_U32(ctx, 31, 0x2CD780u);
    ctx->pc = 0x2CD77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD778u;
            // 0x2cd77c: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B30u;
    if (runtime->hasFunction(0x145B30u)) {
        auto targetFn = runtime->lookupFunction(0x145B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD780u; }
        if (ctx->pc != 0x2CD780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDirFromCamera__FPfPf_0x145b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD780u; }
        if (ctx->pc != 0x2CD780u) { return; }
    }
    ctx->pc = 0x2CD780u;
label_2cd780:
    // 0x2cd780: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x2cd780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2cd784: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2CD784u;
    SET_GPR_U32(ctx, 31, 0x2CD78Cu);
    ctx->pc = 0x2CD788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD784u;
            // 0x2cd788: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD78Cu; }
        if (ctx->pc != 0x2CD78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD78Cu; }
        if (ctx->pc != 0x2CD78Cu) { return; }
    }
    ctx->pc = 0x2CD78Cu;
label_2cd78c:
    // 0x2cd78c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2cd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2cd790: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2cd790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2cd794: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cd794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd798: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2CD798u;
    SET_GPR_U32(ctx, 31, 0x2CD7A0u);
    ctx->pc = 0x2CD79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD798u;
            // 0x2cd79c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD7A0u; }
        if (ctx->pc != 0x2CD7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD7A0u; }
        if (ctx->pc != 0x2CD7A0u) { return; }
    }
    ctx->pc = 0x2CD7A0u;
label_2cd7a0:
    // 0x2cd7a0: 0xc62c0064  lwc1        $f12, 0x64($s1)
    ctx->pc = 0x2cd7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cd7a4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2cd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2cd7a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2cd7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2cd7ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cd7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd7b0: 0xc04c2d8  jal         func_130B60
    ctx->pc = 0x2CD7B0u;
    SET_GPR_U32(ctx, 31, 0x2CD7B8u);
    ctx->pc = 0x2CD7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD7B0u;
            // 0x2cd7b4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD7B8u; }
        if (ctx->pc != 0x2CD7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD7B8u; }
        if (ctx->pc != 0x2CD7B8u) { return; }
    }
    ctx->pc = 0x2CD7B8u;
label_2cd7b8:
    // 0x2cd7b8: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x2cd7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_2cd7bc:
    // 0x2cd7bc: 0x0  nop
    ctx->pc = 0x2cd7bcu;
    // NOP
    // 0x2cd7c0: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2cd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2cd7c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cd7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cd7c8: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2CD7C8u;
    {
        const bool branch_taken_0x2cd7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD7C8u;
            // 0x2cd7cc: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7c8) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD7D0u;
label_2cd7d0:
    // 0x2cd7d0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2cd7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2cd7d4: 0x1c600091  bgtz        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x2CD7D4u;
    {
        const bool branch_taken_0x2cd7d4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2cd7d4) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD7DCu;
    // 0x2cd7dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2cd7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cd7e0: 0x1460008e  bnez        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x2CD7E0u;
    {
        const bool branch_taken_0x2cd7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7e0) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD7E8u;
    // 0x2cd7e8: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x2cd7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2cd7ec: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CD7ECu;
    {
        const bool branch_taken_0x2cd7ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7ec) {
            ctx->pc = 0x2CD85Cu;
            goto label_2cd85c;
        }
    }
    ctx->pc = 0x2CD7F4u;
    // 0x2cd7f4: 0xc48d000c  lwc1        $f13, 0xC($a0)
    ctx->pc = 0x2cd7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2cd7f8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2cd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2cd7fc: 0xc62c0064  lwc1        $f12, 0x64($s1)
    ctx->pc = 0x2cd7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cd800: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2cd800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2cd804: 0xc04c2d8  jal         func_130B60
    ctx->pc = 0x2CD804u;
    SET_GPR_U32(ctx, 31, 0x2CD80Cu);
    ctx->pc = 0x2CD808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD804u;
            // 0x2cd808: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD80Cu; }
        if (ctx->pc != 0x2CD80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD80Cu; }
        if (ctx->pc != 0x2CD80Cu) { return; }
    }
    ctx->pc = 0x2CD80Cu;
label_2cd80c:
    // 0x2cd80c: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x2cd80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2cd810: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2cd810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2cd814: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2cd814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cd818: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2cd818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2cd81c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2cd81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2cd820: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x2cd820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2cd824: 0xc04c344  jal         func_130D10
    ctx->pc = 0x2CD824u;
    SET_GPR_U32(ctx, 31, 0x2CD82Cu);
    ctx->pc = 0x2CD828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD824u;
            // 0x2cd828: 0xc62c0064  lwc1        $f12, 0x64($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD82Cu; }
        if (ctx->pc != 0x2CD82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD82Cu; }
        if (ctx->pc != 0x2CD82Cu) { return; }
    }
    ctx->pc = 0x2CD82Cu;
label_2cd82c:
    // 0x2cd82c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD82Cu;
    {
        const bool branch_taken_0x2cd82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd82c) {
            ctx->pc = 0x2CD850u;
            goto label_2cd850;
        }
    }
    ctx->pc = 0x2CD834u;
    // 0x2cd834: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2cd834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cd838: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x2cd838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2cd83c: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2cd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2cd840: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2cd840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cd844: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2cd844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd848: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x2CD848u;
    {
        const bool branch_taken_0x2cd848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD848u;
            // 0x2cd84c: 0xe6200064  swc1        $f0, 0x64($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd848) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD850u;
label_2cd850:
    // 0x2cd850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd854: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2CD854u;
    {
        const bool branch_taken_0x2cd854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD854u;
            // 0x2cd858: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd854) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD85Cu;
label_2cd85c:
    // 0x2cd85c: 0x0  nop
    ctx->pc = 0x2cd85cu;
    // NOP
    // 0x2cd860: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2cd860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2cd864: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2CD864u;
    {
        const bool branch_taken_0x2cd864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd864) {
            ctx->pc = 0x2CDA0Cu;
            goto label_2cda0c;
        }
    }
    ctx->pc = 0x2CD86Cu;
    // 0x2cd86c: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x2cd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
    // 0x2cd870: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2CD870u;
    {
        const bool branch_taken_0x2cd870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD870u;
            // 0x2cd874: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd870) {
            ctx->pc = 0x2CDA0Cu;
            goto label_2cda0c;
        }
    }
    ctx->pc = 0x2CD878u;
label_2cd878:
    // 0x2cd878: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2cd878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cd87c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd880: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CD880u;
    {
        const bool branch_taken_0x2cd880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd880) {
            ctx->pc = 0x2CD910u;
            goto label_2cd910;
        }
    }
    ctx->pc = 0x2CD888u;
    // 0x2cd888: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cd888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd88c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD88Cu;
    {
        const bool branch_taken_0x2cd88c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd88c) {
            ctx->pc = 0x2CD89Cu;
            goto label_2cd89c;
        }
    }
    ctx->pc = 0x2CD894u;
    // 0x2cd894: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2CD894u;
    {
        const bool branch_taken_0x2cd894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd894) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD89Cu;
label_2cd89c:
    // 0x2cd89c: 0x0  nop
    ctx->pc = 0x2cd89cu;
    // NOP
    // 0x2cd8a0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2cd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2cd8a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD8A4u;
    {
        const bool branch_taken_0x2cd8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd8a4) {
            ctx->pc = 0x2CD8B4u;
            goto label_2cd8b4;
        }
    }
    ctx->pc = 0x2CD8ACu;
    // 0x2cd8ac: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2cd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2cd8b0: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2cd8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_2cd8b4:
    // 0x2cd8b4: 0x0  nop
    ctx->pc = 0x2cd8b4u;
    // NOP
    // 0x2cd8b8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2cd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2cd8bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cd8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd8c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cd8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cd8c4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x2cd8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x2cd8c8: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x2cd8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2cd8cc: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x2cd8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2cd8d0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x2cd8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2cd8d4: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2cd8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2cd8d8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD8D8u;
    {
        const bool branch_taken_0x2cd8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CD8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD8D8u;
            // 0x2cd8dc: 0xa6282a  slt         $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8d8) {
            ctx->pc = 0x2CD8E8u;
            goto label_2cd8e8;
        }
    }
    ctx->pc = 0x2CD8E0u;
    // 0x2cd8e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD8E0u;
    {
        const bool branch_taken_0x2cd8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd8e0) {
            ctx->pc = 0x2CD8F8u;
            goto label_2cd8f8;
        }
    }
    ctx->pc = 0x2CD8E8u;
label_2cd8e8:
    // 0x2cd8e8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2cd8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2cd8ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD8ECu;
    {
        const bool branch_taken_0x2cd8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd8ec) {
            ctx->pc = 0x2CD8F8u;
            goto label_2cd8f8;
        }
    }
    ctx->pc = 0x2CD8F4u;
    // 0x2cd8f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cd8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd8f8:
    // 0x2cd8f8: 0x10a00048  beqz        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2CD8F8u;
    {
        const bool branch_taken_0x2cd8f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd8f8) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD900u;
    // 0x2cd900: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2cd900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cd904: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2cd904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x2cd908: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2CD908u;
    {
        const bool branch_taken_0x2cd908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD908u;
            // 0x2cd90c: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd908) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CD910u;
label_2cd910:
    // 0x2cd910: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2cd910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cd914: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2cd914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cd918: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2cd918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cd91c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x2cd91cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x2cd920: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x2cd920u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2cd924: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2cd924u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2cd928: 0xc6340064  lwc1        $f20, 0x64($s1)
    ctx->pc = 0x2cd928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd92c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2CD92Cu;
    SET_GPR_U32(ctx, 31, 0x2CD934u);
    ctx->pc = 0x2CD930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD92Cu;
            // 0x2cd930: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD934u; }
        if (ctx->pc != 0x2CD934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD934u; }
        if (ctx->pc != 0x2CD934u) { return; }
    }
    ctx->pc = 0x2CD934u;
label_2cd934:
    // 0x2cd934: 0xc04c000  jal         func_130000
    ctx->pc = 0x2CD934u;
    SET_GPR_U32(ctx, 31, 0x2CD93Cu);
    ctx->pc = 0x2CD938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD934u;
            // 0x2cd938: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130000u;
    if (runtime->hasFunction(0x130000u)) {
        auto targetFn = runtime->lookupFunction(0x130000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD93Cu; }
        if (ctx->pc != 0x2CD93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPf_0x130000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD93Cu; }
        if (ctx->pc != 0x2CD93Cu) { return; }
    }
    ctx->pc = 0x2CD93Cu;
label_2cd93c:
    // 0x2cd93c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2cd93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2cd940: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cd940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd944: 0x0  nop
    ctx->pc = 0x2cd944u;
    // NOP
    // 0x2cd948: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cd948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd94c: 0x0  nop
    ctx->pc = 0x2cd94cu;
    // NOP
    // 0x2cd950: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD950u;
    {
        const bool branch_taken_0x2cd950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd950) {
            ctx->pc = 0x2CD968u;
            goto label_2cd968;
        }
    }
    ctx->pc = 0x2CD958u;
    // 0x2cd958: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2cd958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2cd95c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cd95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd960: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2cd960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2cd964: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2cd964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_2cd968:
    // 0x2cd968: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2cd968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2cd96c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2CD96Cu;
    SET_GPR_U32(ctx, 31, 0x2CD974u);
    ctx->pc = 0x2CD970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD96Cu;
            // 0x2cd970: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD974u; }
        if (ctx->pc != 0x2CD974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD974u; }
        if (ctx->pc != 0x2CD974u) { return; }
    }
    ctx->pc = 0x2CD974u;
label_2cd974:
    // 0x2cd974: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x2cd974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2cd978: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2CD978u;
    SET_GPR_U32(ctx, 31, 0x2CD980u);
    ctx->pc = 0x2CD97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD978u;
            // 0x2cd97c: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD980u; }
        if (ctx->pc != 0x2CD980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD980u; }
        if (ctx->pc != 0x2CD980u) { return; }
    }
    ctx->pc = 0x2CD980u;
label_2cd980:
    // 0x2cd980: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2CD980u;
    SET_GPR_U32(ctx, 31, 0x2CD988u);
    ctx->pc = 0x2CD984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD980u;
            // 0x2cd984: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD988u; }
        if (ctx->pc != 0x2CD988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD988u; }
        if (ctx->pc != 0x2CD988u) { return; }
    }
    ctx->pc = 0x2CD988u;
label_2cd988:
    // 0x2cd988: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2cd988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2cd98c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cd98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd990: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2cd990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2cd994: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cd994u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2cd998: 0xc04c2d8  jal         func_130B60
    ctx->pc = 0x2CD998u;
    SET_GPR_U32(ctx, 31, 0x2CD9A0u);
    ctx->pc = 0x2CD99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD998u;
            // 0x2cd99c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD9A0u; }
        if (ctx->pc != 0x2CD9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD9A0u; }
        if (ctx->pc != 0x2CD9A0u) { return; }
    }
    ctx->pc = 0x2CD9A0u;
label_2cd9a0:
    // 0x2cd9a0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2cd9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cd9a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2cd9a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2cd9a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd9a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd9ac: 0xc44c002c  lwc1        $f12, 0x2C($v0)
    ctx->pc = 0x2cd9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cd9b0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2cd9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd9b4: 0x0  nop
    ctx->pc = 0x2cd9b4u;
    // NOP
    // 0x2cd9b8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD9B8u;
    {
        const bool branch_taken_0x2cd9b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd9b8) {
            ctx->pc = 0x2CD9CCu;
            goto label_2cd9cc;
        }
    }
    ctx->pc = 0x2CD9C0u;
    // 0x2cd9c0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2cd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2cd9c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2cd9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2cd9c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cd9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cd9cc:
    // 0x2cd9cc: 0x0  nop
    ctx->pc = 0x2cd9ccu;
    // NOP
    // 0x2cd9d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2cd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2cd9d4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2CD9D4u;
    SET_GPR_U32(ctx, 31, 0x2CD9DCu);
    ctx->pc = 0x2CD9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD9D4u;
            // 0x2cd9d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD9DCu; }
        if (ctx->pc != 0x2CD9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD9DCu; }
        if (ctx->pc != 0x2CD9DCu) { return; }
    }
    ctx->pc = 0x2CD9DCu;
label_2cd9dc:
    // 0x2cd9dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2cd9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cd9e0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2cd9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2cd9e4: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x2CD9E4u;
    SET_GPR_U32(ctx, 31, 0x2CD9ECu);
    ctx->pc = 0x2CD9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD9E4u;
            // 0x2cd9e8: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD9ECu; }
        if (ctx->pc != 0x2CD9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD9ECu; }
        if (ctx->pc != 0x2CD9ECu) { return; }
    }
    ctx->pc = 0x2CD9ECu;
label_2cd9ec:
    // 0x2cd9ec: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2cd9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2cd9f0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2cd9f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cd9f4: 0x7e230050  sq          $v1, 0x50($s1)
    ctx->pc = 0x2cd9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 3));
    // 0x2cd9f8: 0xe6340064  swc1        $f20, 0x64($s1)
    ctx->pc = 0x2cd9f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2cd9fc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2cd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2cda00: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2cda00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2cda04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDA04u;
    {
        const bool branch_taken_0x2cda04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDA04u;
            // 0x2cda08: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda04) {
            ctx->pc = 0x2CDA1Cu;
            goto label_2cda1c;
        }
    }
    ctx->pc = 0x2CDA0Cu;
label_2cda0c:
    // 0x2cda0c: 0x0  nop
    ctx->pc = 0x2cda0cu;
    // NOP
    // 0x2cda10: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x2cda10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2cda14: 0x14a0ff98  bnez        $a1, . + 4 + (-0x68 << 2)
    ctx->pc = 0x2CDA14u;
    {
        const bool branch_taken_0x2cda14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cda14) {
            ctx->pc = 0x2CD878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd878;
        }
    }
    ctx->pc = 0x2CDA1Cu;
label_2cda1c:
    // 0x2cda1c: 0x0  nop
    ctx->pc = 0x2cda1cu;
    // NOP
    // 0x2cda20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cda20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cda24:
    // 0x2cda24: 0x0  nop
    ctx->pc = 0x2cda24u;
    // NOP
    // 0x2cda28: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2cda28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2cda2c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2cda2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cda30: 0x1460fee9  bnez        $v1, . + 4 + (-0x117 << 2)
    ctx->pc = 0x2CDA30u;
    {
        const bool branch_taken_0x2cda30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDA30u;
            // 0x2cda34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda30) {
            ctx->pc = 0x2CD5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cd5d8;
        }
    }
    ctx->pc = 0x2CDA38u;
    // 0x2cda38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cda38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cda3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cda3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cda40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cda40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cda44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cda44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cda48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cda48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cda4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDA4Cu;
            // 0x2cda50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDA54u;
}
