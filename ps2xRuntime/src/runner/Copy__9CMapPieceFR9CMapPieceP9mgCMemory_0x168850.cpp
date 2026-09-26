#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__9CMapPieceFR9CMapPieceP9mgCMemory
// Address: 0x168850 - 0x168ab8
void Copy__9CMapPieceFR9CMapPieceP9mgCMemory_0x168850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__9CMapPieceFR9CMapPieceP9mgCMemory_0x168850");
#endif

    switch (ctx->pc) {
        case 0x168850u: goto label_168850;
        case 0x168854u: goto label_168854;
        case 0x168858u: goto label_168858;
        case 0x16885cu: goto label_16885c;
        case 0x168860u: goto label_168860;
        case 0x168864u: goto label_168864;
        case 0x168868u: goto label_168868;
        case 0x16886cu: goto label_16886c;
        case 0x168870u: goto label_168870;
        case 0x168874u: goto label_168874;
        case 0x168878u: goto label_168878;
        case 0x16887cu: goto label_16887c;
        case 0x168880u: goto label_168880;
        case 0x168884u: goto label_168884;
        case 0x168888u: goto label_168888;
        case 0x16888cu: goto label_16888c;
        case 0x168890u: goto label_168890;
        case 0x168894u: goto label_168894;
        case 0x168898u: goto label_168898;
        case 0x16889cu: goto label_16889c;
        case 0x1688a0u: goto label_1688a0;
        case 0x1688a4u: goto label_1688a4;
        case 0x1688a8u: goto label_1688a8;
        case 0x1688acu: goto label_1688ac;
        case 0x1688b0u: goto label_1688b0;
        case 0x1688b4u: goto label_1688b4;
        case 0x1688b8u: goto label_1688b8;
        case 0x1688bcu: goto label_1688bc;
        case 0x1688c0u: goto label_1688c0;
        case 0x1688c4u: goto label_1688c4;
        case 0x1688c8u: goto label_1688c8;
        case 0x1688ccu: goto label_1688cc;
        case 0x1688d0u: goto label_1688d0;
        case 0x1688d4u: goto label_1688d4;
        case 0x1688d8u: goto label_1688d8;
        case 0x1688dcu: goto label_1688dc;
        case 0x1688e0u: goto label_1688e0;
        case 0x1688e4u: goto label_1688e4;
        case 0x1688e8u: goto label_1688e8;
        case 0x1688ecu: goto label_1688ec;
        case 0x1688f0u: goto label_1688f0;
        case 0x1688f4u: goto label_1688f4;
        case 0x1688f8u: goto label_1688f8;
        case 0x1688fcu: goto label_1688fc;
        case 0x168900u: goto label_168900;
        case 0x168904u: goto label_168904;
        case 0x168908u: goto label_168908;
        case 0x16890cu: goto label_16890c;
        case 0x168910u: goto label_168910;
        case 0x168914u: goto label_168914;
        case 0x168918u: goto label_168918;
        case 0x16891cu: goto label_16891c;
        case 0x168920u: goto label_168920;
        case 0x168924u: goto label_168924;
        case 0x168928u: goto label_168928;
        case 0x16892cu: goto label_16892c;
        case 0x168930u: goto label_168930;
        case 0x168934u: goto label_168934;
        case 0x168938u: goto label_168938;
        case 0x16893cu: goto label_16893c;
        case 0x168940u: goto label_168940;
        case 0x168944u: goto label_168944;
        case 0x168948u: goto label_168948;
        case 0x16894cu: goto label_16894c;
        case 0x168950u: goto label_168950;
        case 0x168954u: goto label_168954;
        case 0x168958u: goto label_168958;
        case 0x16895cu: goto label_16895c;
        case 0x168960u: goto label_168960;
        case 0x168964u: goto label_168964;
        case 0x168968u: goto label_168968;
        case 0x16896cu: goto label_16896c;
        case 0x168970u: goto label_168970;
        case 0x168974u: goto label_168974;
        case 0x168978u: goto label_168978;
        case 0x16897cu: goto label_16897c;
        case 0x168980u: goto label_168980;
        case 0x168984u: goto label_168984;
        case 0x168988u: goto label_168988;
        case 0x16898cu: goto label_16898c;
        case 0x168990u: goto label_168990;
        case 0x168994u: goto label_168994;
        case 0x168998u: goto label_168998;
        case 0x16899cu: goto label_16899c;
        case 0x1689a0u: goto label_1689a0;
        case 0x1689a4u: goto label_1689a4;
        case 0x1689a8u: goto label_1689a8;
        case 0x1689acu: goto label_1689ac;
        case 0x1689b0u: goto label_1689b0;
        case 0x1689b4u: goto label_1689b4;
        case 0x1689b8u: goto label_1689b8;
        case 0x1689bcu: goto label_1689bc;
        case 0x1689c0u: goto label_1689c0;
        case 0x1689c4u: goto label_1689c4;
        case 0x1689c8u: goto label_1689c8;
        case 0x1689ccu: goto label_1689cc;
        case 0x1689d0u: goto label_1689d0;
        case 0x1689d4u: goto label_1689d4;
        case 0x1689d8u: goto label_1689d8;
        case 0x1689dcu: goto label_1689dc;
        case 0x1689e0u: goto label_1689e0;
        case 0x1689e4u: goto label_1689e4;
        case 0x1689e8u: goto label_1689e8;
        case 0x1689ecu: goto label_1689ec;
        case 0x1689f0u: goto label_1689f0;
        case 0x1689f4u: goto label_1689f4;
        case 0x1689f8u: goto label_1689f8;
        case 0x1689fcu: goto label_1689fc;
        case 0x168a00u: goto label_168a00;
        case 0x168a04u: goto label_168a04;
        case 0x168a08u: goto label_168a08;
        case 0x168a0cu: goto label_168a0c;
        case 0x168a10u: goto label_168a10;
        case 0x168a14u: goto label_168a14;
        case 0x168a18u: goto label_168a18;
        case 0x168a1cu: goto label_168a1c;
        case 0x168a20u: goto label_168a20;
        case 0x168a24u: goto label_168a24;
        case 0x168a28u: goto label_168a28;
        case 0x168a2cu: goto label_168a2c;
        case 0x168a30u: goto label_168a30;
        case 0x168a34u: goto label_168a34;
        case 0x168a38u: goto label_168a38;
        case 0x168a3cu: goto label_168a3c;
        case 0x168a40u: goto label_168a40;
        case 0x168a44u: goto label_168a44;
        case 0x168a48u: goto label_168a48;
        case 0x168a4cu: goto label_168a4c;
        case 0x168a50u: goto label_168a50;
        case 0x168a54u: goto label_168a54;
        case 0x168a58u: goto label_168a58;
        case 0x168a5cu: goto label_168a5c;
        case 0x168a60u: goto label_168a60;
        case 0x168a64u: goto label_168a64;
        case 0x168a68u: goto label_168a68;
        case 0x168a6cu: goto label_168a6c;
        case 0x168a70u: goto label_168a70;
        case 0x168a74u: goto label_168a74;
        case 0x168a78u: goto label_168a78;
        case 0x168a7cu: goto label_168a7c;
        case 0x168a80u: goto label_168a80;
        case 0x168a84u: goto label_168a84;
        case 0x168a88u: goto label_168a88;
        case 0x168a8cu: goto label_168a8c;
        case 0x168a90u: goto label_168a90;
        case 0x168a94u: goto label_168a94;
        case 0x168a98u: goto label_168a98;
        case 0x168a9cu: goto label_168a9c;
        case 0x168aa0u: goto label_168aa0;
        case 0x168aa4u: goto label_168aa4;
        case 0x168aa8u: goto label_168aa8;
        case 0x168aacu: goto label_168aac;
        case 0x168ab0u: goto label_168ab0;
        case 0x168ab4u: goto label_168ab4;
        default: break;
    }

    ctx->pc = 0x168850u;

label_168850:
    // 0x168850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_168854:
    // 0x168854: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x168854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_168858:
    // 0x168858: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16885c:
    // 0x16885c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_168860:
    // 0x168860: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x168860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168864:
    // 0x168864: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_168868:
    // 0x168868: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x168868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16886c:
    // 0x16886c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_168870:
    // 0x168870: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x168870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_168874:
    // 0x168874: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x168874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_168878:
    // 0x168878: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x168878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_16887c:
    // 0x16887c: 0x320f809  jalr        $t9
label_168880:
    if (ctx->pc == 0x168880u) {
        ctx->pc = 0x168880u;
            // 0x168880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168884u;
        goto label_168884;
    }
    ctx->pc = 0x16887Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168884u);
        ctx->pc = 0x168880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16887Cu;
            // 0x168880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168884u; }
            if (ctx->pc != 0x168884u) { return; }
        }
        }
    }
    ctx->pc = 0x168884u;
label_168884:
    // 0x168884: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x168884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_168888:
    // 0x168888: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x168888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16888c:
    // 0x16888c: 0xc05a814  jal         func_16A050
label_168890:
    if (ctx->pc == 0x168890u) {
        ctx->pc = 0x168890u;
            // 0x168890: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168894u;
        goto label_168894;
    }
    ctx->pc = 0x16888Cu;
    SET_GPR_U32(ctx, 31, 0x168894u);
    ctx->pc = 0x168890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16888Cu;
            // 0x168890: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A050u;
    if (runtime->hasFunction(0x16A050u)) {
        auto targetFn = runtime->lookupFunction(0x16A050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168894u; }
        if (ctx->pc != 0x168894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy__12CObjectFrameFR12CObjectFrameP9mgCMemory_0x16a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168894u; }
        if (ctx->pc != 0x168894u) { return; }
    }
    ctx->pc = 0x168894u;
label_168894:
    // 0x168894: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x168894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_168898:
    // 0x168898: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x168898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_16889c:
    // 0x16889c: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x16889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_1688a0:
    // 0x1688a0: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x1688a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
label_1688a4:
    // 0x1688a4: 0x8e630088  lw          $v1, 0x88($s3)
    ctx->pc = 0x1688a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
label_1688a8:
    // 0x1688a8: 0xae430088  sw          $v1, 0x88($s2)
    ctx->pc = 0x1688a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 3));
label_1688ac:
    // 0x1688ac: 0x866300a0  lh          $v1, 0xA0($s3)
    ctx->pc = 0x1688acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 160)));
label_1688b0:
    // 0x1688b0: 0xa64300a0  sh          $v1, 0xA0($s2)
    ctx->pc = 0x1688b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 160), (uint16_t)GPR_U32(ctx, 3));
label_1688b4:
    // 0x1688b4: 0xc6600094  lwc1        $f0, 0x94($s3)
    ctx->pc = 0x1688b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1688b8:
    // 0x1688b8: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x1688b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
label_1688bc:
    // 0x1688bc: 0xc6600098  lwc1        $f0, 0x98($s3)
    ctx->pc = 0x1688bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1688c0:
    // 0x1688c0: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x1688c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
label_1688c4:
    // 0x1688c4: 0x8e63008c  lw          $v1, 0x8C($s3)
    ctx->pc = 0x1688c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1688c8:
    // 0x1688c8: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_1688cc:
    if (ctx->pc == 0x1688CCu) {
        ctx->pc = 0x1688CCu;
            // 0x1688cc: 0xae43008c  sw          $v1, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
        ctx->pc = 0x1688D0u;
        goto label_1688d0;
    }
    ctx->pc = 0x1688C8u;
    {
        const bool branch_taken_0x1688c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1688CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1688C8u;
            // 0x1688cc: 0xae43008c  sw          $v1, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688c8) {
            ctx->pc = 0x1688DCu;
            goto label_1688dc;
        }
    }
    ctx->pc = 0x1688D0u;
label_1688d0:
    // 0x1688d0: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x1688d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_1688d4:
    // 0x1688d4: 0x10000038  b           . + 4 + (0x38 << 2)
label_1688d8:
    if (ctx->pc == 0x1688D8u) {
        ctx->pc = 0x1688D8u;
            // 0x1688d8: 0xae430090  sw          $v1, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
        ctx->pc = 0x1688DCu;
        goto label_1688dc;
    }
    ctx->pc = 0x1688D4u;
    {
        const bool branch_taken_0x1688d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1688D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1688D4u;
            // 0x1688d8: 0xae430090  sw          $v1, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688d4) {
            ctx->pc = 0x1689B8u;
            goto label_1689b8;
        }
    }
    ctx->pc = 0x1688DCu;
label_1688dc:
    // 0x1688dc: 0x8e70008c  lw          $s0, 0x8C($s3)
    ctx->pc = 0x1688dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
label_1688e0:
    // 0x1688e0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1688e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_1688e4:
    // 0x1688e4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1688e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1688e8:
    // 0x1688e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1688ec:
    if (ctx->pc == 0x1688ECu) {
        ctx->pc = 0x1688ECu;
            // 0x1688ec: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1688F0u;
        goto label_1688f0;
    }
    ctx->pc = 0x1688E8u;
    {
        const bool branch_taken_0x1688e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1688ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1688E8u;
            // 0x1688ec: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688e8) {
            ctx->pc = 0x1688F8u;
            goto label_1688f8;
        }
    }
    ctx->pc = 0x1688F0u;
label_1688f0:
    // 0x1688f0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1688f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1688f4:
    // 0x1688f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1688f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1688f8:
    // 0x1688f8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1688f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_1688fc:
    // 0x1688fc: 0xc04e748  jal         func_139D20
label_168900:
    if (ctx->pc == 0x168900u) {
        ctx->pc = 0x168900u;
            // 0x168900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168904u;
        goto label_168904;
    }
    ctx->pc = 0x1688FCu;
    SET_GPR_U32(ctx, 31, 0x168904u);
    ctx->pc = 0x168900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1688FCu;
            // 0x168900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168904u; }
        if (ctx->pc != 0x168904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168904u; }
        if (ctx->pc != 0x168904u) { return; }
    }
    ctx->pc = 0x168904u;
label_168904:
    // 0x168904: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x168904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_168908:
    // 0x168908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16890c:
    // 0x16890c: 0xc04e63c  jal         func_1398F0
label_168910:
    if (ctx->pc == 0x168910u) {
        ctx->pc = 0x168910u;
            // 0x168910: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x168914u;
        goto label_168914;
    }
    ctx->pc = 0x16890Cu;
    SET_GPR_U32(ctx, 31, 0x168914u);
    ctx->pc = 0x168910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16890Cu;
            // 0x168910: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168914u; }
        if (ctx->pc != 0x168914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168914u; }
        if (ctx->pc != 0x168914u) { return; }
    }
    ctx->pc = 0x168914u;
label_168914:
    // 0x168914: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x168914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
label_168918:
    // 0x168918: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x168918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16891c:
    // 0x16891c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168920:
    // 0x168920: 0x24a52760  addiu       $a1, $a1, 0x2760
    ctx->pc = 0x168920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10080));
label_168924:
    // 0x168924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x168924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168928:
    // 0x168928: 0xc0400bc  jal         func_1002F0
label_16892c:
    if (ctx->pc == 0x16892Cu) {
        ctx->pc = 0x16892Cu;
            // 0x16892c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x168930u;
        goto label_168930;
    }
    ctx->pc = 0x168928u;
    SET_GPR_U32(ctx, 31, 0x168930u);
    ctx->pc = 0x16892Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168928u;
            // 0x16892c: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168930u; }
        if (ctx->pc != 0x168930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168930u; }
        if (ctx->pc != 0x168930u) { return; }
    }
    ctx->pc = 0x168930u;
label_168930:
    // 0x168930: 0xae420090  sw          $v0, 0x90($s2)
    ctx->pc = 0x168930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
label_168934:
    // 0x168934: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x168934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_168938:
    // 0x168938: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_16893c:
    if (ctx->pc == 0x16893Cu) {
        ctx->pc = 0x16893Cu;
            // 0x16893c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168940u;
        goto label_168940;
    }
    ctx->pc = 0x168938u;
    {
        const bool branch_taken_0x168938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16893Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168938u;
            // 0x16893c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168938) {
            ctx->pc = 0x168944u;
            goto label_168944;
        }
    }
    ctx->pc = 0x168940u;
label_168940:
    // 0x168940: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x168940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
label_168944:
    // 0x168944: 0x10000017  b           . + 4 + (0x17 << 2)
label_168948:
    if (ctx->pc == 0x168948u) {
        ctx->pc = 0x168948u;
            // 0x168948: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16894Cu;
        goto label_16894c;
    }
    ctx->pc = 0x168944u;
    {
        const bool branch_taken_0x168944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168944u;
            // 0x168948: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168944) {
            ctx->pc = 0x1689A4u;
            goto label_1689a4;
        }
    }
    ctx->pc = 0x16894Cu;
label_16894c:
    // 0x16894c: 0x8e640090  lw          $a0, 0x90($s3)
    ctx->pc = 0x16894cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_168950:
    // 0x168950: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x168950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_168954:
    // 0x168954: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x168954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_168958:
    // 0x168958: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x168958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_16895c:
    // 0x16895c: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x16895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_168960:
    // 0x168960: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x168960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_168964:
    // 0x168964: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x168964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_168968:
    // 0x168968: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x168968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_16896c:
    // 0x16896c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x16896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_168970:
    // 0x168970: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x168970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_168974:
    // 0x168974: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x168974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_168978:
    // 0x168978: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x168978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_16897c:
    // 0x16897c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x16897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_168980:
    // 0x168980: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x168980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_168984:
    // 0x168984: 0xc4c30010  lwc1        $f3, 0x10($a2)
    ctx->pc = 0x168984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_168988:
    // 0x168988: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x168988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16898c:
    // 0x16898c: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x16898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168990:
    // 0x168990: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x168990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168994:
    // 0x168994: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x168994u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_168998:
    // 0x168998: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x168998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_16899c:
    // 0x16899c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x16899cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1689a0:
    // 0x1689a0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1689a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_1689a4:
    // 0x1689a4: 0x0  nop
    ctx->pc = 0x1689a4u;
    // NOP
label_1689a8:
    // 0x1689a8: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x1689a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1689ac:
    // 0x1689ac: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1689acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1689b0:
    // 0x1689b0: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_1689b4:
    if (ctx->pc == 0x1689B4u) {
        ctx->pc = 0x1689B8u;
        goto label_1689b8;
    }
    ctx->pc = 0x1689B0u;
    {
        const bool branch_taken_0x1689b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1689b0) {
            ctx->pc = 0x16894Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16894c;
        }
    }
    ctx->pc = 0x1689B8u;
label_1689b8:
    // 0x1689b8: 0x8e63009c  lw          $v1, 0x9C($s3)
    ctx->pc = 0x1689b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_1689bc:
    // 0x1689bc: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_1689c0:
    if (ctx->pc == 0x1689C0u) {
        ctx->pc = 0x1689C4u;
        goto label_1689c4;
    }
    ctx->pc = 0x1689BCu;
    {
        const bool branch_taken_0x1689bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1689bc) {
            ctx->pc = 0x168A98u;
            goto label_168a98;
        }
    }
    ctx->pc = 0x1689C4u;
label_1689c4:
    // 0x1689c4: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
label_1689c8:
    if (ctx->pc == 0x1689C8u) {
        ctx->pc = 0x1689C8u;
            // 0x1689c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1689CCu;
        goto label_1689cc;
    }
    ctx->pc = 0x1689C4u;
    {
        const bool branch_taken_0x1689c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1689C4u;
            // 0x1689c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689c4) {
            ctx->pc = 0x168A98u;
            goto label_168a98;
        }
    }
    ctx->pc = 0x1689CCu;
label_1689cc:
    // 0x1689cc: 0xc04e748  jal         func_139D20
label_1689d0:
    if (ctx->pc == 0x1689D0u) {
        ctx->pc = 0x1689D0u;
            // 0x1689d0: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x1689D4u;
        goto label_1689d4;
    }
    ctx->pc = 0x1689CCu;
    SET_GPR_U32(ctx, 31, 0x1689D4u);
    ctx->pc = 0x1689D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1689CCu;
            // 0x1689d0: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689D4u; }
        if (ctx->pc != 0x1689D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689D4u; }
        if (ctx->pc != 0x1689D4u) { return; }
    }
    ctx->pc = 0x1689D4u;
label_1689d4:
    // 0x1689d4: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x1689d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_1689d8:
    // 0x1689d8: 0xc04e638  jal         func_1398E0
label_1689dc:
    if (ctx->pc == 0x1689DCu) {
        ctx->pc = 0x1689DCu;
            // 0x1689dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1689E0u;
        goto label_1689e0;
    }
    ctx->pc = 0x1689D8u;
    SET_GPR_U32(ctx, 31, 0x1689E0u);
    ctx->pc = 0x1689DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1689D8u;
            // 0x1689dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689E0u; }
        if (ctx->pc != 0x1689E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1689E0u; }
        if (ctx->pc != 0x1689E0u) { return; }
    }
    ctx->pc = 0x1689E0u;
label_1689e0:
    // 0x1689e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1689e4:
    if (ctx->pc == 0x1689E4u) {
        ctx->pc = 0x1689E4u;
            // 0x1689e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1689E8u;
        goto label_1689e8;
    }
    ctx->pc = 0x1689E0u;
    {
        const bool branch_taken_0x1689e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1689E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1689E0u;
            // 0x1689e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1689e0) {
            ctx->pc = 0x168A64u;
            goto label_168a64;
        }
    }
    ctx->pc = 0x1689E8u;
label_1689e8:
    // 0x1689e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1689e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1689ec:
    // 0x1689ec: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1689ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1689f0:
    // 0x1689f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1689f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1689f4:
    // 0x1689f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1689f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1689f8:
    // 0x1689f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1689f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1689fc:
    // 0x1689fc: 0x320f809  jalr        $t9
label_168a00:
    if (ctx->pc == 0x168A00u) {
        ctx->pc = 0x168A00u;
            // 0x168a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168A04u;
        goto label_168a04;
    }
    ctx->pc = 0x1689FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168A04u);
        ctx->pc = 0x168A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1689FCu;
            // 0x168a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168A04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168A04u; }
            if (ctx->pc != 0x168A04u) { return; }
        }
        }
    }
    ctx->pc = 0x168A04u;
label_168a04:
    // 0x168a04: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x168a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_168a08:
    // 0x168a08: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x168a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_168a0c:
    // 0x168a0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x168a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_168a10:
    // 0x168a10: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x168a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_168a14:
    // 0x168a14: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x168a14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_168a18:
    // 0x168a18: 0x320f809  jalr        $t9
label_168a1c:
    if (ctx->pc == 0x168A1Cu) {
        ctx->pc = 0x168A1Cu;
            // 0x168a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168A20u;
        goto label_168a20;
    }
    ctx->pc = 0x168A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168A20u);
        ctx->pc = 0x168A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168A18u;
            // 0x168a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168A20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168A20u; }
            if (ctx->pc != 0x168A20u) { return; }
        }
        }
    }
    ctx->pc = 0x168A20u;
label_168a20:
    // 0x168a20: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x168a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_168a24:
    // 0x168a24: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x168a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_168a28:
    // 0x168a28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x168a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_168a2c:
    // 0x168a2c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x168a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_168a30:
    // 0x168a30: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x168a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_168a34:
    // 0x168a34: 0x320f809  jalr        $t9
label_168a38:
    if (ctx->pc == 0x168A38u) {
        ctx->pc = 0x168A38u;
            // 0x168a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168A3Cu;
        goto label_168a3c;
    }
    ctx->pc = 0x168A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168A3Cu);
        ctx->pc = 0x168A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168A34u;
            // 0x168a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168A3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168A3Cu; }
            if (ctx->pc != 0x168A3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x168A3Cu;
label_168a3c:
    // 0x168a3c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x168a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_168a40:
    // 0x168a40: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x168a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_168a44:
    // 0x168a44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x168a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_168a48:
    // 0x168a48: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x168a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_168a4c:
    // 0x168a4c: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x168a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_168a50:
    // 0x168a50: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x168a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_168a54:
    // 0x168a54: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x168a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_168a58:
    // 0x168a58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x168a58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_168a5c:
    // 0x168a5c: 0x320f809  jalr        $t9
label_168a60:
    if (ctx->pc == 0x168A60u) {
        ctx->pc = 0x168A60u;
            // 0x168a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168A64u;
        goto label_168a64;
    }
    ctx->pc = 0x168A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168A64u);
        ctx->pc = 0x168A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168A5Cu;
            // 0x168a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168A64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168A64u; }
            if (ctx->pc != 0x168A64u) { return; }
        }
        }
    }
    ctx->pc = 0x168A64u;
label_168a64:
    // 0x168a64: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x168a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_168a68:
    // 0x168a68: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x168a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_168a6c:
    // 0x168a6c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_168a70:
    if (ctx->pc == 0x168A70u) {
        ctx->pc = 0x168A74u;
        goto label_168a74;
    }
    ctx->pc = 0x168A6Cu;
    {
        const bool branch_taken_0x168a6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x168a6c) {
            ctx->pc = 0x168A9Cu;
            goto label_168a9c;
        }
    }
    ctx->pc = 0x168A74u;
label_168a74:
    // 0x168a74: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x168a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_168a78:
    // 0x168a78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x168a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_168a7c:
    // 0x168a7c: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x168a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_168a80:
    // 0x168a80: 0x320f809  jalr        $t9
label_168a84:
    if (ctx->pc == 0x168A84u) {
        ctx->pc = 0x168A84u;
            // 0x168a84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168A88u;
        goto label_168a88;
    }
    ctx->pc = 0x168A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168A88u);
        ctx->pc = 0x168A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168A80u;
            // 0x168a84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168A88u; }
            if (ctx->pc != 0x168A88u) { return; }
        }
        }
    }
    ctx->pc = 0x168A88u;
label_168a88:
    // 0x168a88: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x168a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_168a8c:
    // 0x168a8c: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x168a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_168a90:
    // 0x168a90: 0x10000002  b           . + 4 + (0x2 << 2)
label_168a94:
    if (ctx->pc == 0x168A94u) {
        ctx->pc = 0x168A94u;
            // 0x168a94: 0xae430070  sw          $v1, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x168A98u;
        goto label_168a98;
    }
    ctx->pc = 0x168A90u;
    {
        const bool branch_taken_0x168a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168A90u;
            // 0x168a94: 0xae430070  sw          $v1, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168a90) {
            ctx->pc = 0x168A9Cu;
            goto label_168a9c;
        }
    }
    ctx->pc = 0x168A98u;
label_168a98:
    // 0x168a98: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x168a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_168a9c:
    // 0x168a9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x168a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_168aa0:
    // 0x168aa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_168aa4:
    // 0x168aa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168aa8:
    // 0x168aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_168aac:
    // 0x168aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168ab0:
    // 0x168ab0: 0x3e00008  jr          $ra
label_168ab4:
    if (ctx->pc == 0x168AB4u) {
        ctx->pc = 0x168AB4u;
            // 0x168ab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x168AB8u;
        goto label_fallthrough_0x168ab0;
    }
    ctx->pc = 0x168AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168AB0u;
            // 0x168ab4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x168ab0:
    ctx->pc = 0x168AB8u;
}
