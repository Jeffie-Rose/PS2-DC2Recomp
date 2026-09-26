#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgLoadTextureZ__FiP8TM2_head
// Address: 0x145400 - 0x1457e4
void mgLoadTextureZ__FiP8TM2_head_0x145400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgLoadTextureZ__FiP8TM2_head_0x145400");
#endif

    switch (ctx->pc) {
        case 0x145470u: goto label_145470;
        case 0x145594u: goto label_145594;
        case 0x145638u: goto label_145638;
        case 0x145640u: goto label_145640;
        case 0x145664u: goto label_145664;
        case 0x1456a4u: goto label_1456a4;
        case 0x1456e0u: goto label_1456e0;
        case 0x14571cu: goto label_14571c;
        case 0x145730u: goto label_145730;
        case 0x145744u: goto label_145744;
        case 0x145754u: goto label_145754;
        case 0x14575cu: goto label_14575c;
        case 0x145770u: goto label_145770;
        case 0x145778u: goto label_145778;
        case 0x145780u: goto label_145780;
        case 0x1457a8u: goto label_1457a8;
        case 0x1457b4u: goto label_1457b4;
        default: break;
    }

    ctx->pc = 0x145400u;

    // 0x145400: 0x27bdf8e0  addiu       $sp, $sp, -0x720
    ctx->pc = 0x145400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965472));
    // 0x145404: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x145404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x145408: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x145408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14540c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x145410: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x145410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x145414: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x145414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x145418: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x145418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14541c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x145420: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x145420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x145424: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x145424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x145428: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14542c: 0x8f918784  lw          $s1, -0x787C($gp)
    ctx->pc = 0x14542cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x145430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145434: 0x60000df  bltz        $s0, . + 4 + (0xDF << 2)
    ctx->pc = 0x145434u;
    {
        const bool branch_taken_0x145434 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x145438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145434u;
            // 0x145438: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145434) {
            ctx->pc = 0x1457B4u;
            goto label_1457b4;
        }
    }
    ctx->pc = 0x14543Cu;
    // 0x14543c: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x14543cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145440: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x145440u;
    {
        const bool branch_taken_0x145440 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x145444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145440u;
            // 0x145444: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145440) {
            ctx->pc = 0x145454u;
            goto label_145454;
        }
    }
    ctx->pc = 0x145448u;
    // 0x145448: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x145448u;
    {
        const bool branch_taken_0x145448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145448u;
            // 0x14544c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145448) {
            ctx->pc = 0x1457B8u;
            goto label_1457b8;
        }
    }
    ctx->pc = 0x145450u;
    // 0x145450: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x145450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_145454:
    // 0x145454: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x145454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x145458: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x145458u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14545c: 0x24422510  addiu       $v0, $v0, 0x2510
    ctx->pc = 0x14545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9488));
    // 0x145460: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x145460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x145464: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x145464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145468: 0xc04b12c  jal         func_12C4B0
    ctx->pc = 0x145468u;
    SET_GPR_U32(ctx, 31, 0x145470u);
    ctx->pc = 0x14546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145468u;
            // 0x14546c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C4B0u;
    if (runtime->hasFunction(0x12C4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12C4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145470u; }
        if (ctx->pc != 0x145470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCTextureFv_0x12c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145470u; }
        if (ctx->pc != 0x145470u) { return; }
    }
    ctx->pc = 0x145470u;
label_145470:
    // 0x145470: 0x96930024  lhu         $s3, 0x24($s4)
    ctx->pc = 0x145470u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x145474: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x145474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x145478: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x145478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x14547c: 0x96950026  lhu         $s5, 0x26($s4)
    ctx->pc = 0x14547cu;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 38)));
    // 0x145480: 0x166300cc  bne         $s3, $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x145480u;
    {
        const bool branch_taken_0x145480 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x145484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145480u;
            // 0x145484: 0x24170008  addiu       $s7, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145480) {
            ctx->pc = 0x1457B4u;
            goto label_1457b4;
        }
    }
    ctx->pc = 0x145488u;
    // 0x145488: 0x235082a  slt         $at, $s1, $s5
    ctx->pc = 0x145488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x14548c: 0x142000c9  bnez        $at, . + 4 + (0xC9 << 2)
    ctx->pc = 0x14548Cu;
    {
        const bool branch_taken_0x14548c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14548c) {
            ctx->pc = 0x1457B4u;
            goto label_1457b4;
        }
    }
    ctx->pc = 0x145494u;
    // 0x145494: 0x90a60013  lbu         $a2, 0x13($a1)
    ctx->pc = 0x145494u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x145498: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x145498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14549c: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14549Cu;
    {
        const bool branch_taken_0x14549c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1454A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14549Cu;
            // 0x1454a0: 0x2e0f02d  daddu       $fp, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14549c) {
            ctx->pc = 0x1454B0u;
            goto label_1454b0;
        }
    }
    ctx->pc = 0x1454A4u;
    // 0x1454a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1454a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1454a8: 0x14c300c2  bne         $a2, $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1454A8u;
    {
        const bool branch_taken_0x1454a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1454a8) {
            ctx->pc = 0x1457B4u;
            goto label_1457b4;
        }
    }
    ctx->pc = 0x1454B0u;
label_1454b0:
    // 0x1454b0: 0x94a4000c  lhu         $a0, 0xC($a1)
    ctx->pc = 0x1454b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1454b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1454b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1454b8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1454b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1454bc: 0x2414001b  addiu       $s4, $zero, 0x1B
    ctx->pc = 0x1454bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1454c0: 0xa4b021  addu        $s6, $a1, $a0
    ctx->pc = 0x1454c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1454c4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1454c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1454c8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1454c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1454cc: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1454CCu;
    {
        const bool branch_taken_0x1454cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1454D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1454CCu;
            // 0x1454d0: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454cc) {
            ctx->pc = 0x1454F4u;
            goto label_1454f4;
        }
    }
    ctx->pc = 0x1454D4u;
    // 0x1454d4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1454D4u;
    {
        const bool branch_taken_0x1454d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1454D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1454D4u;
            // 0x1454d8: 0x24140024  addiu       $s4, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454d4) {
            ctx->pc = 0x1454E8u;
            goto label_1454e8;
        }
    }
    ctx->pc = 0x1454DCu;
    // 0x1454dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1454DCu;
    {
        const bool branch_taken_0x1454dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1454DCu;
            // 0x1454e0: 0x2414002c  addiu       $s4, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454dc) {
            ctx->pc = 0x1454E8u;
            goto label_1454e8;
        }
    }
    ctx->pc = 0x1454E4u;
    // 0x1454e4: 0x24140024  addiu       $s4, $zero, 0x24
    ctx->pc = 0x1454e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1454e8:
    // 0x1454e8: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x1454e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1454ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1454ECu;
    {
        const bool branch_taken_0x1454ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1454ECu;
            // 0x1454f0: 0x24170009  addiu       $s7, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454ec) {
            ctx->pc = 0x145540u;
            goto label_145540;
        }
    }
    ctx->pc = 0x1454F4u;
label_1454f4:
    // 0x1454f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1454f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1454f8: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1454F8u;
    {
        const bool branch_taken_0x1454f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1454f8) {
            ctx->pc = 0x145540u;
            goto label_145540;
        }
    }
    ctx->pc = 0x145500u;
    // 0x145500: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145500u;
    {
        const bool branch_taken_0x145500 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x145504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145500u;
            // 0x145504: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145500) {
            ctx->pc = 0x145510u;
            goto label_145510;
        }
    }
    ctx->pc = 0x145508u;
    // 0x145508: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x145508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14550c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x14550cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_145510:
    // 0x145510: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x145510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x145514: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x145514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x145518: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145518u;
    {
        const bool branch_taken_0x145518 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14551Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145518u;
            // 0x14551c: 0x21a03  sra         $v1, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145518) {
            ctx->pc = 0x145528u;
            goto label_145528;
        }
    }
    ctx->pc = 0x145520u;
    // 0x145520: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x145520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x145524: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x145524u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_145528:
    // 0x145528: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x145528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x14552c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14552Cu;
    {
        const bool branch_taken_0x14552c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x145530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14552Cu;
            // 0x145530: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14552c) {
            ctx->pc = 0x145540u;
            goto label_145540;
        }
    }
    ctx->pc = 0x145534u;
    // 0x145534: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x145534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x145538: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x145538u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x14553c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x14553cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_145540:
    // 0x145540: 0x27b100d0  addiu       $s1, $sp, 0xD0
    ctx->pc = 0x145540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x145544: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x145544u;
    {
        const bool branch_taken_0x145544 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x145548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145544u;
            // 0x145548: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145544) {
            ctx->pc = 0x145558u;
            goto label_145558;
        }
    }
    ctx->pc = 0x14554Cu;
    // 0x14554c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14554Cu;
    {
        const bool branch_taken_0x14554c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14554c) {
            ctx->pc = 0x145558u;
            goto label_145558;
        }
    }
    ctx->pc = 0x145554u;
    // 0x145554: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x145554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_145558:
    // 0x145558: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x145558u;
    {
        const bool branch_taken_0x145558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145558) {
            ctx->pc = 0x145584u;
            goto label_145584;
        }
    }
    ctx->pc = 0x145560u;
    // 0x145560: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x145560u;
    {
        const bool branch_taken_0x145560 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x145564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145560u;
            // 0x145564: 0x32230003  andi        $v1, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145560) {
            ctx->pc = 0x145574u;
            goto label_145574;
        }
    }
    ctx->pc = 0x145568u;
    // 0x145568: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145568u;
    {
        const bool branch_taken_0x145568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14556Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145568u;
            // 0x14556c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145568) {
            ctx->pc = 0x145578u;
            goto label_145578;
        }
    }
    ctx->pc = 0x145570u;
    // 0x145570: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x145570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_145574:
    // 0x145574: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x145574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_145578:
    // 0x145578: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x145578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14557c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14557cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x145580: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x145580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_145584:
    // 0x145584: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x145584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x145588: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x145588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x14558c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x14558Cu;
    SET_GPR_U32(ctx, 31, 0x145594u);
    ctx->pc = 0x145590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14558Cu;
            // 0x145590: 0x24a526d8  addiu       $a1, $a1, 0x26D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145594u; }
        if (ctx->pc != 0x145594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145594u; }
        if (ctx->pc != 0x145594u) { return; }
    }
    ctx->pc = 0x145594u;
label_145594:
    // 0x145594: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x145594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x145598: 0xa6530002  sh          $s3, 0x2($s2)
    ctx->pc = 0x145598u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 19));
    // 0x14559c: 0x24703fe0  addiu       $s0, $v1, 0x3FE0
    ctx->pc = 0x14559cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16352));
    // 0x1455a0: 0xa6550004  sh          $s5, 0x4($s2)
    ctx->pc = 0x1455a0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 21));
    // 0x1455a4: 0xa65e0006  sh          $fp, 0x6($s2)
    ctx->pc = 0x1455a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 30));
    // 0x1455a8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1455a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1455ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1455acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1455b0: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1455b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1455b4: 0x36538  dsll        $t4, $v1, 20
    ctx->pc = 0x1455b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << 20);
    // 0x1455b8: 0x978d87e0  lhu         $t5, -0x7820($gp)
    ctx->pc = 0x1455b8u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x1455bc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1455bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1455c0: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x1455c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
    // 0x1455c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1455c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1455c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1455c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1455cc: 0x3417c  dsll32      $t0, $v1, 5
    ctx->pc = 0x1455ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1455d0: 0x257b8  dsll        $t2, $v0, 30
    ctx->pc = 0x1455d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << 30);
    // 0x1455d4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1455d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1455d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1455d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1455dc: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x1455dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1455e0: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x1455e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1455e4: 0x31a301ff  andi        $v1, $t5, 0x1FF
    ctx->pc = 0x1455e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)511);
    // 0x1455e8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1455ec: 0x36940  sll         $t5, $v1, 5
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1455f0: 0x3c0b2400  lui         $t3, 0x2400
    ctx->pc = 0x1455f0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)9216 << 16));
    // 0x1455f4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1455f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1455f8: 0x24060261  addiu       $a2, $zero, 0x261
    ctx->pc = 0x1455f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x1455fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1455fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145600: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x145600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
    // 0x145604: 0x6db821  addu        $s7, $v1, $t5
    ctx->pc = 0x145604u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x145608: 0x17183c  dsll32      $v1, $s7, 0
    ctx->pc = 0x145608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 0));
    // 0x14560c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x14560cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x145610: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x145610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x145614: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x145614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x145618: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x145618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x14561c: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x14561cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x145620: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x145620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x145624: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x145624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x145628: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x145628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x14562c: 0xfe420038  sd          $v0, 0x38($s2)
    ctx->pc = 0x14562cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 2));
    // 0x145630: 0xc04198c  jal         func_106630
    ctx->pc = 0x145630u;
    SET_GPR_U32(ctx, 31, 0x145638u);
    ctx->pc = 0x145634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145630u;
            // 0x145634: 0xfe460040  sd          $a2, 0x40($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106630u;
    if (runtime->hasFunction(0x106630u)) {
        auto targetFn = runtime->lookupFunction(0x106630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145638u; }
        if (ctx->pc != 0x145638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkInit_0x106630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145638u; }
        if (ctx->pc != 0x145638u) { return; }
    }
    ctx->pc = 0x145638u;
label_145638:
    // 0x145638: 0xc0410b0  jal         func_1042C0
    ctx->pc = 0x145638u;
    SET_GPR_U32(ctx, 31, 0x145640u);
    ctx->pc = 0x14563Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145638u;
            // 0x14563c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1042C0u;
    if (runtime->hasFunction(0x1042C0u)) {
        auto targetFn = runtime->lookupFunction(0x1042C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145640u; }
        if (ctx->pc != 0x145640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaGetChan_0x1042c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145640u; }
        if (ctx->pc != 0x145640u) { return; }
    }
    ctx->pc = 0x145640u;
label_145640:
    // 0x145640: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x145640u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145644: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x145644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x145648: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x145648u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x14564c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14564cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145650: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x145650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
    // 0x145654: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x145654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x145658: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x145658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x14565c: 0xc041990  jal         func_106640
    ctx->pc = 0x14565Cu;
    SET_GPR_U32(ctx, 31, 0x145664u);
    ctx->pc = 0x145660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14565Cu;
            // 0x145660: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106640u;
    if (runtime->hasFunction(0x106640u)) {
        auto targetFn = runtime->lookupFunction(0x106640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145664u; }
        if (ctx->pc != 0x145664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkReset_0x106640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145664u; }
        if (ctx->pc != 0x145664u) { return; }
    }
    ctx->pc = 0x145664u;
label_145664:
    // 0x145664: 0x2751018  mult        $v0, $s3, $s5
    ctx->pc = 0x145664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x145668: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x145668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x14566c: 0x32e5ffff  andi        $a1, $s7, 0xFFFF
    ctx->pc = 0x14566cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x145670: 0xffb50008  sd          $s5, 0x8($sp)
    ctx->pc = 0x145670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
    // 0x145674: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x145674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x145678: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x145678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14567c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14567Cu;
    {
        const bool branch_taken_0x14567c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x145680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14567Cu;
            // 0x145680: 0x24903  sra         $t1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14567c) {
            ctx->pc = 0x14568Cu;
            goto label_14568c;
        }
    }
    ctx->pc = 0x145684u;
    // 0x145684: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x145684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x145688: 0x24903  sra         $t1, $v0, 4
    ctx->pc = 0x145688u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 4));
label_14568c:
    // 0x14568c: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x14568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
    // 0x145690: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x145690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x145694: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x145694u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145698: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x145698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14569c: 0xc041a56  jal         func_106958
    ctx->pc = 0x14569Cu;
    SET_GPR_U32(ctx, 31, 0x1456A4u);
    ctx->pc = 0x1456A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14569Cu;
            // 0x1456a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106958u;
    if (runtime->hasFunction(0x106958u)) {
        auto targetFn = runtime->lookupFunction(0x106958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456A4u; }
        if (ctx->pc != 0x1456A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkRefLoadImage_0x106958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456A4u; }
        if (ctx->pc != 0x1456A4u) { return; }
    }
    ctx->pc = 0x1456A4u;
label_1456a4:
    // 0x1456a4: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1456a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1456a8: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1456A8u;
    {
        const bool branch_taken_0x1456a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1456a8) {
            ctx->pc = 0x1456E8u;
            goto label_1456e8;
        }
    }
    ctx->pc = 0x1456B0u;
    // 0x1456b0: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x1456b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1456b4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1456b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1456b8: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1456b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1456bc: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x1456bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
    // 0x1456c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1456c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1456c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1456c8: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1456c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1456cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1456ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1456d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456d4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1456d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1456d8: 0xc041a56  jal         func_106958
    ctx->pc = 0x1456D8u;
    SET_GPR_U32(ctx, 31, 0x1456E0u);
    ctx->pc = 0x1456DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1456D8u;
            // 0x1456dc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106958u;
    if (runtime->hasFunction(0x106958u)) {
        auto targetFn = runtime->lookupFunction(0x106958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456E0u; }
        if (ctx->pc != 0x1456E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkRefLoadImage_0x106958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456E0u; }
        if (ctx->pc != 0x1456E0u) { return; }
    }
    ctx->pc = 0x1456E0u;
label_1456e0:
    // 0x1456e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1456E0u;
    {
        const bool branch_taken_0x1456e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1456E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1456E0u;
            // 0x1456e4: 0x27a40710  addiu       $a0, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456e0) {
            ctx->pc = 0x145720u;
            goto label_145720;
        }
    }
    ctx->pc = 0x1456E8u;
label_1456e8:
    // 0x1456e8: 0x8fa800b0  lw          $t0, 0xB0($sp)
    ctx->pc = 0x1456e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1456ec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1456ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1456f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1456f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1456f4: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1456f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1456f8: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x1456f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
    // 0x1456fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1456fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145700: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x145700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145704: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x145704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x145708: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x145708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14570c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14570cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145710: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x145710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x145714: 0xc041a56  jal         func_106958
    ctx->pc = 0x145714u;
    SET_GPR_U32(ctx, 31, 0x14571Cu);
    ctx->pc = 0x145718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145714u;
            // 0x145718: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106958u;
    if (runtime->hasFunction(0x106958u)) {
        auto targetFn = runtime->lookupFunction(0x106958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14571Cu; }
        if (ctx->pc != 0x14571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkRefLoadImage_0x106958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14571Cu; }
        if (ctx->pc != 0x14571Cu) { return; }
    }
    ctx->pc = 0x14571Cu;
label_14571c:
    // 0x14571c: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x14571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
label_145720:
    // 0x145720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145728: 0xc0419aa  jal         func_1066A8
    ctx->pc = 0x145728u;
    SET_GPR_U32(ctx, 31, 0x145730u);
    ctx->pc = 0x14572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145728u;
            // 0x14572c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1066A8u;
    if (runtime->hasFunction(0x1066A8u)) {
        auto targetFn = runtime->lookupFunction(0x1066A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145730u; }
        if (ctx->pc != 0x145730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCnt_0x1066a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145730u; }
        if (ctx->pc != 0x145730u) { return; }
    }
    ctx->pc = 0x145730u;
label_145730:
    // 0x145730: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x145730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x145734: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x145734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x145738: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x145738u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14573c: 0xc041a12  jal         func_106848
    ctx->pc = 0x14573Cu;
    SET_GPR_U32(ctx, 31, 0x145744u);
    ctx->pc = 0x145740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14573Cu;
            // 0x145740: 0x27a40710  addiu       $a0, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145744u; }
        if (ctx->pc != 0x145744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkOpenGifTag_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145744u; }
        if (ctx->pc != 0x145744u) { return; }
    }
    ctx->pc = 0x145744u;
label_145744:
    // 0x145744: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x145744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
    // 0x145748: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x145748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x14574c: 0xc041a4c  jal         func_106930
    ctx->pc = 0x14574Cu;
    SET_GPR_U32(ctx, 31, 0x145754u);
    ctx->pc = 0x145750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14574Cu;
            // 0x145750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145754u; }
        if (ctx->pc != 0x145754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsAD_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145754u; }
        if (ctx->pc != 0x145754u) { return; }
    }
    ctx->pc = 0x145754u;
label_145754:
    // 0x145754: 0xc041a18  jal         func_106860
    ctx->pc = 0x145754u;
    SET_GPR_U32(ctx, 31, 0x14575Cu);
    ctx->pc = 0x145758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145754u;
            // 0x145758: 0x27a40710  addiu       $a0, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106860u;
    if (runtime->hasFunction(0x106860u)) {
        auto targetFn = runtime->lookupFunction(0x106860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14575Cu; }
        if (ctx->pc != 0x14575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x106860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14575Cu; }
        if (ctx->pc != 0x14575Cu) { return; }
    }
    ctx->pc = 0x14575Cu;
label_14575c:
    // 0x14575c: 0x27a40710  addiu       $a0, $sp, 0x710
    ctx->pc = 0x14575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
    // 0x145760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145764: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145768: 0xc0419ee  jal         func_1067B8
    ctx->pc = 0x145768u;
    SET_GPR_U32(ctx, 31, 0x145770u);
    ctx->pc = 0x14576Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145768u;
            // 0x14576c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1067B8u;
    if (runtime->hasFunction(0x1067B8u)) {
        auto targetFn = runtime->lookupFunction(0x1067B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145770u; }
        if (ctx->pc != 0x145770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkEnd_0x1067b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145770u; }
        if (ctx->pc != 0x145770u) { return; }
    }
    ctx->pc = 0x145770u;
label_145770:
    // 0x145770: 0xc041994  jal         func_106650
    ctx->pc = 0x145770u;
    SET_GPR_U32(ctx, 31, 0x145778u);
    ctx->pc = 0x145774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145770u;
            // 0x145774: 0x27a40710  addiu       $a0, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106650u;
    if (runtime->hasFunction(0x106650u)) {
        auto targetFn = runtime->lookupFunction(0x106650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145778u; }
        if (ctx->pc != 0x145778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkTerminate_0x106650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145778u; }
        if (ctx->pc != 0x145778u) { return; }
    }
    ctx->pc = 0x145778u;
label_145778:
    // 0x145778: 0xc0440d8  jal         func_110360
    ctx->pc = 0x145778u;
    SET_GPR_U32(ctx, 31, 0x145780u);
    ctx->pc = 0x14577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145778u;
            // 0x14577c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145780u; }
        if (ctx->pc != 0x145780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145780u; }
        if (ctx->pc != 0x145780u) { return; }
    }
    ctx->pc = 0x145780u;
label_145780:
    // 0x145780: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x145780u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145784: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x145784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x145788: 0x64030040  daddiu      $v1, $zero, 0x40
    ctx->pc = 0x145788u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
    // 0x14578c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x14578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x145790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x145790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x145794: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x145794u;
    {
        const bool branch_taken_0x145794 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x145798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145794u;
            // 0x145798: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145794) {
            ctx->pc = 0x1457A8u;
            goto label_1457a8;
        }
    }
    ctx->pc = 0x14579Cu;
    // 0x14579c: 0x8fa50714  lw          $a1, 0x714($sp)
    ctx->pc = 0x14579cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1812)));
    // 0x1457a0: 0xc041184  jal         func_104610
    ctx->pc = 0x1457A0u;
    SET_GPR_U32(ctx, 31, 0x1457A8u);
    ctx->pc = 0x1457A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457A0u;
            // 0x1457a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104610u;
    if (runtime->hasFunction(0x104610u)) {
        auto targetFn = runtime->lookupFunction(0x104610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457A8u; }
        if (ctx->pc != 0x1457A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x104610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457A8u; }
        if (ctx->pc != 0x1457A8u) { return; }
    }
    ctx->pc = 0x1457A8u;
label_1457a8:
    // 0x1457a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1457a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457ac: 0xc040ce6  jal         func_103398
    ctx->pc = 0x1457ACu;
    SET_GPR_U32(ctx, 31, 0x1457B4u);
    ctx->pc = 0x1457B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457ACu;
            // 0x1457b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103398u;
    if (runtime->hasFunction(0x103398u)) {
        auto targetFn = runtime->lookupFunction(0x103398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B4u; }
        if (ctx->pc != 0x1457B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x103398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B4u; }
        if (ctx->pc != 0x1457B4u) { return; }
    }
    ctx->pc = 0x1457B4u;
label_1457b4:
    // 0x1457b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1457b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1457b8:
    // 0x1457b8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1457b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1457bc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1457bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1457c0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1457c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1457c4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1457c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1457c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1457c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1457cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1457ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1457d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1457d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1457d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1457d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1457d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1457d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1457dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1457DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1457E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1457DCu;
            // 0x1457e0: 0x27bd0720  addiu       $sp, $sp, 0x720 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1457E4u;
}
