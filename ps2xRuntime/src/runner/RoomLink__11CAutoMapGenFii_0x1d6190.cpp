#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RoomLink__11CAutoMapGenFii
// Address: 0x1d6190 - 0x1d6aa8
void RoomLink__11CAutoMapGenFii_0x1d6190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RoomLink__11CAutoMapGenFii_0x1d6190");
#endif

    switch (ctx->pc) {
        case 0x1d6340u: goto label_1d6340;
        case 0x1d6358u: goto label_1d6358;
        case 0x1d63e8u: goto label_1d63e8;
        case 0x1d6400u: goto label_1d6400;
        case 0x1d64acu: goto label_1d64ac;
        case 0x1d64b8u: goto label_1d64b8;
        case 0x1d6584u: goto label_1d6584;
        case 0x1d6590u: goto label_1d6590;
        case 0x1d663cu: goto label_1d663c;
        case 0x1d664cu: goto label_1d664c;
        case 0x1d6744u: goto label_1d6744;
        case 0x1d674cu: goto label_1d674c;
        case 0x1d67acu: goto label_1d67ac;
        case 0x1d67b4u: goto label_1d67b4;
        case 0x1d67bcu: goto label_1d67bc;
        case 0x1d67c4u: goto label_1d67c4;
        case 0x1d67e4u: goto label_1d67e4;
        case 0x1d6818u: goto label_1d6818;
        case 0x1d695cu: goto label_1d695c;
        case 0x1d6a0cu: goto label_1d6a0c;
        case 0x1d6a14u: goto label_1d6a14;
        case 0x1d6a64u: goto label_1d6a64;
        case 0x1d6a6cu: goto label_1d6a6c;
        default: break;
    }

    ctx->pc = 0x1d6190u;

    // 0x1d6190: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x1d6190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x1d6194: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d6194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d6198: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d6198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d619c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1d619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d61a0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d61a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d61a4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1d61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d61a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d61a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d61ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d61acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d61b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d61b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d61b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d61b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d61b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d61bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d61c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d61c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d61c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d61c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d61c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d61cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d61ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d61d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d61d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d61d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d61d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d61d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d61dc: 0x244501d4  addiu       $a1, $v0, 0x1D4
    ctx->pc = 0x1d61dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 468));
    // 0x1d61e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d61e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d61e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d61e8: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x1d61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
    // 0x1d61ec: 0x247501d4  addiu       $s5, $v1, 0x1D4
    ctx->pc = 0x1d61ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 468));
    // 0x1d61f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D61F0u;
    {
        const bool branch_taken_0x1d61f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D61F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61F0u;
            // 0x1d61f4: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61f0) {
            ctx->pc = 0x1D6200u;
            goto label_1d6200;
        }
    }
    ctx->pc = 0x1D61F8u;
    // 0x1d61f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d61fc: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1d61fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1d6200:
    // 0x1d6200: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1d6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d6204: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1d6204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d6208: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1d6208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d620c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D620Cu;
    {
        const bool branch_taken_0x1d620c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D6210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D620Cu;
            // 0x1d6210: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d620c) {
            ctx->pc = 0x1D621Cu;
            goto label_1d621c;
        }
    }
    ctx->pc = 0x1D6214u;
    // 0x1d6214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d6214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6218: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1d6218u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1d621c:
    // 0x1d621c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1d621cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d6220: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1d6220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1d6224: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1d6224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6228: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6228u;
    {
        const bool branch_taken_0x1d6228 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6228u;
            // 0x1d622c: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6228) {
            ctx->pc = 0x1D6238u;
            goto label_1d6238;
        }
    }
    ctx->pc = 0x1D6230u;
    // 0x1d6230: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d6230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6234: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1d6234u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1d6238:
    // 0x1d6238: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1d6238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d623c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1d623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d6240: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x1d6240u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6244: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6244u;
    {
        const bool branch_taken_0x1d6244 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D6248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6244u;
            // 0x1d6248: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6244) {
            ctx->pc = 0x1D6254u;
            goto label_1d6254;
        }
    }
    ctx->pc = 0x1D624Cu;
    // 0x1d624c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6250: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1d6250u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1d6254:
    // 0x1d6254: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d6254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d6258: 0xd71023  subu        $v0, $a2, $s7
    ctx->pc = 0x1d6258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x1d625c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d625cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6260: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1d6260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1d6264: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d6264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d6268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d626c: 0x0  nop
    ctx->pc = 0x1d626cu;
    // NOP
    // 0x1d6270: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1d6270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1d6274: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1d6274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6278: 0x0  nop
    ctx->pc = 0x1d6278u;
    // NOP
    // 0x1d627c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D627Cu;
    {
        const bool branch_taken_0x1d627c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D627Cu;
            // 0x1d6280: 0x64f021  addu        $fp, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d627c) {
            ctx->pc = 0x1D6288u;
            goto label_1d6288;
        }
    }
    ctx->pc = 0x1D6284u;
    // 0x1d6284: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1d6284u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1d6288:
    // 0x1d6288: 0xfeb023  subu        $s6, $a3, $fp
    ctx->pc = 0x1d6288u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 30)));
    // 0x1d628c: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x1d628cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6290: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6290u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6294: 0x0  nop
    ctx->pc = 0x1d6294u;
    // NOP
    // 0x1d6298: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d6298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d629c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d629cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d62a0: 0x0  nop
    ctx->pc = 0x1d62a0u;
    // NOP
    // 0x1d62a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D62A4u;
    {
        const bool branch_taken_0x1d62a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d62a4) {
            ctx->pc = 0x1D62B0u;
            goto label_1d62b0;
        }
    }
    ctx->pc = 0x1D62ACu;
    // 0x1d62ac: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1d62acu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1d62b0:
    // 0x1d62b0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1d62b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d62b4: 0x0  nop
    ctx->pc = 0x1d62b4u;
    // NOP
    // 0x1d62b8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D62B8u;
    {
        const bool branch_taken_0x1d62b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d62b8) {
            ctx->pc = 0x1D62DCu;
            goto label_1d62dc;
        }
    }
    ctx->pc = 0x1D62C0u;
    // 0x1d62c0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d62c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D62C4u;
    {
        const bool branch_taken_0x1d62c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D62C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62C4u;
            // 0x1d62c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62c4) {
            ctx->pc = 0x1D62D4u;
            goto label_1d62d4;
        }
    }
    ctx->pc = 0x1D62CCu;
    // 0x1d62cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D62CCu;
    {
        const bool branch_taken_0x1d62cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62CCu;
            // 0x1d62d0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62cc) {
            ctx->pc = 0x1D62E8u;
            goto label_1d62e8;
        }
    }
    ctx->pc = 0x1D62D4u;
label_1d62d4:
    // 0x1d62d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D62D4u;
    {
        const bool branch_taken_0x1d62d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62D4u;
            // 0x1d62d8: 0x8e82003c  lw          $v0, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62d4) {
            ctx->pc = 0x1D62ECu;
            goto label_1d62ec;
        }
    }
    ctx->pc = 0x1D62DCu;
label_1d62dc:
    // 0x1d62dc: 0x6c10002  bgez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D62DCu;
    {
        const bool branch_taken_0x1d62dc = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x1D62E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62DCu;
            // 0x1d62e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62dc) {
            ctx->pc = 0x1D62E8u;
            goto label_1d62e8;
        }
    }
    ctx->pc = 0x1D62E4u;
    // 0x1d62e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d62e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d62e8:
    // 0x1d62e8: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x1d62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_1d62ec:
    // 0x1d62ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1d62ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1d62f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D62F0u;
    {
        const bool branch_taken_0x1d62f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62F0u;
            // 0x1d62f4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62f0) {
            ctx->pc = 0x1D6308u;
            goto label_1d6308;
        }
    }
    ctx->pc = 0x1D62F8u;
    // 0x1d62f8: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D62F8u;
    {
        const bool branch_taken_0x1d62f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d62f8) {
            ctx->pc = 0x1D6304u;
            goto label_1d6304;
        }
    }
    ctx->pc = 0x1D6300u;
    // 0x1d6300: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d6300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d6304:
    // 0x1d6304: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1d6304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d6308:
    // 0x1d6308: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d630c: 0x10a3009b  beq         $a1, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x1D630Cu;
    {
        const bool branch_taken_0x1d630c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D630Cu;
            // 0x1d6310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d630c) {
            ctx->pc = 0x1D657Cu;
            goto label_1d657c;
        }
    }
    ctx->pc = 0x1D6314u;
    // 0x1d6314: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d6314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d6318: 0x10a30063  beq         $a1, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1D6318u;
    {
        const bool branch_taken_0x1d6318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D631Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6318u;
            // 0x1d631c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6318) {
            ctx->pc = 0x1D64A8u;
            goto label_1d64a8;
        }
    }
    ctx->pc = 0x1D6320u;
    // 0x1d6320: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d6320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d6324: 0x10a30030  beq         $a1, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D6324u;
    {
        const bool branch_taken_0x1d6324 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6324u;
            // 0x1d6328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6324) {
            ctx->pc = 0x1D63E8u;
            goto label_1d63e8;
        }
    }
    ctx->pc = 0x1D632Cu;
    // 0x1d632c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d632cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6330: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6330u;
    {
        const bool branch_taken_0x1d6330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D6334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6330u;
            // 0x1d6334: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6330) {
            ctx->pc = 0x1D6340u;
            goto label_1d6340;
        }
    }
    ctx->pc = 0x1D6338u;
    // 0x1d6338: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x1D6338u;
    {
        const bool branch_taken_0x1d6338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6338) {
            ctx->pc = 0x1D6624u;
            goto label_1d6624;
        }
    }
    ctx->pc = 0x1D6340u;
label_1d6340:
    // 0x1d6340: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1d6340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d6344: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d6344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6348: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1d6348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d634c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1d634cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d6350: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D6350u;
    {
        const bool branch_taken_0x1d6350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6350u;
            // 0x1d6354: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6350) {
            ctx->pc = 0x1D63C0u;
            goto label_1d63c0;
        }
    }
    ctx->pc = 0x1D6358u;
label_1d6358:
    // 0x1d6358: 0x8ea90008  lw          $t1, 0x8($s5)
    ctx->pc = 0x1d6358u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d635c: 0x868a01b8  lh          $t2, 0x1B8($s4)
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1d6360: 0x8e8801cc  lw          $t0, 0x1CC($s4)
    ctx->pc = 0x1d6360u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x1d6364: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1d6364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1d6368: 0x1495018  mult        $t2, $t2, $t1
    ctx->pc = 0x1d6368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1d636c: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1d636cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d6370: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x1d6370u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1d6374: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1d6374u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1d6378: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1d6378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1d637c: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1d637cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1d6380: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x1d6380u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d6384: 0x31280006  andi        $t0, $t1, 0x6
    ctx->pc = 0x1d6384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)6);
    // 0x1d6388: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6388u;
    {
        const bool branch_taken_0x1d6388 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6388u;
            // 0x1d638c: 0x31280500  andi        $t0, $t1, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6388) {
            ctx->pc = 0x1D63B8u;
            goto label_1d63b8;
        }
    }
    ctx->pc = 0x1D6390u;
    // 0x1d6390: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6390u;
    {
        const bool branch_taken_0x1d6390 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6390u;
            // 0x1d6394: 0xdd4021  addu        $t0, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6390) {
            ctx->pc = 0x1D63B8u;
            goto label_1d63b8;
        }
    }
    ctx->pc = 0x1D6398u;
    // 0x1d6398: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1d6398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1d639c: 0x250900b0  addiu       $t1, $t0, 0xB0
    ctx->pc = 0x1d639cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
    // 0x1d63a0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1d63a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1d63a4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x1d63a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x1d63a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d63ac: 0x8ea80008  lw          $t0, 0x8($s5)
    ctx->pc = 0x1d63acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d63b0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x1d63b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1d63b4: 0xad280004  sw          $t0, 0x4($t1)
    ctx->pc = 0x1d63b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 8));
label_1d63b8:
    // 0x1d63b8: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x1d63b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x1d63bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d63c0:
    // 0x1d63c0: 0x8ea90004  lw          $t1, 0x4($s5)
    ctx->pc = 0x1d63c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d63c4: 0x8ea8000c  lw          $t0, 0xC($s5)
    ctx->pc = 0x1d63c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d63c8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1d63c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d63cc: 0x68402a  slt         $t0, $v1, $t0
    ctx->pc = 0x1d63ccu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d63d0: 0x1500ffe1  bnez        $t0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1D63D0u;
    {
        const bool branch_taken_0x1d63d0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d63d0) {
            ctx->pc = 0x1D6358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6358;
        }
    }
    ctx->pc = 0x1D63D8u;
    // 0x1d63d8: 0x1880ffd9  blez        $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1D63D8u;
    {
        const bool branch_taken_0x1d63d8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D63DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63D8u;
            // 0x1d63dc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63d8) {
            ctx->pc = 0x1D6340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6340;
        }
    }
    ctx->pc = 0x1D63E0u;
    // 0x1d63e0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1D63E0u;
    {
        const bool branch_taken_0x1d63e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d63e0) {
            ctx->pc = 0x1D6624u;
            goto label_1d6624;
        }
    }
    ctx->pc = 0x1D63E8u;
label_1d63e8:
    // 0x1d63e8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1d63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d63ec: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d63ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63f0: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1d63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d63f4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1d63f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d63f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D63F8u;
    {
        const bool branch_taken_0x1d63f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63F8u;
            // 0x1d63fc: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63f8) {
            ctx->pc = 0x1D6480u;
            goto label_1d6480;
        }
    }
    ctx->pc = 0x1D6400u;
label_1d6400:
    // 0x1d6400: 0x8eab0008  lw          $t3, 0x8($s5)
    ctx->pc = 0x1d6400u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d6404: 0x8eaa0010  lw          $t2, 0x10($s5)
    ctx->pc = 0x1d6404u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d6408: 0x868901b8  lh          $t1, 0x1B8($s4)
    ctx->pc = 0x1d6408u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1d640c: 0x8e8801cc  lw          $t0, 0x1CC($s4)
    ctx->pc = 0x1d640cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x1d6410: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1d6410u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1d6414: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1d6414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1d6418: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x1d6418u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1d641c: 0x12a5018  mult        $t2, $t1, $t2
    ctx->pc = 0x1d641cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1d6420: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1d6420u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d6424: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x1d6424u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1d6428: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1d6428u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1d642c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1d642cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1d6430: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x1d6430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1d6434: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x1d6434u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d6438: 0x31280006  andi        $t0, $t1, 0x6
    ctx->pc = 0x1d6438u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)6);
    // 0x1d643c: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D643Cu;
    {
        const bool branch_taken_0x1d643c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D643Cu;
            // 0x1d6440: 0x31280500  andi        $t0, $t1, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d643c) {
            ctx->pc = 0x1D6478u;
            goto label_1d6478;
        }
    }
    ctx->pc = 0x1D6444u;
    // 0x1d6444: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D6444u;
    {
        const bool branch_taken_0x1d6444 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6444u;
            // 0x1d6448: 0xdd4021  addu        $t0, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6444) {
            ctx->pc = 0x1D6478u;
            goto label_1d6478;
        }
    }
    ctx->pc = 0x1D644Cu;
    // 0x1d644c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1d644cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1d6450: 0x250a00b0  addiu       $t2, $t0, 0xB0
    ctx->pc = 0x1d6450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
    // 0x1d6454: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1d6454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1d6458: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1d6458u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x1d645c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d645cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d6460: 0x8ea90008  lw          $t1, 0x8($s5)
    ctx->pc = 0x1d6460u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d6464: 0x8ea80010  lw          $t0, 0x10($s5)
    ctx->pc = 0x1d6464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d6468: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1d6468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d646c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1d646cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1d6470: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x1d6470u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1d6474: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x1d6474u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
label_1d6478:
    // 0x1d6478: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x1d6478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x1d647c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d647cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d6480:
    // 0x1d6480: 0x8ea90004  lw          $t1, 0x4($s5)
    ctx->pc = 0x1d6480u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d6484: 0x8ea8000c  lw          $t0, 0xC($s5)
    ctx->pc = 0x1d6484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d6488: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1d6488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d648c: 0x68402a  slt         $t0, $v1, $t0
    ctx->pc = 0x1d648cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d6490: 0x1500ffdb  bnez        $t0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1D6490u;
    {
        const bool branch_taken_0x1d6490 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6490) {
            ctx->pc = 0x1D6400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6400;
        }
    }
    ctx->pc = 0x1D6498u;
    // 0x1d6498: 0x1880ffd3  blez        $a0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D6498u;
    {
        const bool branch_taken_0x1d6498 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D649Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6498u;
            // 0x1d649c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6498) {
            ctx->pc = 0x1D63E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d63e8;
        }
    }
    ctx->pc = 0x1D64A0u;
    // 0x1d64a0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1D64A0u;
    {
        const bool branch_taken_0x1d64a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d64a0) {
            ctx->pc = 0x1D6624u;
            goto label_1d6624;
        }
    }
    ctx->pc = 0x1D64A8u;
label_1d64a8:
    // 0x1d64a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d64a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d64ac:
    // 0x1d64ac: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1d64acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d64b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1D64B0u;
    {
        const bool branch_taken_0x1d64b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64B0u;
            // 0x1d64b4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64b0) {
            ctx->pc = 0x1D654Cu;
            goto label_1d654c;
        }
    }
    ctx->pc = 0x1D64B8u;
label_1d64b8:
    // 0x1d64b8: 0x868a01b8  lh          $t2, 0x1B8($s4)
    ctx->pc = 0x1d64b8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1d64bc: 0x8ea90004  lw          $t1, 0x4($s5)
    ctx->pc = 0x1d64bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d64c0: 0x8ea8000c  lw          $t0, 0xC($s5)
    ctx->pc = 0x1d64c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d64c4: 0x8e8c01cc  lw          $t4, 0x1CC($s4)
    ctx->pc = 0x1d64c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x1d64c8: 0x6a7018  mult        $t6, $v1, $t2
    ctx->pc = 0x1d64c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d64cc: 0x950c0  sll         $t2, $t1, 3
    ctx->pc = 0x1d64ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1d64d0: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x1d64d0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x1d64d4: 0x1495823  subu        $t3, $t2, $t1
    ctx->pc = 0x1d64d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1d64d8: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x1d64d8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d64dc: 0x850c0  sll         $t2, $t0, 3
    ctx->pc = 0x1d64dcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1d64e0: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x1d64e0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1d64e4: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x1d64e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x1d64e8: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1d64e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1d64ec: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1d64ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1d64f0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1d64f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1d64f4: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1d64f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1d64f8: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1d64f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1d64fc: 0x254affe4  addiu       $t2, $t2, -0x1C
    ctx->pc = 0x1d64fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967268));
    // 0x1d6500: 0x1475023  subu        $t2, $t2, $a3
    ctx->pc = 0x1d6500u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1d6504: 0x8d4b0000  lw          $t3, 0x0($t2)
    ctx->pc = 0x1d6504u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d6508: 0x316a0006  andi        $t2, $t3, 0x6
    ctx->pc = 0x1d6508u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)6);
    // 0x1d650c: 0x1140000d  beqz        $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x1D650Cu;
    {
        const bool branch_taken_0x1d650c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D650Cu;
            // 0x1d6510: 0x316a0500  andi        $t2, $t3, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d650c) {
            ctx->pc = 0x1D6544u;
            goto label_1d6544;
        }
    }
    ctx->pc = 0x1D6514u;
    // 0x1d6514: 0x1540000b  bnez        $t2, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6514u;
    {
        const bool branch_taken_0x1d6514 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6514) {
            ctx->pc = 0x1D6544u;
            goto label_1d6544;
        }
    }
    ctx->pc = 0x1D651Cu;
    // 0x1d651c: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x1d651cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d6520: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1d6520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1d6524: 0xbd4021  addu        $t0, $a1, $sp
    ctx->pc = 0x1d6524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1d6528: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1d6528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1d652c: 0x250a00b0  addiu       $t2, $t0, 0xB0
    ctx->pc = 0x1d652cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
    // 0x1d6530: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d6530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d6534: 0x1224023  subu        $t0, $t1, $v0
    ctx->pc = 0x1d6534u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1d6538: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d6538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d653c: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x1d653cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x1d6540: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x1d6540u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
label_1d6544:
    // 0x1d6544: 0x0  nop
    ctx->pc = 0x1d6544u;
    // NOP
    // 0x1d6548: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d6548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d654c:
    // 0x1d654c: 0x0  nop
    ctx->pc = 0x1d654cu;
    // NOP
    // 0x1d6550: 0x8ea90008  lw          $t1, 0x8($s5)
    ctx->pc = 0x1d6550u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d6554: 0x8ea80010  lw          $t0, 0x10($s5)
    ctx->pc = 0x1d6554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d6558: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1d6558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d655c: 0x68402a  slt         $t0, $v1, $t0
    ctx->pc = 0x1d655cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d6560: 0x1500ffd5  bnez        $t0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1D6560u;
    {
        const bool branch_taken_0x1d6560 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6560) {
            ctx->pc = 0x1D64B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d64b8;
        }
    }
    ctx->pc = 0x1D6568u;
    // 0x1d6568: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x1d6568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x1d656c: 0x1880ffcf  blez        $a0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1D656Cu;
    {
        const bool branch_taken_0x1d656c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D6570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D656Cu;
            // 0x1d6570: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d656c) {
            ctx->pc = 0x1D64ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d64ac;
        }
    }
    ctx->pc = 0x1D6574u;
    // 0x1d6574: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D6574u;
    {
        const bool branch_taken_0x1d6574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6574) {
            ctx->pc = 0x1D6624u;
            goto label_1d6624;
        }
    }
    ctx->pc = 0x1D657Cu;
label_1d657c:
    // 0x1d657c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d657cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d6580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6584:
    // 0x1d6584: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x1d6584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d6588: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D6588u;
    {
        const bool branch_taken_0x1d6588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D658Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6588u;
            // 0x1d658c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6588) {
            ctx->pc = 0x1D65FCu;
            goto label_1d65fc;
        }
    }
    ctx->pc = 0x1D6590u;
label_1d6590:
    // 0x1d6590: 0x868a01b8  lh          $t2, 0x1B8($s4)
    ctx->pc = 0x1d6590u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1d6594: 0x8e8901cc  lw          $t1, 0x1CC($s4)
    ctx->pc = 0x1d6594u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x1d6598: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x1d6598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1d659c: 0x6a6018  mult        $t4, $v1, $t2
    ctx->pc = 0x1d659cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1d65a0: 0xe95021  addu        $t2, $a3, $t1
    ctx->pc = 0x1d65a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1d65a4: 0xc58c0  sll         $t3, $t4, 3
    ctx->pc = 0x1d65a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1d65a8: 0x848c0  sll         $t1, $t0, 3
    ctx->pc = 0x1d65a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1d65ac: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x1d65acu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1d65b0: 0x1284823  subu        $t1, $t1, $t0
    ctx->pc = 0x1d65b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d65b4: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x1d65b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1d65b8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1d65b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1d65bc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1d65bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1d65c0: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1d65c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1d65c4: 0x8d2a0000  lw          $t2, 0x0($t1)
    ctx->pc = 0x1d65c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d65c8: 0x31490006  andi        $t1, $t2, 0x6
    ctx->pc = 0x1d65c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)6);
    // 0x1d65cc: 0x1120000a  beqz        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D65CCu;
    {
        const bool branch_taken_0x1d65cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D65D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65CCu;
            // 0x1d65d0: 0x31490500  andi        $t1, $t2, 0x500 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65cc) {
            ctx->pc = 0x1D65F8u;
            goto label_1d65f8;
        }
    }
    ctx->pc = 0x1D65D4u;
    // 0x1d65d4: 0x15200008  bnez        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D65D4u;
    {
        const bool branch_taken_0x1d65d4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D65D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65D4u;
            // 0x1d65d8: 0x1024821  addu        $t1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65d4) {
            ctx->pc = 0x1D65F8u;
            goto label_1d65f8;
        }
    }
    ctx->pc = 0x1D65DCu;
    // 0x1d65dc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1d65dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1d65e0: 0xbd4021  addu        $t0, $a1, $sp
    ctx->pc = 0x1d65e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1d65e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d65e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d65e8: 0x250800b0  addiu       $t0, $t0, 0xB0
    ctx->pc = 0x1d65e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
    // 0x1d65ec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d65ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d65f0: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1d65f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1d65f4: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1d65f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_1d65f8:
    // 0x1d65f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d65fc:
    // 0x1d65fc: 0x0  nop
    ctx->pc = 0x1d65fcu;
    // NOP
    // 0x1d6600: 0x8ea90008  lw          $t1, 0x8($s5)
    ctx->pc = 0x1d6600u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1d6604: 0x8ea80010  lw          $t0, 0x10($s5)
    ctx->pc = 0x1d6604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d6608: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1d6608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1d660c: 0x68402a  slt         $t0, $v1, $t0
    ctx->pc = 0x1d660cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1d6610: 0x1500ffdf  bnez        $t0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D6610u;
    {
        const bool branch_taken_0x1d6610 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6610) {
            ctx->pc = 0x1D6590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6590;
        }
    }
    ctx->pc = 0x1D6618u;
    // 0x1d6618: 0x24e7001c  addiu       $a3, $a3, 0x1C
    ctx->pc = 0x1d6618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x1d661c: 0x1880ffd9  blez        $a0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1D661Cu;
    {
        const bool branch_taken_0x1d661c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D6620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D661Cu;
            // 0x1d6620: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d661c) {
            ctx->pc = 0x1D6584u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6584;
        }
    }
    ctx->pc = 0x1D6624u;
label_1d6624:
    // 0x1d6624: 0x0  nop
    ctx->pc = 0x1d6624u;
    // NOP
    // 0x1d6628: 0x1c800006  bgtz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6628u;
    {
        const bool branch_taken_0x1d6628 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1d6628) {
            ctx->pc = 0x1D6644u;
            goto label_1d6644;
        }
    }
    ctx->pc = 0x1D6630u;
    // 0x1d6630: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1d6630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1d6634: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1D6634u;
    SET_GPR_U32(ctx, 31, 0x1D663Cu);
    ctx->pc = 0x1D6638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6634u;
            // 0x1d6638: 0x24847dd0  addiu       $a0, $a0, 0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D663Cu; }
        if (ctx->pc != 0x1D663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D663Cu; }
        if (ctx->pc != 0x1D663Cu) { return; }
    }
    ctx->pc = 0x1D663Cu;
label_1d663c:
    // 0x1d663c: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x1D663Cu;
    {
        const bool branch_taken_0x1d663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D663Cu;
            // 0x1d6640: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d663c) {
            ctx->pc = 0x1D6A7Cu;
            goto label_1d6a7c;
        }
    }
    ctx->pc = 0x1D6644u;
label_1d6644:
    // 0x1d6644: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6644u;
    SET_GPR_U32(ctx, 31, 0x1D664Cu);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D664Cu; }
        if (ctx->pc != 0x1D664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D664Cu; }
        if (ctx->pc != 0x1D664Cu) { return; }
    }
    ctx->pc = 0x1D664Cu;
label_1d664c:
    // 0x1d664c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d664cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d6650: 0x868601b8  lh          $a2, 0x1B8($s4)
    ctx->pc = 0x1d6650u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1d6654: 0x5d3821  addu        $a3, $v0, $sp
    ctx->pc = 0x1d6654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d6658: 0x8e8301cc  lw          $v1, 0x1CC($s4)
    ctx->pc = 0x1d6658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x1d665c: 0x8cf000b0  lw          $s0, 0xB0($a3)
    ctx->pc = 0x1d665cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 176)));
    // 0x1d6660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6664: 0x8cf100b4  lw          $s1, 0xB4($a3)
    ctx->pc = 0x1d6664u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 180)));
    // 0x1d6668: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d6668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d666c: 0x2263818  mult        $a3, $s1, $a2
    ctx->pc = 0x1d666cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d6670: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6674: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d6674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d6678: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1d6678u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1d667c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d667cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6680: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1d6680u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d6684: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6688: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d6688u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d668c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1d668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d6690: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1d6690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1d6694: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d6694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6698: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d6698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d669c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1d669cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d66a0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d66a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1d66a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D66A4u;
    {
        const bool branch_taken_0x1d66a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D66A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66A4u;
            // 0x1d66a8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66a4) {
            ctx->pc = 0x1D66B0u;
            goto label_1d66b0;
        }
    }
    ctx->pc = 0x1D66ACu;
    // 0x1d66ac: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1d66acu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1d66b0:
    // 0x1d66b0: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x1d66b0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d66b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d66b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d66b8: 0x0  nop
    ctx->pc = 0x1d66b8u;
    // NOP
    // 0x1d66bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d66bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d66c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d66c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d66c4: 0x0  nop
    ctx->pc = 0x1d66c4u;
    // NOP
    // 0x1d66c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D66C8u;
    {
        const bool branch_taken_0x1d66c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d66c8) {
            ctx->pc = 0x1D66D4u;
            goto label_1d66d4;
        }
    }
    ctx->pc = 0x1D66D0u;
    // 0x1d66d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1d66d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1d66d4:
    // 0x1d66d4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1d66d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d66d8: 0x0  nop
    ctx->pc = 0x1d66d8u;
    // NOP
    // 0x1d66dc: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1D66DCu;
    {
        const bool branch_taken_0x1d66dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d66dc) {
            ctx->pc = 0x1D6754u;
            goto label_1d6754;
        }
    }
    ctx->pc = 0x1D66E4u;
    // 0x1d66e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d66e8: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D66E8u;
    {
        const bool branch_taken_0x1d66e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D66ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66E8u;
            // 0x1d66ec: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66e8) {
            ctx->pc = 0x1D66F4u;
            goto label_1d66f4;
        }
    }
    ctx->pc = 0x1D66F0u;
    // 0x1d66f0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1d66f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d66f4:
    // 0x1d66f4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d66f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d66f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d66fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d66fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6700: 0x0  nop
    ctx->pc = 0x1d6700u;
    // NOP
    // 0x1d6704: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d6704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d6708: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d6708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d670c: 0x0  nop
    ctx->pc = 0x1d670cu;
    // NOP
    // 0x1d6710: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6710u;
    {
        const bool branch_taken_0x1d6710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6710) {
            ctx->pc = 0x1D671Cu;
            goto label_1d671c;
        }
    }
    ctx->pc = 0x1D6718u;
    // 0x1d6718: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1d6718u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1d671c:
    // 0x1d671c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x1d671cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d6720: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6720u;
    {
        const bool branch_taken_0x1d6720 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D6724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6720u;
            // 0x1d6724: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6720) {
            ctx->pc = 0x1D6730u;
            goto label_1d6730;
        }
    }
    ctx->pc = 0x1D6728u;
    // 0x1d6728: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d6728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d672c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d672cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d6730:
    // 0x1d6730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6734: 0x0  nop
    ctx->pc = 0x1d6734u;
    // NOP
    // 0x1d6738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d6738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d673c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D673Cu;
    SET_GPR_U32(ctx, 31, 0x1D6744u);
    ctx->pc = 0x1D6740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D673Cu;
            // 0x1d6740: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6744u; }
        if (ctx->pc != 0x1D6744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6744u; }
        if (ctx->pc != 0x1D6744u) { return; }
    }
    ctx->pc = 0x1D6744u;
label_1d6744:
    // 0x1d6744: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6744u;
    SET_GPR_U32(ctx, 31, 0x1D674Cu);
    ctx->pc = 0x1D6748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6744u;
            // 0x1d6748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D674Cu; }
        if (ctx->pc != 0x1D674Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D674Cu; }
        if (ctx->pc != 0x1D674Cu) { return; }
    }
    ctx->pc = 0x1D674Cu;
label_1d674c:
    // 0x1d674c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D674Cu;
    {
        const bool branch_taken_0x1d674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D674Cu;
            // 0x1d6750: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d674c) {
            ctx->pc = 0x1D67B8u;
            goto label_1d67b8;
        }
    }
    ctx->pc = 0x1D6754u;
label_1d6754:
    // 0x1d6754: 0x6c10002  bgez        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6754u;
    {
        const bool branch_taken_0x1d6754 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x1D6758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6754u;
            // 0x1d6758: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6754) {
            ctx->pc = 0x1D6760u;
            goto label_1d6760;
        }
    }
    ctx->pc = 0x1D675Cu;
    // 0x1d675c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1d675cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6760:
    // 0x1d6760: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x1d6760u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6768: 0x0  nop
    ctx->pc = 0x1d6768u;
    // NOP
    // 0x1d676c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d676cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d6770: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d6770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6774: 0x0  nop
    ctx->pc = 0x1d6774u;
    // NOP
    // 0x1d6778: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6778u;
    {
        const bool branch_taken_0x1d6778 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6778) {
            ctx->pc = 0x1D6784u;
            goto label_1d6784;
        }
    }
    ctx->pc = 0x1D6780u;
    // 0x1d6780: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1d6780u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1d6784:
    // 0x1d6784: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1d6784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d6788: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6788u;
    {
        const bool branch_taken_0x1d6788 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6788u;
            // 0x1d678c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6788) {
            ctx->pc = 0x1D6798u;
            goto label_1d6798;
        }
    }
    ctx->pc = 0x1D6790u;
    // 0x1d6790: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d6790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d6794: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d6794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1d6798:
    // 0x1d6798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d679c: 0x0  nop
    ctx->pc = 0x1d679cu;
    // NOP
    // 0x1d67a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d67a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d67a4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D67A4u;
    SET_GPR_U32(ctx, 31, 0x1D67ACu);
    ctx->pc = 0x1D67A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67A4u;
            // 0x1d67a8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67ACu; }
        if (ctx->pc != 0x1D67ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67ACu; }
        if (ctx->pc != 0x1D67ACu) { return; }
    }
    ctx->pc = 0x1D67ACu;
label_1d67ac:
    // 0x1d67ac: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D67ACu;
    SET_GPR_U32(ctx, 31, 0x1D67B4u);
    ctx->pc = 0x1D67B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67ACu;
            // 0x1d67b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67B4u; }
        if (ctx->pc != 0x1D67B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67B4u; }
        if (ctx->pc != 0x1D67B4u) { return; }
    }
    ctx->pc = 0x1D67B4u;
label_1d67b4:
    // 0x1d67b4: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x1d67b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d67b8:
    // 0x1d67b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d67b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d67bc:
    // 0x1d67bc: 0x1aa0006a  blez        $s5, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D67BCu;
    {
        const bool branch_taken_0x1d67bc = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x1d67bc) {
            ctx->pc = 0x1D6968u;
            goto label_1d6968;
        }
    }
    ctx->pc = 0x1D67C4u;
label_1d67c4:
    // 0x1d67c4: 0x0  nop
    ctx->pc = 0x1d67c4u;
    // NOP
    // 0x1d67c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d67c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d67ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d67d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d67d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67d8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1d67d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67dc: 0xc075794  jal         func_1D5E50
    ctx->pc = 0x1D67DCu;
    SET_GPR_U32(ctx, 31, 0x1D67E4u);
    ctx->pc = 0x1D67E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67DCu;
            // 0x1d67e0: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5E50u;
    if (runtime->hasFunction(0x1D5E50u)) {
        auto targetFn = runtime->lookupFunction(0x1D5E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67E4u; }
        if (ctx->pc != 0x1D67E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinkConnectCheck__11CAutoMapGenFiiiii_0x1d5e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67E4u; }
        if (ctx->pc != 0x1D67E4u) { return; }
    }
    ctx->pc = 0x1D67E4u;
label_1d67e4:
    // 0x1d67e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D67E4u;
    {
        const bool branch_taken_0x1d67e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d67e4) {
            ctx->pc = 0x1D67F8u;
            goto label_1d67f8;
        }
    }
    ctx->pc = 0x1D67ECu;
    // 0x1d67ec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d67ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d67f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67f4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1d67f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d67f8:
    // 0x1d67f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D67F8u;
    {
        const bool branch_taken_0x1d67f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D67FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67F8u;
            // 0x1d67fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67f8) {
            ctx->pc = 0x1D682Cu;
            goto label_1d682c;
        }
    }
    ctx->pc = 0x1D6800u;
    // 0x1d6800: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6804: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6808: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1d6808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d680c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1d680cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6810: 0xc075794  jal         func_1D5E50
    ctx->pc = 0x1D6810u;
    SET_GPR_U32(ctx, 31, 0x1D6818u);
    ctx->pc = 0x1D6814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6810u;
            // 0x1d6814: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5E50u;
    if (runtime->hasFunction(0x1D5E50u)) {
        auto targetFn = runtime->lookupFunction(0x1D5E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6818u; }
        if (ctx->pc != 0x1D6818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinkConnectCheck__11CAutoMapGenFiiiii_0x1d5e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6818u; }
        if (ctx->pc != 0x1D6818u) { return; }
    }
    ctx->pc = 0x1D6818u;
label_1d6818:
    // 0x1d6818: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6818u;
    {
        const bool branch_taken_0x1d6818 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6818) {
            ctx->pc = 0x1D682Cu;
            goto label_1d682c;
        }
    }
    ctx->pc = 0x1D6820u;
    // 0x1d6820: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d6820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6824: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d6824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6828: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x1d6828u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d682c:
    // 0x1d682c: 0x0  nop
    ctx->pc = 0x1d682cu;
    // NOP
    // 0x1d6830: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d6830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d6834: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D6834u;
    {
        const bool branch_taken_0x1d6834 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6834u;
            // 0x1d6838: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6834) {
            ctx->pc = 0x1D6878u;
            goto label_1d6878;
        }
    }
    ctx->pc = 0x1D683Cu;
    // 0x1d683c: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D683Cu;
    {
        const bool branch_taken_0x1d683c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D683Cu;
            // 0x1d6840: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d683c) {
            ctx->pc = 0x1D6870u;
            goto label_1d6870;
        }
    }
    ctx->pc = 0x1D6844u;
    // 0x1d6844: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6844u;
    {
        const bool branch_taken_0x1d6844 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6844u;
            // 0x1d6848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6844) {
            ctx->pc = 0x1D6868u;
            goto label_1d6868;
        }
    }
    ctx->pc = 0x1D684Cu;
    // 0x1d684c: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D684Cu;
    {
        const bool branch_taken_0x1d684c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d684c) {
            ctx->pc = 0x1D685Cu;
            goto label_1d685c;
        }
    }
    ctx->pc = 0x1D6854u;
    // 0x1d6854: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6854u;
    {
        const bool branch_taken_0x1d6854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6854) {
            ctx->pc = 0x1D687Cu;
            goto label_1d687c;
        }
    }
    ctx->pc = 0x1D685Cu;
label_1d685c:
    // 0x1d685c: 0x0  nop
    ctx->pc = 0x1d685cu;
    // NOP
    // 0x1d6860: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6860u;
    {
        const bool branch_taken_0x1d6860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6860u;
            // 0x1d6864: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6860) {
            ctx->pc = 0x1D687Cu;
            goto label_1d687c;
        }
    }
    ctx->pc = 0x1D6868u;
label_1d6868:
    // 0x1d6868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6868u;
    {
        const bool branch_taken_0x1d6868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6868u;
            // 0x1d686c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6868) {
            ctx->pc = 0x1D687Cu;
            goto label_1d687c;
        }
    }
    ctx->pc = 0x1D6870u;
label_1d6870:
    // 0x1d6870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6870u;
    {
        const bool branch_taken_0x1d6870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6870u;
            // 0x1d6874: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6870) {
            ctx->pc = 0x1D687Cu;
            goto label_1d687c;
        }
    }
    ctx->pc = 0x1D6878u;
label_1d6878:
    // 0x1d6878: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d6878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d687c:
    // 0x1d687c: 0x0  nop
    ctx->pc = 0x1d687cu;
    // NOP
    // 0x1d6880: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d6880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d6884: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6884u;
    {
        const bool branch_taken_0x1d6884 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6884) {
            ctx->pc = 0x1D6894u;
            goto label_1d6894;
        }
    }
    ctx->pc = 0x1D688Cu;
    // 0x1d688c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D688Cu;
    {
        const bool branch_taken_0x1d688c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d688c) {
            ctx->pc = 0x1D68D4u;
            goto label_1d68d4;
        }
    }
    ctx->pc = 0x1D6894u;
label_1d6894:
    // 0x1d6894: 0x0  nop
    ctx->pc = 0x1d6894u;
    // NOP
    // 0x1d6898: 0x868401b8  lh          $a0, 0x1B8($s4)
    ctx->pc = 0x1d6898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1d689c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d689cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d68a0: 0x8e8301cc  lw          $v1, 0x1CC($s4)
    ctx->pc = 0x1d68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x1d68a4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d68a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d68ac: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x1d68acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d68b0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d68b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d68b4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d68b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d68b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d68bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d68c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d68c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d68c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d68c8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d68c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1d68cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D68CCu;
    {
        const bool branch_taken_0x1d68cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68CCu;
            // 0x1d68d0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68cc) {
            ctx->pc = 0x1D6910u;
            goto label_1d6910;
        }
    }
    ctx->pc = 0x1D68D4u;
label_1d68d4:
    // 0x1d68d4: 0x0  nop
    ctx->pc = 0x1d68d4u;
    // NOP
    // 0x1d68d8: 0x868401b8  lh          $a0, 0x1B8($s4)
    ctx->pc = 0x1d68d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1d68dc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d68e0: 0x8e8301cc  lw          $v1, 0x1CC($s4)
    ctx->pc = 0x1d68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x1d68e4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d68e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d68ec: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x1d68ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d68f0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d68f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d68f4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d68f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d68f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d68fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d6900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6904: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d6904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6908: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d6908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d690c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d690cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1d6910:
    // 0x1d6910: 0x16c0000d  bnez        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6910u;
    {
        const bool branch_taken_0x1d6910 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6910) {
            ctx->pc = 0x1D6948u;
            goto label_1d6948;
        }
    }
    ctx->pc = 0x1D6918u;
    // 0x1d6918: 0x868401b8  lh          $a0, 0x1B8($s4)
    ctx->pc = 0x1d6918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 440)));
    // 0x1d691c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d691cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d6920: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6924: 0x8e8301cc  lw          $v1, 0x1CC($s4)
    ctx->pc = 0x1d6924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 460)));
    // 0x1d6928: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d692c: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x1d692cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d6930: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d6930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d6934: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d6934u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d6938: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d6938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d693c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d693cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6940: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6944: 0xa4530008  sh          $s3, 0x8($v0)
    ctx->pc = 0x1d6944u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 19));
label_1d6948:
    // 0x1d6948: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d6948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d694c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d694cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6950: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6954: 0xc075814  jal         func_1D6050
    ctx->pc = 0x1D6954u;
    SET_GPR_U32(ctx, 31, 0x1D695Cu);
    ctx->pc = 0x1D6958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6954u;
            // 0x1d6958: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6050u;
    if (runtime->hasFunction(0x1D6050u)) {
        auto targetFn = runtime->lookupFunction(0x1D6050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D695Cu; }
        if (ctx->pc != 0x1D695Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoadLinkMark__11CAutoMapGenFiii_0x1d6050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D695Cu; }
        if (ctx->pc != 0x1D695Cu) { return; }
    }
    ctx->pc = 0x1D695Cu;
label_1d695c:
    // 0x1d695c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1d695cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d6960: 0x1ea0ff98  bgtz        $s5, . + 4 + (-0x68 << 2)
    ctx->pc = 0x1D6960u;
    {
        const bool branch_taken_0x1d6960 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x1d6960) {
            ctx->pc = 0x1D67C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d67c4;
        }
    }
    ctx->pc = 0x1D6968u;
label_1d6968:
    // 0x1d6968: 0x2171023  subu        $v0, $s0, $s7
    ctx->pc = 0x1d6968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1d696c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d696cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6974: 0x0  nop
    ctx->pc = 0x1d6974u;
    // NOP
    // 0x1d6978: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1d6978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1d697c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1d697cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6980: 0x0  nop
    ctx->pc = 0x1d6980u;
    // NOP
    // 0x1d6984: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6984u;
    {
        const bool branch_taken_0x1d6984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6984) {
            ctx->pc = 0x1D6990u;
            goto label_1d6990;
        }
    }
    ctx->pc = 0x1D698Cu;
    // 0x1d698c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1d698cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1d6990:
    // 0x1d6990: 0x23e1823  subu        $v1, $s1, $fp
    ctx->pc = 0x1d6990u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x1d6994: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6998: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d699c: 0x0  nop
    ctx->pc = 0x1d699cu;
    // NOP
    // 0x1d69a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d69a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d69a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d69a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d69a8: 0x0  nop
    ctx->pc = 0x1d69a8u;
    // NOP
    // 0x1d69ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D69ACu;
    {
        const bool branch_taken_0x1d69ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d69ac) {
            ctx->pc = 0x1D69B8u;
            goto label_1d69b8;
        }
    }
    ctx->pc = 0x1D69B4u;
    // 0x1d69b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1d69b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1d69b8:
    // 0x1d69b8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1d69b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d69bc: 0x0  nop
    ctx->pc = 0x1d69bcu;
    // NOP
    // 0x1d69c0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1D69C0u;
    {
        const bool branch_taken_0x1d69c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d69c0) {
            ctx->pc = 0x1D6A1Cu;
            goto label_1d6a1c;
        }
    }
    ctx->pc = 0x1D69C8u;
    // 0x1d69c8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D69C8u;
    {
        const bool branch_taken_0x1d69c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D69CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D69C8u;
            // 0x1d69cc: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d69c8) {
            ctx->pc = 0x1D69D8u;
            goto label_1d69d8;
        }
    }
    ctx->pc = 0x1D69D0u;
    // 0x1d69d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D69D0u;
    {
        const bool branch_taken_0x1d69d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d69d0) {
            ctx->pc = 0x1D69DCu;
            goto label_1d69dc;
        }
    }
    ctx->pc = 0x1D69D8u;
label_1d69d8:
    // 0x1d69d8: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1d69d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d69dc:
    // 0x1d69dc: 0x0  nop
    ctx->pc = 0x1d69dcu;
    // NOP
    // 0x1d69e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d69e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d69e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d69e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d69e8: 0x0  nop
    ctx->pc = 0x1d69e8u;
    // NOP
    // 0x1d69ec: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d69ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d69f0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d69f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d69f4: 0x0  nop
    ctx->pc = 0x1d69f4u;
    // NOP
    // 0x1d69f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D69F8u;
    {
        const bool branch_taken_0x1d69f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d69f8) {
            ctx->pc = 0x1D6A04u;
            goto label_1d6a04;
        }
    }
    ctx->pc = 0x1D6A00u;
    // 0x1d6a00: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1d6a00u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1d6a04:
    // 0x1d6a04: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D6A04u;
    SET_GPR_U32(ctx, 31, 0x1D6A0Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A0Cu; }
        if (ctx->pc != 0x1D6A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A0Cu; }
        if (ctx->pc != 0x1D6A0Cu) { return; }
    }
    ctx->pc = 0x1D6A0Cu;
label_1d6a0c:
    // 0x1d6a0c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6A0Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A14u);
    ctx->pc = 0x1D6A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A0Cu;
            // 0x1d6a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A14u; }
        if (ctx->pc != 0x1D6A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A14u; }
        if (ctx->pc != 0x1D6A14u) { return; }
    }
    ctx->pc = 0x1D6A14u;
label_1d6a14:
    // 0x1d6a14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D6A14u;
    {
        const bool branch_taken_0x1d6a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A14u;
            // 0x1d6a18: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a14) {
            ctx->pc = 0x1D6A70u;
            goto label_1d6a70;
        }
    }
    ctx->pc = 0x1D6A1Cu;
label_1d6a1c:
    // 0x1d6a1c: 0x0  nop
    ctx->pc = 0x1d6a1cu;
    // NOP
    // 0x1d6a20: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6A20u;
    {
        const bool branch_taken_0x1d6a20 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D6A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A20u;
            // 0x1d6a24: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a20) {
            ctx->pc = 0x1D6A30u;
            goto label_1d6a30;
        }
    }
    ctx->pc = 0x1D6A28u;
    // 0x1d6a28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6A28u;
    {
        const bool branch_taken_0x1d6a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6a28) {
            ctx->pc = 0x1D6A34u;
            goto label_1d6a34;
        }
    }
    ctx->pc = 0x1D6A30u;
label_1d6a30:
    // 0x1d6a30: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d6a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6a34:
    // 0x1d6a34: 0x0  nop
    ctx->pc = 0x1d6a34u;
    // NOP
    // 0x1d6a38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6a40: 0x0  nop
    ctx->pc = 0x1d6a40u;
    // NOP
    // 0x1d6a44: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d6a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d6a48: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d6a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6a4c: 0x0  nop
    ctx->pc = 0x1d6a4cu;
    // NOP
    // 0x1d6a50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6A50u;
    {
        const bool branch_taken_0x1d6a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6a50) {
            ctx->pc = 0x1D6A5Cu;
            goto label_1d6a5c;
        }
    }
    ctx->pc = 0x1D6A58u;
    // 0x1d6a58: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1d6a58u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1d6a5c:
    // 0x1d6a5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D6A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A64u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A64u; }
        if (ctx->pc != 0x1D6A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A64u; }
        if (ctx->pc != 0x1D6A64u) { return; }
    }
    ctx->pc = 0x1D6A64u;
label_1d6a64:
    // 0x1d6a64: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6A64u;
    SET_GPR_U32(ctx, 31, 0x1D6A6Cu);
    ctx->pc = 0x1D6A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6A64u;
            // 0x1d6a68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A6Cu; }
        if (ctx->pc != 0x1D6A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6A6Cu; }
        if (ctx->pc != 0x1D6A6Cu) { return; }
    }
    ctx->pc = 0x1D6A6Cu;
label_1d6a6c:
    // 0x1d6a6c: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x1d6a6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d6a70:
    // 0x1d6a70: 0x12c0ff52  beqz        $s6, . + 4 + (-0xAE << 2)
    ctx->pc = 0x1D6A70u;
    {
        const bool branch_taken_0x1d6a70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6a70) {
            ctx->pc = 0x1D67BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d67bc;
        }
    }
    ctx->pc = 0x1D6A78u;
    // 0x1d6a78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d6a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d6a7c:
    // 0x1d6a7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d6a7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d6a80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d6a80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d6a84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d6a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d6a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d6a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d6a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d6a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d6a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d6a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d6a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d6a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d6a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6AA0u;
            // 0x1d6aa4: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6AA8u;
}
