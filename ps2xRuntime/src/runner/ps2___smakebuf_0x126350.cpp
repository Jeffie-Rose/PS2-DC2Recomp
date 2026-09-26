#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __smakebuf
// Address: 0x126350 - 0x1264a0
void ps2___smakebuf_0x126350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___smakebuf_0x126350");
#endif

    switch (ctx->pc) {
        case 0x1263a4u: goto label_1263a4;
        case 0x126418u: goto label_126418;
        case 0x126474u: goto label_126474;
        default: break;
    }

    ctx->pc = 0x126350u;

    // 0x126350: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x126350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x126354: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x126354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x126358: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x126358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x12635c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12635cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126360: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x126360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x126364: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x126364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x126368: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x126368u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12636c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x12636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x126370: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126370u;
    {
        const bool branch_taken_0x126370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126370u;
            // 0x126374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126370) {
            ctx->pc = 0x12638Cu;
            goto label_12638c;
        }
    }
    ctx->pc = 0x126378u;
    // 0x126378: 0x26030043  addiu       $v1, $s0, 0x43
    ctx->pc = 0x126378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x12637c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x12637cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x126380: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x126380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x126384: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x126384u;
    {
        const bool branch_taken_0x126384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126384u;
            // 0x126388: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126384) {
            ctx->pc = 0x126488u;
            goto label_126488;
        }
    }
    ctx->pc = 0x12638Cu;
label_12638c:
    // 0x12638c: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x12638cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x126390: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x126390u;
    {
        const bool branch_taken_0x126390 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x126394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126390u;
            // 0x126394: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126390) {
            ctx->pc = 0x1263B4u;
            goto label_1263b4;
        }
    }
    ctx->pc = 0x126398u;
    // 0x126398: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x126398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12639c: 0xc049744  jal         func_125D10
    ctx->pc = 0x12639Cu;
    SET_GPR_U32(ctx, 31, 0x1263A4u);
    ctx->pc = 0x1263A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12639Cu;
            // 0x1263a0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D10u;
    if (runtime->hasFunction(0x125D10u)) {
        auto targetFn = runtime->lookupFunction(0x125D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1263A4u; }
        if (ctx->pc != 0x1263A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _fstat_r_0x125d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1263A4u; }
        if (ctx->pc != 0x1263A4u) { return; }
    }
    ctx->pc = 0x1263A4u;
label_1263a4:
    // 0x1263a4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1263A4u;
    {
        const bool branch_taken_0x1263a4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1263A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263A4u;
            // 0x1263a8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263a4) {
            ctx->pc = 0x1263C4u;
            goto label_1263c4;
        }
    }
    ctx->pc = 0x1263ACu;
    // 0x1263ac: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1263acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1263b0: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x1263b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_1263b4:
    // 0x1263b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1263b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263b8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1263b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1263bc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1263BCu;
    {
        const bool branch_taken_0x1263bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263BCu;
            // 0x1263c0: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263bc) {
            ctx->pc = 0x12640Cu;
            goto label_12640c;
        }
    }
    ctx->pc = 0x1263C4u;
label_1263c4:
    // 0x1263c4: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x1263c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1263c8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1263c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1263cc: 0x3051f000  andi        $s1, $v0, 0xF000
    ctx->pc = 0x1263ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1263d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1263d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1263d4: 0x3a232000  xori        $v1, $s1, 0x2000
    ctx->pc = 0x1263d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8192);
    // 0x1263d8: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1263D8u;
    {
        const bool branch_taken_0x1263d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1263DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263D8u;
            // 0x1263dc: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263d8) {
            ctx->pc = 0x126400u;
            goto label_126400;
        }
    }
    ctx->pc = 0x1263E0u;
    // 0x1263e0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1263e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1263e4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1263e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1263e8: 0x24428a28  addiu       $v0, $v0, -0x75D8
    ctx->pc = 0x1263e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937128));
    // 0x1263ec: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1263ECu;
    {
        const bool branch_taken_0x1263ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1263F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263ECu;
            // 0x1263f0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263ec) {
            ctx->pc = 0x126404u;
            goto label_126404;
        }
    }
    ctx->pc = 0x1263F4u;
    // 0x1263f4: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x1263f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x1263f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1263F8u;
    {
        const bool branch_taken_0x1263f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1263FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1263F8u;
            // 0x1263fc: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1263f8) {
            ctx->pc = 0x126408u;
            goto label_126408;
        }
    }
    ctx->pc = 0x126400u;
label_126400:
    // 0x126400: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x126400u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_126404:
    // 0x126404: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x126404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_126408:
    // 0x126408: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x126408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_12640c:
    // 0x12640c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12640cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x126410: 0xc0499cc  jal         func_126730
    ctx->pc = 0x126410u;
    SET_GPR_U32(ctx, 31, 0x126418u);
    ctx->pc = 0x126414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126410u;
            // 0x126414: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126730u;
    if (runtime->hasFunction(0x126730u)) {
        auto targetFn = runtime->lookupFunction(0x126730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126418u; }
        if (ctx->pc != 0x126418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _malloc_r_0x126730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126418u; }
        if (ctx->pc != 0x126418u) { return; }
    }
    ctx->pc = 0x126418u;
label_126418:
    // 0x126418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12641c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12641Cu;
    {
        const bool branch_taken_0x12641c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x126420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12641Cu;
            // 0x126420: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12641c) {
            ctx->pc = 0x126444u;
            goto label_126444;
        }
    }
    ctx->pc = 0x126424u;
    // 0x126424: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x126424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x126428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12642c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x12642cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x126430: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x126430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x126434: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x126434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x126438: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x126438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12643c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12643Cu;
    {
        const bool branch_taken_0x12643c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12643Cu;
            // 0x126440: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12643c) {
            ctx->pc = 0x126488u;
            goto label_126488;
        }
    }
    ctx->pc = 0x126444u;
label_126444:
    // 0x126444: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x126444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x126448: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x126448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12644c: 0x24635798  addiu       $v1, $v1, 0x5798
    ctx->pc = 0x12644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22424));
    // 0x126450: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x126450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x126454: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x126454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x126458: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x126458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x12645c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x12645cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x126460: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x126460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x126464: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x126464u;
    {
        const bool branch_taken_0x126464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x126468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126464u;
            // 0x126468: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126464) {
            ctx->pc = 0x126488u;
            goto label_126488;
        }
    }
    ctx->pc = 0x12646Cu;
    // 0x12646c: 0xc044224  jal         func_110890
    ctx->pc = 0x12646Cu;
    SET_GPR_U32(ctx, 31, 0x126474u);
    ctx->pc = 0x126470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12646Cu;
            // 0x126470: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110890u;
    if (runtime->hasFunction(0x110890u)) {
        auto targetFn = runtime->lookupFunction(0x110890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126474u; }
        if (ctx->pc != 0x126474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isatty_0x110890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126474u; }
        if (ctx->pc != 0x126474u) { return; }
    }
    ctx->pc = 0x126474u;
label_126474:
    // 0x126474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126474u;
    {
        const bool branch_taken_0x126474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126474u;
            // 0x126478: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126474) {
            ctx->pc = 0x12648Cu;
            goto label_12648c;
        }
    }
    ctx->pc = 0x12647Cu;
    // 0x12647c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12647cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x126480: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x126480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x126484: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x126484u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_126488:
    // 0x126488: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x126488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_12648c:
    // 0x12648c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x12648cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x126490: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x126490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x126494: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x126494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x126498: 0x3e00008  jr          $ra
    ctx->pc = 0x126498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12649Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126498u;
            // 0x12649c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1264A0u;
}
