#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatSmoothPassSW__FPA4_fPA4_fiiii
// Address: 0x2f5480 - 0x2f5804
void CreatSmoothPassSW__FPA4_fPA4_fiiii_0x2f5480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatSmoothPassSW__FPA4_fPA4_fiiii_0x2f5480");
#endif

    switch (ctx->pc) {
        case 0x2f557cu: goto label_2f557c;
        case 0x2f5600u: goto label_2f5600;
        case 0x2f5708u: goto label_2f5708;
        case 0x2f5714u: goto label_2f5714;
        case 0x2f5744u: goto label_2f5744;
        default: break;
    }

    ctx->pc = 0x2f5480u;

    // 0x2f5480: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2f5480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2f5484: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f5484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f5488: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2f5488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2f548c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2f548cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2f5490: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2f5490u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5494: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2f5494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2f5498: 0x2bc10003  slti        $at, $fp, 0x3
    ctx->pc = 0x2f5498u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f549c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2f549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2f54a0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2f54a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54a4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f54a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2f54a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f54a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f54acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2f54b0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2f54b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f54b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2f54b8: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2f54b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f54bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f54bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f54c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f54c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f54c4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2f54c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f54c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2f54c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f54cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F54CCu;
    {
        const bool branch_taken_0x2f54cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F54CCu;
            // 0x2f54d0: 0xafa800bc  sw          $t0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54cc) {
            ctx->pc = 0x2F54DCu;
            goto label_2f54dc;
        }
    }
    ctx->pc = 0x2F54D4u;
    // 0x2f54d4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2F54D4u;
    {
        const bool branch_taken_0x2f54d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F54D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F54D4u;
            // 0x2f54d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f54d4) {
            ctx->pc = 0x2F57CCu;
            goto label_2f57cc;
        }
    }
    ctx->pc = 0x2F54DCu;
label_2f54dc:
    // 0x2f54dc: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2f54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x2f54e0: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2f54e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2f54e4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2f54e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f54e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2f54e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2f54ec: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x2f54ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f54f0: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x2f54f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x2f54f4: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x2f54f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x2f54f8: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x2f54f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x2f54fc: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2f54fcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x2f5500: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x2f5500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x2f5504: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x2f5504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    // 0x2f5508: 0x3c033fa0  lui         $v1, 0x3FA0
    ctx->pc = 0x2f5508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16288 << 16));
    // 0x2f550c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f5510: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x2f5510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x2f5514: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x2f5514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x2f5518: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x2f5518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x2f551c: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x2f551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2f5520: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x2f5520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x2f5524: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x2f5524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x2f5528: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2f5528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f552c: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x2f552cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
    // 0x2f5530: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f5530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5534: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f5534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5538: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2f5538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2f553c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f553cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5540: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x2f5540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5544: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f5544u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f5548: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2f5548u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x2f554c: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x2f554cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x2f5550: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2f5550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x2f5554: 0x46040801  sub.s       $f0, $f1, $f4
    ctx->pc = 0x2f5554u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2f5558: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2f5558u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x2f555c: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x2f555cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2f5560: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2f5560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2f5564: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x2f5564u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x2f5568: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x2f5568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2f556c: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x2f556cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x2f5570: 0x10200095  beqz        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x2F5570u;
    {
        const bool branch_taken_0x2f5570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5570u;
            // 0x2f5574: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5570) {
            ctx->pc = 0x2F57C8u;
            goto label_2f57c8;
        }
    }
    ctx->pc = 0x2F5578u;
    // 0x2f5578: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f5578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f557c:
    // 0x2f557c: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F557Cu;
    {
        const bool branch_taken_0x2f557c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2F5580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F557Cu;
            // 0x2f5580: 0x27c2fffe  addiu       $v0, $fp, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f557c) {
            ctx->pc = 0x2F55ACu;
            goto label_2f55ac;
        }
    }
    ctx->pc = 0x2F5584u;
    // 0x2f5584: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x2f5584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f5588: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5588u;
    {
        const bool branch_taken_0x2f5588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5588u;
            // 0x2f558c: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5588) {
            ctx->pc = 0x2F55ACu;
            goto label_2f55ac;
        }
    }
    ctx->pc = 0x2F5590u;
    // 0x2f5590: 0xafb101a4  sw          $s1, 0x1A4($sp)
    ctx->pc = 0x2f5590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 17));
    // 0x2f5594: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2f5594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x2f5598: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2f5598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f559c: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2f559cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2f55a0: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x2f55a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x2f55a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F55A4u;
    {
        const bool branch_taken_0x2f55a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F55A4u;
            // 0x2f55a8: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55a4) {
            ctx->pc = 0x2F55F4u;
            goto label_2f55f4;
        }
    }
    ctx->pc = 0x2F55ACu;
label_2f55ac:
    // 0x2f55ac: 0x0  nop
    ctx->pc = 0x2f55acu;
    // NOP
    // 0x2f55b0: 0x1e200006  bgtz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F55B0u;
    {
        const bool branch_taken_0x2f55b0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2F55B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F55B0u;
            // 0x2f55b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55b0) {
            ctx->pc = 0x2F55CCu;
            goto label_2f55cc;
        }
    }
    ctx->pc = 0x2F55B8u;
    // 0x2f55b8: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x2f55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x2f55bc: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2f55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2f55c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f55c4: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x2f55c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x2f55c8: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x2f55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_2f55cc:
    // 0x2f55cc: 0x0  nop
    ctx->pc = 0x2f55ccu;
    // NOP
    // 0x2f55d0: 0x27c2fffe  addiu       $v0, $fp, -0x2
    ctx->pc = 0x2f55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x2f55d4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2f55d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f55d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F55D8u;
    {
        const bool branch_taken_0x2f55d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F55DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F55D8u;
            // 0x2f55dc: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55d8) {
            ctx->pc = 0x2F55F4u;
            goto label_2f55f4;
        }
    }
    ctx->pc = 0x2F55E0u;
    // 0x2f55e0: 0xafb101a4  sw          $s1, 0x1A4($sp)
    ctx->pc = 0x2f55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 17));
    // 0x2f55e4: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2f55e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x2f55e8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2f55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f55ec: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2f55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x2f55f0: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x2f55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_2f55f4:
    // 0x2f55f4: 0x0  nop
    ctx->pc = 0x2f55f4u;
    // NOP
    // 0x2f55f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f55f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f55fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5600:
    // 0x2f5600: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x2f5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2f5604: 0x244601a0  addiu       $a2, $v0, 0x1A0
    ctx->pc = 0x2f5604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x2f5608: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f5608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f560c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2f560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2f5610: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f5610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f5614: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2f5614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2f5618: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f5618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f561c: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x2f561cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2f5620: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5620u;
    {
        const bool branch_taken_0x2f5620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5620u;
            // 0x2f5624: 0x741023  subu        $v0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5620) {
            ctx->pc = 0x2F562Cu;
            goto label_2f562c;
        }
    }
    ctx->pc = 0x2F5628u;
    // 0x2f5628: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2f5628u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2f562c:
    // 0x2f562c: 0x0  nop
    ctx->pc = 0x2f562cu;
    // NOP
    // 0x2f5630: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f5630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f5634: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5634u;
    {
        const bool branch_taken_0x2f5634 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f5634) {
            ctx->pc = 0x2F5644u;
            goto label_2f5644;
        }
    }
    ctx->pc = 0x2F563Cu;
    // 0x2f563c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2f563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2f5640: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2f5640u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2f5644:
    // 0x2f5644: 0x0  nop
    ctx->pc = 0x2f5644u;
    // NOP
    // 0x2f5648: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f5648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f564c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2f564cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f5650: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2F5650u;
    {
        const bool branch_taken_0x2f5650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5650u;
            // 0x2f5654: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5650) {
            ctx->pc = 0x2F5600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5600;
        }
    }
    ctx->pc = 0x2F5658u;
    // 0x2f5658: 0x8fa801a0  lw          $t0, 0x1A0($sp)
    ctx->pc = 0x2f5658u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2f565c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2f565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f5660: 0x8fa701a4  lw          $a3, 0x1A4($sp)
    ctx->pc = 0x2f5660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2f5664: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2f5664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2f5668: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x2f5668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2f566c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2f566cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2f5670: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x2f5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2f5674: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2f5674u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2f5678: 0x2e84021  addu        $t0, $s7, $t0
    ctx->pc = 0x2f5678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
    // 0x2f567c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2f567cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2f5680: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x2f5680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5684: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2f5684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2f5688: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2f5688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2f568c: 0x2e73821  addu        $a3, $s7, $a3
    ctx->pc = 0x2f568cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 7)));
    // 0x2f5690: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x2f5690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x2f5694: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2f5694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2f5698: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2f5698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2f569c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2f569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56a0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x2f56a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x2f56a4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x2f56a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56a8: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x2f56a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2f56ac: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x2f56acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x2f56b0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2f56b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56b4: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x2f56b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2f56b8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x2f56b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56bc: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2f56bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2f56c0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2f56c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56c4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x2f56c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2f56c8: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2f56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x2f56cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2f56ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56d0: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2f56d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2f56d4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f56d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56d8: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x2f56d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x2f56dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f56dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56e0: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x2f56e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2f56e4: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x2f56e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
    // 0x2f56e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2f56e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56ec: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x2f56ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2f56f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f56f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56f4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x2f56f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x2f56f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f56f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f56fc: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2f56fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2f5700: 0xc041bbc  jal         func_106EF0
    ctx->pc = 0x2F5700u;
    SET_GPR_U32(ctx, 31, 0x2F5708u);
    ctx->pc = 0x2F5704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5700u;
            // 0x2f5704: 0xafa0013c  sw          $zero, 0x13C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EF0u;
    if (runtime->hasFunction(0x106EF0u)) {
        auto targetFn = runtime->lookupFunction(0x106EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5708u; }
        if (ctx->pc != 0x2F5708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x106ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5708u; }
        if (ctx->pc != 0x2F5708u) { return; }
    }
    ctx->pc = 0x2F5708u;
label_2f5708:
    // 0x2f5708: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2f5708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f570c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F570Cu;
    {
        const bool branch_taken_0x2f570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F570Cu;
            // 0x2f5710: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f570c) {
            ctx->pc = 0x2F577Cu;
            goto label_2f577c;
        }
    }
    ctx->pc = 0x2F5714u;
label_2f5714:
    // 0x2f5714: 0x0  nop
    ctx->pc = 0x2f5714u;
    // NOP
    // 0x2f5718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f571c: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x2f571cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2f5720: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x2f5720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x2f5724: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2f5724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2f5728: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2f5728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f572c: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2f572cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2f5730: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x2f5730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x2f5734: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2f5734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2f5738: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2f5738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2f573c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2F573Cu;
    SET_GPR_U32(ctx, 31, 0x2F5744u);
    ctx->pc = 0x2F5740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F573Cu;
            // 0x2f5740: 0xe7b40188  swc1        $f20, 0x188($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5744u; }
        if (ctx->pc != 0x2F5744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5744u; }
        if (ctx->pc != 0x2F5744u) { return; }
    }
    ctx->pc = 0x2F5744u;
label_2f5744:
    // 0x2f5744: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2f5744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5748: 0x2b22021  addu        $a0, $s5, $s2
    ctx->pc = 0x2f5748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2f574c: 0x801821  addu        $v1, $a0, $zero
    ctx->pc = 0x2f574cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
    // 0x2f5750: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5754: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2f5754u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2f5758: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2f5758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f575c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2f575cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2f5760: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f5760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f5764: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2f5764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2f5768: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x2f5768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f576c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2f576cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f5770: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2f5770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5774: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2f5774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f5778: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2f5778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2f577c:
    // 0x2f577c: 0x0  nop
    ctx->pc = 0x2f577cu;
    // NOP
    // 0x2f5780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5784: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2f5784u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f578c: 0x0  nop
    ctx->pc = 0x2f578cu;
    // NOP
    // 0x2f5790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5794: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f5794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f5798: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x2f5798u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2f579c: 0x0  nop
    ctx->pc = 0x2f579cu;
    // NOP
    // 0x2f57a0: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x2f57a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x2f57a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f57a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f57a8: 0x0  nop
    ctx->pc = 0x2f57a8u;
    // NOP
    // 0x2f57ac: 0x4501ffd9  bc1t        . + 4 + (-0x27 << 2)
    ctx->pc = 0x2F57ACu;
    {
        const bool branch_taken_0x2f57ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f57ac) {
            ctx->pc = 0x2F5714u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5714;
        }
    }
    ctx->pc = 0x2F57B4u;
    // 0x2f57b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f57b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f57b8: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x2f57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2f57bc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2f57bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f57c0: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x2F57C0u;
    {
        const bool branch_taken_0x2f57c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57c0) {
            ctx->pc = 0x2F557Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f557c;
        }
    }
    ctx->pc = 0x2F57C8u;
label_2f57c8:
    // 0x2f57c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f57c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f57cc:
    // 0x2f57cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f57ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f57d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2f57d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f57d4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2f57d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f57d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f57d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f57dc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2f57dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f57e0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2f57e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f57e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f57e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f57e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f57e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f57ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f57ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f57f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f57f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f57f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f57f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f57f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f57f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f57fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F57FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F57FCu;
            // 0x2f5800: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5804u;
}
