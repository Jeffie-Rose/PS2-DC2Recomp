#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LaneBattleStep__FP15RACE_FISH_PARAMi
// Address: 0x31de50 - 0x31e8cc
void LaneBattleStep__FP15RACE_FISH_PARAMi_0x31de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LaneBattleStep__FP15RACE_FISH_PARAMi_0x31de50");
#endif

    switch (ctx->pc) {
        case 0x31dec4u: goto label_31dec4;
        case 0x31e0e0u: goto label_31e0e0;
        case 0x31e144u: goto label_31e144;
        case 0x31e14cu: goto label_31e14c;
        case 0x31e16cu: goto label_31e16c;
        case 0x31e1ccu: goto label_31e1cc;
        case 0x31e20cu: goto label_31e20c;
        case 0x31e25cu: goto label_31e25c;
        case 0x31e29cu: goto label_31e29c;
        case 0x31e2a8u: goto label_31e2a8;
        case 0x31e384u: goto label_31e384;
        case 0x31e3bcu: goto label_31e3bc;
        case 0x31e4ccu: goto label_31e4cc;
        case 0x31e4f8u: goto label_31e4f8;
        case 0x31e534u: goto label_31e534;
        case 0x31e5c8u: goto label_31e5c8;
        case 0x31e644u: goto label_31e644;
        case 0x31e650u: goto label_31e650;
        case 0x31e698u: goto label_31e698;
        case 0x31e6c0u: goto label_31e6c0;
        case 0x31e788u: goto label_31e788;
        default: break;
    }

    ctx->pc = 0x31de50u;

    // 0x31de50: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x31de50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x31de54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31de54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31de58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x31de58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x31de5c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x31de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x31de60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x31de60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x31de64: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x31de64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x31de68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x31de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x31de6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31de70: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31de70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31de74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x31de78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31de78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31de7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31de80: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31de80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31de84: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x31de84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x31de88: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x31de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31de8c: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x31de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x31de90: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x31de90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x31de94: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x31de94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x31de98: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x31de98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
    // 0x31de9c: 0xafa001ac  sw          $zero, 0x1AC($sp)
    ctx->pc = 0x31de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
    // 0x31dea0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x31dea0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31dea4: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x31dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
    // 0x31dea8: 0x102000a4  beqz        $at, . + 4 + (0xA4 << 2)
    ctx->pc = 0x31DEA8u;
    {
        const bool branch_taken_0x31dea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DEA8u;
            // 0x31deac: 0xafa001b4  sw          $zero, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dea8) {
            ctx->pc = 0x31E13Cu;
            goto label_31e13c;
        }
    }
    ctx->pc = 0x31DEB0u;
    // 0x31deb0: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x31deb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x31deb4: 0x14200083  bnez        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x31DEB4u;
    {
        const bool branch_taken_0x31deb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DEB4u;
            // 0x31deb8: 0x244afff8  addiu       $t2, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31deb4) {
            ctx->pc = 0x31E0C4u;
            goto label_31e0c4;
        }
    }
    ctx->pc = 0x31DEBCu;
    // 0x31debc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x31debcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dec0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x31dec0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dec4:
    // 0x31dec4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x31dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x31dec8: 0x25280001  addiu       $t0, $t1, 0x1
    ctx->pc = 0x31dec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31decc: 0x25270002  addiu       $a3, $t1, 0x2
    ctx->pc = 0x31deccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x31ded0: 0x25260003  addiu       $a2, $t1, 0x3
    ctx->pc = 0x31ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x31ded4: 0x25250004  addiu       $a1, $t1, 0x4
    ctx->pc = 0x31ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x31ded8: 0x25240005  addiu       $a0, $t1, 0x5
    ctx->pc = 0x31ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x31dedc: 0x25230006  addiu       $v1, $t1, 0x6
    ctx->pc = 0x31dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
    // 0x31dee0: 0x4b6821  addu        $t5, $v0, $t3
    ctx->pc = 0x31dee0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x31dee4: 0x19d1021  addu        $v0, $t4, $sp
    ctx->pc = 0x31dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x31dee8: 0x256b0500  addiu       $t3, $t3, 0x500
    ctx->pc = 0x31dee8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1280));
    // 0x31deec: 0x244e00f0  addiu       $t6, $v0, 0xF0
    ctx->pc = 0x31deecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x31def0: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x31def0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x31def4: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x31def4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x31def8: 0x25220007  addiu       $v0, $t1, 0x7
    ctx->pc = 0x31def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x31defc: 0x8db10058  lw          $s1, 0x58($t5)
    ctx->pc = 0x31defcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 88)));
    // 0x31df00: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x31df00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31df04: 0x117880  sll         $t7, $s1, 2
    ctx->pc = 0x31df04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31df08: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x31df08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x31df0c: 0x1fd8821  addu        $s1, $t7, $sp
    ctx->pc = 0x31df0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x31df10: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x31df10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x31df14: 0x8e2f01a0  lw          $t7, 0x1A0($s1)
    ctx->pc = 0x31df14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x31df18: 0x21d9021  addu        $s2, $s0, $sp
    ctx->pc = 0x31df18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x31df1c: 0x25f00001  addiu       $s0, $t7, 0x1
    ctx->pc = 0x31df1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x31df20: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x31df20u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x31df24: 0xae3001a0  sw          $s0, 0x1A0($s1)
    ctx->pc = 0x31df24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 16));
    // 0x31df28: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x31df28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x31df2c: 0xade90110  sw          $t1, 0x110($t7)
    ctx->pc = 0x31df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 272), GPR_U32(ctx, 9));
    // 0x31df30: 0xadc80004  sw          $t0, 0x4($t6)
    ctx->pc = 0x31df30u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 8));
    // 0x31df34: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x31df34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x31df38: 0x8db200f8  lw          $s2, 0xF8($t5)
    ctx->pc = 0x31df38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 248)));
    // 0x31df3c: 0x12a782a  slt         $t7, $t1, $t2
    ctx->pc = 0x31df3cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x31df40: 0x128840  sll         $s1, $s2, 1
    ctx->pc = 0x31df40u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x31df44: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x31df44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x31df48: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x31df48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x31df4c: 0x21d9021  addu        $s2, $s0, $sp
    ctx->pc = 0x31df4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x31df50: 0x1188c0  sll         $s1, $s1, 3
    ctx->pc = 0x31df50u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x31df54: 0x8e5001a0  lw          $s0, 0x1A0($s2)
    ctx->pc = 0x31df54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x31df58: 0x23d9821  addu        $s3, $s1, $sp
    ctx->pc = 0x31df58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x31df5c: 0x26110001  addiu       $s1, $s0, 0x1
    ctx->pc = 0x31df5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31df60: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x31df60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31df64: 0xae5101a0  sw          $s1, 0x1A0($s2)
    ctx->pc = 0x31df64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 17));
    // 0x31df68: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x31df68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x31df6c: 0xae080110  sw          $t0, 0x110($s0)
    ctx->pc = 0x31df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 8));
    // 0x31df70: 0xadc70008  sw          $a3, 0x8($t6)
    ctx->pc = 0x31df70u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 7));
    // 0x31df74: 0x8db10198  lw          $s1, 0x198($t5)
    ctx->pc = 0x31df74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 408)));
    // 0x31df78: 0x118040  sll         $s0, $s1, 1
    ctx->pc = 0x31df78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x31df7c: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x31df7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31df80: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x31df80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x31df84: 0x11d8821  addu        $s1, $t0, $sp
    ctx->pc = 0x31df84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x31df88: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x31df88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x31df8c: 0x8e2801a0  lw          $t0, 0x1A0($s1)
    ctx->pc = 0x31df8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x31df90: 0x21d9021  addu        $s2, $s0, $sp
    ctx->pc = 0x31df90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x31df94: 0x25100001  addiu       $s0, $t0, 0x1
    ctx->pc = 0x31df94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31df98: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x31df98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x31df9c: 0xae3001a0  sw          $s0, 0x1A0($s1)
    ctx->pc = 0x31df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 16));
    // 0x31dfa0: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x31dfa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x31dfa4: 0xad070110  sw          $a3, 0x110($t0)
    ctx->pc = 0x31dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 272), GPR_U32(ctx, 7));
    // 0x31dfa8: 0xadc6000c  sw          $a2, 0xC($t6)
    ctx->pc = 0x31dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 6));
    // 0x31dfac: 0x8db00238  lw          $s0, 0x238($t5)
    ctx->pc = 0x31dfacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 568)));
    // 0x31dfb0: 0x104040  sll         $t0, $s0, 1
    ctx->pc = 0x31dfb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x31dfb4: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x31dfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x31dfb8: 0x1104021  addu        $t0, $t0, $s0
    ctx->pc = 0x31dfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x31dfbc: 0xfd8021  addu        $s0, $a3, $sp
    ctx->pc = 0x31dfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31dfc0: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x31dfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x31dfc4: 0x8e0701a0  lw          $a3, 0x1A0($s0)
    ctx->pc = 0x31dfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x31dfc8: 0x11d8821  addu        $s1, $t0, $sp
    ctx->pc = 0x31dfc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x31dfcc: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x31dfccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x31dfd0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x31dfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x31dfd4: 0xae0801a0  sw          $t0, 0x1A0($s0)
    ctx->pc = 0x31dfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 8));
    // 0x31dfd8: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x31dfd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x31dfdc: 0xace60110  sw          $a2, 0x110($a3)
    ctx->pc = 0x31dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 272), GPR_U32(ctx, 6));
    // 0x31dfe0: 0xadc50010  sw          $a1, 0x10($t6)
    ctx->pc = 0x31dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 5));
    // 0x31dfe4: 0x8da802d8  lw          $t0, 0x2D8($t5)
    ctx->pc = 0x31dfe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 728)));
    // 0x31dfe8: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x31dfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x31dfec: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x31dfecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x31dff0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x31dff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x31dff4: 0xdd4021  addu        $t0, $a2, $sp
    ctx->pc = 0x31dff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x31dff8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x31dff8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x31dffc: 0x8d0601a0  lw          $a2, 0x1A0($t0)
    ctx->pc = 0x31dffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 416)));
    // 0x31e000: 0xfd8021  addu        $s0, $a3, $sp
    ctx->pc = 0x31e000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31e004: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x31e004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31e008: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x31e008u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31e00c: 0xad0701a0  sw          $a3, 0x1A0($t0)
    ctx->pc = 0x31e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 416), GPR_U32(ctx, 7));
    // 0x31e010: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x31e010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x31e014: 0xacc50110  sw          $a1, 0x110($a2)
    ctx->pc = 0x31e014u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 5));
    // 0x31e018: 0xadc40014  sw          $a0, 0x14($t6)
    ctx->pc = 0x31e018u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 4));
    // 0x31e01c: 0x8da70378  lw          $a3, 0x378($t5)
    ctx->pc = 0x31e01cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 888)));
    // 0x31e020: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x31e020u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x31e024: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x31e024u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x31e028: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x31e028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x31e02c: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x31e02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x31e030: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x31e030u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x31e034: 0x8ce501a0  lw          $a1, 0x1A0($a3)
    ctx->pc = 0x31e034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x31e038: 0xdd4021  addu        $t0, $a2, $sp
    ctx->pc = 0x31e038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x31e03c: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x31e03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31e040: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x31e040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31e044: 0xace601a0  sw          $a2, 0x1A0($a3)
    ctx->pc = 0x31e044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 416), GPR_U32(ctx, 6));
    // 0x31e048: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x31e048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x31e04c: 0xaca40110  sw          $a0, 0x110($a1)
    ctx->pc = 0x31e04cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 272), GPR_U32(ctx, 4));
    // 0x31e050: 0xadc30018  sw          $v1, 0x18($t6)
    ctx->pc = 0x31e050u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 3));
    // 0x31e054: 0x8da60418  lw          $a2, 0x418($t5)
    ctx->pc = 0x31e054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1048)));
    // 0x31e058: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x31e058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x31e05c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x31e05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31e060: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x31e060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x31e064: 0x9d3021  addu        $a2, $a0, $sp
    ctx->pc = 0x31e064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x31e068: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31e068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31e06c: 0x8cc401a0  lw          $a0, 0x1A0($a2)
    ctx->pc = 0x31e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 416)));
    // 0x31e070: 0xbd3821  addu        $a3, $a1, $sp
    ctx->pc = 0x31e070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x31e074: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x31e074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31e078: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x31e078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31e07c: 0xacc501a0  sw          $a1, 0x1A0($a2)
    ctx->pc = 0x31e07cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 416), GPR_U32(ctx, 5));
    // 0x31e080: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x31e080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x31e084: 0xac830110  sw          $v1, 0x110($a0)
    ctx->pc = 0x31e084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
    // 0x31e088: 0xadc2001c  sw          $v0, 0x1C($t6)
    ctx->pc = 0x31e088u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 2));
    // 0x31e08c: 0x8da504b8  lw          $a1, 0x4B8($t5)
    ctx->pc = 0x31e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1208)));
    // 0x31e090: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x31e090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x31e094: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x31e094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x31e098: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x31e098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31e09c: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x31e09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x31e0a0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x31e0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x31e0a4: 0x8ca301a0  lw          $v1, 0x1A0($a1)
    ctx->pc = 0x31e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x31e0a8: 0x9d3021  addu        $a2, $a0, $sp
    ctx->pc = 0x31e0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x31e0ac: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x31e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31e0b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31e0b4: 0xaca401a0  sw          $a0, 0x1A0($a1)
    ctx->pc = 0x31e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 416), GPR_U32(ctx, 4));
    // 0x31e0b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31e0bc: 0x15e0ff81  bnez        $t7, . + 4 + (-0x7F << 2)
    ctx->pc = 0x31E0BCu;
    {
        const bool branch_taken_0x31e0bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E0BCu;
            // 0x31e0c0: 0xac620110  sw          $v0, 0x110($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0bc) {
            ctx->pc = 0x31DEC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31dec4;
        }
    }
    ctx->pc = 0x31E0C4u;
label_31e0c4:
    // 0x31e0c4: 0x0  nop
    ctx->pc = 0x31e0c4u;
    // NOP
    // 0x31e0c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x31e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31e0cc: 0x122082a  slt         $at, $t1, $v0
    ctx->pc = 0x31e0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31e0d0: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x31E0D0u;
    {
        const bool branch_taken_0x31e0d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E0D0u;
            // 0x31e0d4: 0x93880  sll         $a3, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0d0) {
            ctx->pc = 0x31E13Cu;
            goto label_31e13c;
        }
    }
    ctx->pc = 0x31E0D8u;
    // 0x31e0d8: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x31e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x31e0dc: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x31e0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_31e0e0:
    // 0x31e0e0: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x31e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x31e0e4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x31e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31e0e8: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x31e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31e0ec: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x31e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x31e0f0: 0xac4900f0  sw          $t1, 0xF0($v0)
    ctx->pc = 0x31e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 9));
    // 0x31e0f4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x31e0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x31e0f8: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x31e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31e0fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x31e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31e100: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x31e100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x31e104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31e108: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x31e108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31e10c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31e110: 0x8c8201a0  lw          $v0, 0x1A0($a0)
    ctx->pc = 0x31e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 416)));
    // 0x31e114: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x31e114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x31e118: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x31e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31e11c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31e120: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31e124: 0xac490110  sw          $t1, 0x110($v0)
    ctx->pc = 0x31e124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 9));
    // 0x31e128: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x31e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31e12c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x31e12cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x31e130: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x31e130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31e134: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31E134u;
    {
        const bool branch_taken_0x31e134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E134u;
            // 0x31e138: 0xac8301a0  sw          $v1, 0x1A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e134) {
            ctx->pc = 0x31E0E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e0e0;
        }
    }
    ctx->pc = 0x31E13Cu;
label_31e13c:
    // 0x31e13c: 0x0  nop
    ctx->pc = 0x31e13cu;
    // NOP
    // 0x31e140: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31e140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e144:
    // 0x31e144: 0xc0c8158  jal         func_320560
    ctx->pc = 0x31E144u;
    SET_GPR_U32(ctx, 31, 0x31E14Cu);
    ctx->pc = 0x320560u;
    if (runtime->hasFunction(0x320560u)) {
        auto targetFn = runtime->lookupFunction(0x320560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E14Cu; }
        if (ctx->pc != 0x31E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        irnd__Fv_0x320560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E14Cu; }
        if (ctx->pc != 0x31E14Cu) { return; }
    }
    ctx->pc = 0x31E14Cu;
label_31e14c:
    // 0x31e14c: 0x21d83  sra         $v1, $v0, 22
    ctx->pc = 0x31e14cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 22));
    // 0x31e150: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x31e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31e154: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E154u;
    {
        const bool branch_taken_0x31e154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E154u;
            // 0x31e158: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e154) {
            ctx->pc = 0x31E160u;
            goto label_31e160;
        }
    }
    ctx->pc = 0x31E15Cu;
    // 0x31e15c: 0x1cd  break       0, 7
    ctx->pc = 0x31e15cu;
    runtime->handleBreak(rdram, ctx);
label_31e160:
    // 0x31e160: 0x8810  mfhi        $s1
    ctx->pc = 0x31e160u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x31e164: 0xc0c8158  jal         func_320560
    ctx->pc = 0x31E164u;
    SET_GPR_U32(ctx, 31, 0x31E16Cu);
    ctx->pc = 0x320560u;
    if (runtime->hasFunction(0x320560u)) {
        auto targetFn = runtime->lookupFunction(0x320560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E16Cu; }
        if (ctx->pc != 0x31E16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        irnd__Fv_0x320560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E16Cu; }
        if (ctx->pc != 0x31E16Cu) { return; }
    }
    ctx->pc = 0x31E16Cu;
label_31e16c:
    // 0x31e16c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x31e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31e170: 0x23583  sra         $a2, $v0, 22
    ctx->pc = 0x31e170u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 22));
    // 0x31e174: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E174u;
    {
        const bool branch_taken_0x31e174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E174u;
            // 0x31e178: 0xc3001a  div         $zero, $a2, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e174) {
            ctx->pc = 0x31E180u;
            goto label_31e180;
        }
    }
    ctx->pc = 0x31E17Cu;
    // 0x31e17c: 0x1cd  break       0, 7
    ctx->pc = 0x31e17cu;
    runtime->handleBreak(rdram, ctx);
label_31e180:
    // 0x31e180: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x31e180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x31e184: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31e184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31e188: 0x7d3021  addu        $a2, $v1, $sp
    ctx->pc = 0x31e188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x31e18c: 0x24c800f0  addiu       $t0, $a2, 0xF0
    ctx->pc = 0x31e18cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x31e190: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x31e190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x31e194: 0x3010  mfhi        $a2
    ctx->pc = 0x31e194u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x31e198: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x31e198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31e19c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x31e19cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31e1a0: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x31e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x31e1a4: 0x24c900f0  addiu       $t1, $a2, 0xF0
    ctx->pc = 0x31e1a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x31e1a8: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x31e1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x31e1ac: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x31e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x31e1b0: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x31E1B0u;
    {
        const bool branch_taken_0x31e1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E1B0u;
            // 0x31e1b4: 0xad270000  sw          $a3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1b0) {
            ctx->pc = 0x31E144u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e144;
        }
    }
    ctx->pc = 0x31E1B8u;
    // 0x31e1b8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x31e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31e1bc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x31e1bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31e1c0: 0x102001b4  beqz        $at, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x31E1C0u;
    {
        const bool branch_taken_0x31e1c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E1C0u;
            // 0x31e1c4: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1c0) {
            ctx->pc = 0x31E894u;
            goto label_31e894;
        }
    }
    ctx->pc = 0x31E1C8u;
    // 0x31e1c8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x31e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_31e1cc:
    // 0x31e1cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x31e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31e1d0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x31e1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x31e1d4: 0xdf838690  ld          $v1, -0x7970($gp)
    ctx->pc = 0x31e1d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936208)));
    // 0x31e1d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31e1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e1dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31e1dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e1e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31e1e4: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x31e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x31e1e8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x31e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x31e1ec: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x31e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x31e1f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x31e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31e1f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31e1f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31e1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e200: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31e200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31e204: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x31e204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x31e208: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x31e208u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31e20c:
    // 0x31e20c: 0x0  nop
    ctx->pc = 0x31e20cu;
    // NOP
    // 0x31e210: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x31e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x31e214: 0x245401b8  addiu       $s4, $v0, 0x1B8
    ctx->pc = 0x31e214u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 440));
    // 0x31e218: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x31e218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x31e21c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E21Cu;
    {
        const bool branch_taken_0x31e21c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E21Cu;
            // 0x31e220: 0x8fd20058  lw          $s2, 0x58($fp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e21c) {
            ctx->pc = 0x31E22Cu;
            goto label_31e22c;
        }
    }
    ctx->pc = 0x31E224u;
    // 0x31e224: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31E224u;
    {
        const bool branch_taken_0x31e224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E224u;
            // 0x31e228: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e224) {
            ctx->pc = 0x31E234u;
            goto label_31e234;
        }
    }
    ctx->pc = 0x31E22Cu;
label_31e22c:
    // 0x31e22c: 0x0  nop
    ctx->pc = 0x31e22cu;
    // NOP
    // 0x31e230: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31e230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31e234:
    // 0x31e234: 0x0  nop
    ctx->pc = 0x31e234u;
    // NOP
    // 0x31e238: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E238u;
    {
        const bool branch_taken_0x31e238 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x31E23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E238u;
            // 0x31e23c: 0x2a420006  slti        $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e238) {
            ctx->pc = 0x31E248u;
            goto label_31e248;
        }
    }
    ctx->pc = 0x31E240u;
    // 0x31e240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E240u;
    {
        const bool branch_taken_0x31e240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e240) {
            ctx->pc = 0x31E250u;
            goto label_31e250;
        }
    }
    ctx->pc = 0x31E248u;
label_31e248:
    // 0x31e248: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x31E248u;
    {
        const bool branch_taken_0x31e248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E248u;
            // 0x31e24c: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e248) {
            ctx->pc = 0x31E360u;
            goto label_31e360;
        }
    }
    ctx->pc = 0x31E250u;
label_31e250:
    // 0x31e250: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31e250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e254: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x31E254u;
    {
        const bool branch_taken_0x31e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E254u;
            // 0x31e258: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e254) {
            ctx->pc = 0x31E348u;
            goto label_31e348;
        }
    }
    ctx->pc = 0x31E25Cu;
label_31e25c:
    // 0x31e25c: 0x0  nop
    ctx->pc = 0x31e25cu;
    // NOP
    // 0x31e260: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x31e260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x31e264: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x31e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31e268: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x31e268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e26c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31e270: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31e270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31e274: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x31e274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x31e278: 0x24560110  addiu       $s6, $v0, 0x110
    ctx->pc = 0x31e278u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x31e27c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x31e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x31e280: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31e280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31e284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e288: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31e288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31e28c: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x31e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x31e290: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x31e290u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e294: 0xc0c76dc  jal         func_31DB70
    ctx->pc = 0x31E294u;
    SET_GPR_U32(ctx, 31, 0x31E29Cu);
    ctx->pc = 0x31E298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E294u;
            // 0x31e298: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DB70u;
    if (runtime->hasFunction(0x31DB70u)) {
        auto targetFn = runtime->lookupFunction(0x31DB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E29Cu; }
        if (ctx->pc != 0x31E29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishDist__FP15RACE_FISH_PARAMP15RACE_FISH_PARAM_0x31db70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E29Cu; }
        if (ctx->pc != 0x31E29Cu) { return; }
    }
    ctx->pc = 0x31E29Cu;
label_31e29c:
    // 0x31e29c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x31e29cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x31e2a0: 0xc0c75d8  jal         func_31D760
    ctx->pc = 0x31E2A0u;
    SET_GPR_U32(ctx, 31, 0x31E2A8u);
    ctx->pc = 0x31E2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E2A0u;
            // 0x31e2a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D760u;
    if (runtime->hasFunction(0x31D760u)) {
        auto targetFn = runtime->lookupFunction(0x31D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E2A8u; }
        if (ctx->pc != 0x31E2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs__Ff_0x31d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E2A8u; }
        if (ctx->pc != 0x31E2A8u) { return; }
    }
    ctx->pc = 0x31E2A8u;
label_31e2a8:
    // 0x31e2a8: 0x3c023d99  lui         $v0, 0x3D99
    ctx->pc = 0x31e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15769 << 16));
    // 0x31e2ac: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31e2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31e2b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e2b4: 0x0  nop
    ctx->pc = 0x31e2b4u;
    // NOP
    // 0x31e2b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31e2b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e2bc: 0x0  nop
    ctx->pc = 0x31e2bcu;
    // NOP
    // 0x31e2c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31E2C0u;
    {
        const bool branch_taken_0x31e2c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E2C0u;
            // 0x31e2c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2c0) {
            ctx->pc = 0x31E2CCu;
            goto label_31e2cc;
        }
    }
    ctx->pc = 0x31E2C8u;
    // 0x31e2c8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x31e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_31e2cc:
    // 0x31e2cc: 0x0  nop
    ctx->pc = 0x31e2ccu;
    // NOP
    // 0x31e2d0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x31e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x31e2d4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x31e2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x31e2d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e2dc: 0x0  nop
    ctx->pc = 0x31e2dcu;
    // NOP
    // 0x31e2e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31e2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e2e4: 0x0  nop
    ctx->pc = 0x31e2e4u;
    // NOP
    // 0x31e2e8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x31E2E8u;
    {
        const bool branch_taken_0x31e2e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e2e8) {
            ctx->pc = 0x31E340u;
            goto label_31e340;
        }
    }
    ctx->pc = 0x31E2F0u;
    // 0x31e2f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x31e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x31e2f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x31E2F4u;
    {
        const bool branch_taken_0x31e2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e2f4) {
            ctx->pc = 0x31E340u;
            goto label_31e340;
        }
    }
    ctx->pc = 0x31E2FCu;
    // 0x31e2fc: 0x92e3005c  lbu         $v1, 0x5C($s7)
    ctx->pc = 0x31e2fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 92)));
    // 0x31e300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31e304: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31E304u;
    {
        const bool branch_taken_0x31e304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31E308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E304u;
            // 0x31e308: 0x27d1821  addu        $v1, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e304) {
            ctx->pc = 0x31E340u;
            goto label_31e340;
        }
    }
    ctx->pc = 0x31E30Cu;
    // 0x31e30c: 0x246601c0  addiu       $a2, $v1, 0x1C0
    ctx->pc = 0x31e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x31e310: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x31e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31e314: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E314u;
    {
        const bool branch_taken_0x31e314 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x31e314) {
            ctx->pc = 0x31E330u;
            goto label_31e330;
        }
    }
    ctx->pc = 0x31E31Cu;
    // 0x31e31c: 0xc46001c8  lwc1        $f0, 0x1C8($v1)
    ctx->pc = 0x31e31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e320: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x31e320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e324: 0x0  nop
    ctx->pc = 0x31e324u;
    // NOP
    // 0x31e328: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x31E328u;
    {
        const bool branch_taken_0x31e328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e328) {
            ctx->pc = 0x31E340u;
            goto label_31e340;
        }
    }
    ctx->pc = 0x31E330u;
label_31e330:
    // 0x31e330: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x31e330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x31e334: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x31e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x31e338: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x31e338u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x31e33c: 0xe45401c8  swc1        $f20, 0x1C8($v0)
    ctx->pc = 0x31e33cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 456), bits); }
label_31e340:
    // 0x31e340: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x31e340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x31e344: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31e344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31e348:
    // 0x31e348: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x31e348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x31e34c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x31e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x31e350: 0x8c4201a0  lw          $v0, 0x1A0($v0)
    ctx->pc = 0x31e350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x31e354: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x31e354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31e358: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x31E358u;
    {
        const bool branch_taken_0x31e358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e358) {
            ctx->pc = 0x31E25Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e25c;
        }
    }
    ctx->pc = 0x31E360u;
label_31e360:
    // 0x31e360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31e360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31e364: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x31e364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e368: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x31E368u;
    {
        const bool branch_taken_0x31e368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E368u;
            // 0x31e36c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e368) {
            ctx->pc = 0x31E20Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e20c;
        }
    }
    ctx->pc = 0x31E370u;
    // 0x31e370: 0x8fc30058  lw          $v1, 0x58($fp)
    ctx->pc = 0x31e370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x31e374: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31e374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e37c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x31E37Cu;
    {
        const bool branch_taken_0x31e37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E37Cu;
            // 0x31e380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e37c) {
            ctx->pc = 0x31E400u;
            goto label_31e400;
        }
    }
    ctx->pc = 0x31E384u;
label_31e384:
    // 0x31e384: 0x0  nop
    ctx->pc = 0x31e384u;
    // NOP
    // 0x31e388: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x31e388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31e38c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31e390: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x31e390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e394: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x31e394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x31e398: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x31e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x31e39c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x31e39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31e3a0: 0x8c870110  lw          $a3, 0x110($a0)
    ctx->pc = 0x31e3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x31e3a4: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x31e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x31e3a8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x31e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x31e3ac: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x31e3acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x31e3b0: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x31e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x31e3b4: 0xc0c76dc  jal         func_31DB70
    ctx->pc = 0x31E3B4u;
    SET_GPR_U32(ctx, 31, 0x31E3BCu);
    ctx->pc = 0x31E3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E3B4u;
            // 0x31e3b8: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31DB70u;
    if (runtime->hasFunction(0x31DB70u)) {
        auto targetFn = runtime->lookupFunction(0x31DB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E3BCu; }
        if (ctx->pc != 0x31E3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishDist__FP15RACE_FISH_PARAMP15RACE_FISH_PARAM_0x31db70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E3BCu; }
        if (ctx->pc != 0x31E3BCu) { return; }
    }
    ctx->pc = 0x31E3BCu;
label_31e3bc:
    // 0x31e3bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31e3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e3c0: 0x0  nop
    ctx->pc = 0x31e3c0u;
    // NOP
    // 0x31e3c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31e3c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e3c8: 0x0  nop
    ctx->pc = 0x31e3c8u;
    // NOP
    // 0x31e3cc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x31E3CCu;
    {
        const bool branch_taken_0x31e3cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E3CCu;
            // 0x31e3d0: 0x3c073dcc  lui         $a3, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3cc) {
            ctx->pc = 0x31E3F4u;
            goto label_31e3f4;
        }
    }
    ctx->pc = 0x31E3D4u;
    // 0x31e3d4: 0x34e7cccd  ori         $a3, $a3, 0xCCCD
    ctx->pc = 0x31e3d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x31e3d8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x31e3d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e3dc: 0x0  nop
    ctx->pc = 0x31e3dcu;
    // NOP
    // 0x31e3e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31e3e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e3e4: 0x0  nop
    ctx->pc = 0x31e3e4u;
    // NOP
    // 0x31e3e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31E3E8u;
    {
        const bool branch_taken_0x31e3e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e3e8) {
            ctx->pc = 0x31E3F4u;
            goto label_31e3f4;
        }
    }
    ctx->pc = 0x31E3F0u;
    // 0x31e3f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x31e3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e3f4:
    // 0x31e3f4: 0x0  nop
    ctx->pc = 0x31e3f4u;
    // NOP
    // 0x31e3f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x31e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x31e3fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31e3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_31e400:
    // 0x31e400: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x31e400u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31e404: 0xfd3821  addu        $a3, $a3, $sp
    ctx->pc = 0x31e404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x31e408: 0x8ce701a0  lw          $a3, 0x1A0($a3)
    ctx->pc = 0x31e408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x31e40c: 0xc7382a  slt         $a3, $a2, $a3
    ctx->pc = 0x31e40cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x31e410: 0x14e0ffdc  bnez        $a3, . + 4 + (-0x24 << 2)
    ctx->pc = 0x31E410u;
    {
        const bool branch_taken_0x31e410 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e410) {
            ctx->pc = 0x31E384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e384;
        }
    }
    ctx->pc = 0x31E418u;
    // 0x31e418: 0x93c3005c  lbu         $v1, 0x5C($fp)
    ctx->pc = 0x31e418u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x31e41c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31e420: 0x14620062  bne         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x31E420u;
    {
        const bool branch_taken_0x31e420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31E424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E420u;
            // 0x31e424: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e420) {
            ctx->pc = 0x31E5ACu;
            goto label_31e5ac;
        }
    }
    ctx->pc = 0x31E428u;
    // 0x31e428: 0x8fc30060  lw          $v1, 0x60($fp)
    ctx->pc = 0x31e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x31e42c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e430: 0xc7c10074  lwc1        $f1, 0x74($fp)
    ctx->pc = 0x31e430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e434: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x31e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x31e438: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x31e438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e43c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31e440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e444: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x31e444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31e448: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x31e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x31e44c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e44cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e450: 0xe7c00074  swc1        $f0, 0x74($fp)
    ctx->pc = 0x31e450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 116), bits); }
    // 0x31e454: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x31e454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e458: 0xc7c10068  lwc1        $f1, 0x68($fp)
    ctx->pc = 0x31e458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e45c: 0xc6400068  lwc1        $f0, 0x68($s2)
    ctx->pc = 0x31e45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e460: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x31e460u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e464: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x31e464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e468: 0x0  nop
    ctx->pc = 0x31e468u;
    // NOP
    // 0x31e46c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x31E46Cu;
    {
        const bool branch_taken_0x31e46c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e46c) {
            ctx->pc = 0x31E478u;
            goto label_31e478;
        }
    }
    ctx->pc = 0x31E474u;
    // 0x31e474: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x31e474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
label_31e478:
    // 0x31e478: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x31e478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x31e47c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e480: 0x0  nop
    ctx->pc = 0x31e480u;
    // NOP
    // 0x31e484: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31e484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e488: 0x0  nop
    ctx->pc = 0x31e488u;
    // NOP
    // 0x31e48c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31E48Cu;
    {
        const bool branch_taken_0x31e48c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e48c) {
            ctx->pc = 0x31E498u;
            goto label_31e498;
        }
    }
    ctx->pc = 0x31E494u;
    // 0x31e494: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x31e494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_31e498:
    // 0x31e498: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x31e498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x31e49c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31e49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e4a0: 0x0  nop
    ctx->pc = 0x31e4a0u;
    // NOP
    // 0x31e4a4: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x31e4a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x31e4a8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x31e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x31e4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e4b0: 0x0  nop
    ctx->pc = 0x31e4b0u;
    // NOP
    // 0x31e4b4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x31e4b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x31e4b8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x31e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x31e4bc: 0x0  nop
    ctx->pc = 0x31e4bcu;
    // NOP
    // 0x31e4c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31e4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e4c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x31E4C4u;
    SET_GPR_U32(ctx, 31, 0x31E4CCu);
    ctx->pc = 0x31E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E4C4u;
            // 0x31e4c8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E4CCu; }
        if (ctx->pc != 0x31E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E4CCu; }
        if (ctx->pc != 0x31E4CCu) { return; }
    }
    ctx->pc = 0x31E4CCu;
label_31e4cc:
    // 0x31e4cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31e4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e4d0: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E4D0u;
    {
        const bool branch_taken_0x31e4d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e4d0) {
            ctx->pc = 0x31E4DCu;
            goto label_31e4dc;
        }
    }
    ctx->pc = 0x31E4D8u;
    // 0x31e4d8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31e4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e4dc:
    // 0x31e4dc: 0x0  nop
    ctx->pc = 0x31e4dcu;
    // NOP
    // 0x31e4e0: 0x2a210065  slti        $at, $s1, 0x65
    ctx->pc = 0x31e4e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x31e4e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E4E4u;
    {
        const bool branch_taken_0x31e4e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e4e4) {
            ctx->pc = 0x31E4F0u;
            goto label_31e4f0;
        }
    }
    ctx->pc = 0x31E4ECu;
    // 0x31e4ec: 0x24110064  addiu       $s1, $zero, 0x64
    ctx->pc = 0x31e4ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_31e4f0:
    // 0x31e4f0: 0xc0c81a0  jal         func_320680
    ctx->pc = 0x31E4F0u;
    SET_GPR_U32(ctx, 31, 0x31E4F8u);
    ctx->pc = 0x31E4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E4F0u;
            // 0x31e4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x320680u;
    if (runtime->hasFunction(0x320680u)) {
        auto targetFn = runtime->lookupFunction(0x320680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E4F8u; }
        if (ctx->pc != 0x31E4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_prob__Fi_0x320680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E4F8u; }
        if (ctx->pc != 0x31E4F8u) { return; }
    }
    ctx->pc = 0x31E4F8u;
label_31e4f8:
    // 0x31e4f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E4F8u;
    {
        const bool branch_taken_0x31e4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e4f8) {
            ctx->pc = 0x31E50Cu;
            goto label_31e50c;
        }
    }
    ctx->pc = 0x31E500u;
    // 0x31e500: 0x8fc30064  lw          $v1, 0x64($fp)
    ctx->pc = 0x31e500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 100)));
    // 0x31e504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31e504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31e508: 0xafc30064  sw          $v1, 0x64($fp)
    ctx->pc = 0x31e508u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 3));
label_31e50c:
    // 0x31e50c: 0x0  nop
    ctx->pc = 0x31e50cu;
    // NOP
    // 0x31e510: 0xc7c00074  lwc1        $f0, 0x74($fp)
    ctx->pc = 0x31e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e514: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31e514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e518: 0x0  nop
    ctx->pc = 0x31e518u;
    // NOP
    // 0x31e51c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31e51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e520: 0x0  nop
    ctx->pc = 0x31e520u;
    // NOP
    // 0x31e524: 0x450000cc  bc1f        . + 4 + (0xCC << 2)
    ctx->pc = 0x31E524u;
    {
        const bool branch_taken_0x31e524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e524) {
            ctx->pc = 0x31E858u;
            goto label_31e858;
        }
    }
    ctx->pc = 0x31E52Cu;
    // 0x31e52c: 0xc0c81a0  jal         func_320680
    ctx->pc = 0x31E52Cu;
    SET_GPR_U32(ctx, 31, 0x31E534u);
    ctx->pc = 0x31E530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E52Cu;
            // 0x31e530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x320680u;
    if (runtime->hasFunction(0x320680u)) {
        auto targetFn = runtime->lookupFunction(0x320680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E534u; }
        if (ctx->pc != 0x31E534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_prob__Fi_0x320680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E534u; }
        if (ctx->pc != 0x31E534u) { return; }
    }
    ctx->pc = 0x31E534u;
label_31e534:
    // 0x31e534: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E534u;
    {
        const bool branch_taken_0x31e534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E534u;
            // 0x31e538: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e534) {
            ctx->pc = 0x31E544u;
            goto label_31e544;
        }
    }
    ctx->pc = 0x31E53Cu;
    // 0x31e53c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31E53Cu;
    {
        const bool branch_taken_0x31e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E53Cu;
            // 0x31e540: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e53c) {
            ctx->pc = 0x31E550u;
            goto label_31e550;
        }
    }
    ctx->pc = 0x31E544u;
label_31e544:
    // 0x31e544: 0x0  nop
    ctx->pc = 0x31e544u;
    // NOP
    // 0x31e548: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31e548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e54c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x31e54cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31e550:
    // 0x31e550: 0x8cea0064  lw          $t2, 0x64($a3)
    ctx->pc = 0x31e550u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
    // 0x31e554: 0x8d090064  lw          $t1, 0x64($t0)
    ctx->pc = 0x31e554u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x31e558: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x31e558u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x31e55c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x31e55cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31e560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e564: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31e564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e568: 0x1493021  addu        $a2, $t2, $t1
    ctx->pc = 0x31e568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x31e56c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x31e56cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e570: 0x0  nop
    ctx->pc = 0x31e570u;
    // NOP
    // 0x31e574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31e574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31e578: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31e578u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x31e57c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x31e57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31e580: 0xe4e00078  swc1        $f0, 0x78($a3)
    ctx->pc = 0x31e580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 120), bits); }
    // 0x31e584: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x31e584u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x31e588: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31e588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31e58c: 0xe5000078  swc1        $f0, 0x78($t0)
    ctx->pc = 0x31e58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 120), bits); }
    // 0x31e590: 0xafc00074  sw          $zero, 0x74($fp)
    ctx->pc = 0x31e590u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 0));
    // 0x31e594: 0xa3c3005c  sb          $v1, 0x5C($fp)
    ctx->pc = 0x31e594u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x31e598: 0xa3c0005d  sb          $zero, 0x5D($fp)
    ctx->pc = 0x31e598u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e59c: 0xa243005c  sb          $v1, 0x5C($s2)
    ctx->pc = 0x31e59cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x31e5a0: 0xa240005d  sb          $zero, 0x5D($s2)
    ctx->pc = 0x31e5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x31e5a4: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x31E5A4u;
    {
        const bool branch_taken_0x31e5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5A4u;
            // 0x31e5a8: 0xae400074  sw          $zero, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5a4) {
            ctx->pc = 0x31E858u;
            goto label_31e858;
        }
    }
    ctx->pc = 0x31E5ACu;
label_31e5ac:
    // 0x31e5ac: 0x0  nop
    ctx->pc = 0x31e5acu;
    // NOP
    // 0x31e5b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31e5b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31e5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31e5b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31e5bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31e5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31e5c0: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31E5C0u;
    SET_GPR_U32(ctx, 31, 0x31E5C8u);
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E5C8u; }
        if (ctx->pc != 0x31E5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E5C8u; }
        if (ctx->pc != 0x31E5C8u) { return; }
    }
    ctx->pc = 0x31E5C8u;
label_31e5c8:
    // 0x31e5c8: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x31e5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
    // 0x31e5cc: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x31e5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x31e5d0: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x31e5d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x31e5d4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x31e5d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31e5d8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x31e5d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31e5dc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E5DCu;
    {
        const bool branch_taken_0x31e5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E5DCu;
            // 0x31e5e0: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5dc) {
            ctx->pc = 0x31E5F4u;
            goto label_31e5f4;
        }
    }
    ctx->pc = 0x31E5E4u;
    // 0x31e5e4: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31e5e8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E5E8u;
    {
        const bool branch_taken_0x31e5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e5e8) {
            ctx->pc = 0x31E5F4u;
            goto label_31e5f4;
        }
    }
    ctx->pc = 0x31E5F0u;
    // 0x31e5f0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31e5f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31e5f4:
    // 0x31e5f4: 0x0  nop
    ctx->pc = 0x31e5f4u;
    // NOP
    // 0x31e5f8: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x31e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x31e5fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E5FCu;
    {
        const bool branch_taken_0x31e5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e5fc) {
            ctx->pc = 0x31E608u;
            goto label_31e608;
        }
    }
    ctx->pc = 0x31E604u;
    // 0x31e604: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31e604u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31e608:
    // 0x31e608: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31e60c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E60Cu;
    {
        const bool branch_taken_0x31e60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e60c) {
            ctx->pc = 0x31E618u;
            goto label_31e618;
        }
    }
    ctx->pc = 0x31E614u;
    // 0x31e614: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x31e614u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_31e618:
    // 0x31e618: 0xc7c2006c  lwc1        $f2, 0x6C($fp)
    ctx->pc = 0x31e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31e61c: 0xc7c10070  lwc1        $f1, 0x70($fp)
    ctx->pc = 0x31e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e624: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31e624u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x31e628: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31e628u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x31e62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31e62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e630: 0x0  nop
    ctx->pc = 0x31e630u;
    // NOP
    // 0x31e634: 0x45000088  bc1f        . + 4 + (0x88 << 2)
    ctx->pc = 0x31E634u;
    {
        const bool branch_taken_0x31e634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E634u;
            // 0x31e638: 0xe7c10070  swc1        $f1, 0x70($fp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e634) {
            ctx->pc = 0x31E858u;
            goto label_31e858;
        }
    }
    ctx->pc = 0x31E63Cu;
    // 0x31e63c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x31E63Cu;
    {
        const bool branch_taken_0x31e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E63Cu;
            // 0x31e640: 0xe7c00070  swc1        $f0, 0x70($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e63c) {
            ctx->pc = 0x31E858u;
            goto label_31e858;
        }
    }
    ctx->pc = 0x31E644u;
label_31e644:
    // 0x31e644: 0x0  nop
    ctx->pc = 0x31e644u;
    // NOP
    // 0x31e648: 0xc0c81a0  jal         func_320680
    ctx->pc = 0x31E648u;
    SET_GPR_U32(ctx, 31, 0x31E650u);
    ctx->pc = 0x31E64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E648u;
            // 0x31e64c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x320680u;
    if (runtime->hasFunction(0x320680u)) {
        auto targetFn = runtime->lookupFunction(0x320680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E650u; }
        if (ctx->pc != 0x31E650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_prob__Fi_0x320680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E650u; }
        if (ctx->pc != 0x31E650u) { return; }
    }
    ctx->pc = 0x31E650u;
label_31e650:
    // 0x31e650: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31E650u;
    {
        const bool branch_taken_0x31e650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e650) {
            ctx->pc = 0x31E684u;
            goto label_31e684;
        }
    }
    ctx->pc = 0x31E658u;
    // 0x31e658: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x31e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x31e65c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31E65Cu;
    {
        const bool branch_taken_0x31e65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e65c) {
            ctx->pc = 0x31E684u;
            goto label_31e684;
        }
    }
    ctx->pc = 0x31E664u;
    // 0x31e664: 0x8fc30058  lw          $v1, 0x58($fp)
    ctx->pc = 0x31e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x31e668: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31e668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31e66c: 0xafc30058  sw          $v1, 0x58($fp)
    ctx->pc = 0x31e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 3));
    // 0x31e670: 0x8fc30058  lw          $v1, 0x58($fp)
    ctx->pc = 0x31e670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x31e674: 0x461007c  bgez        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x31E674u;
    {
        const bool branch_taken_0x31e674 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31e674) {
            ctx->pc = 0x31E868u;
            goto label_31e868;
        }
    }
    ctx->pc = 0x31E67Cu;
    // 0x31e67c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x31E67Cu;
    {
        const bool branch_taken_0x31e67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E67Cu;
            // 0x31e680: 0xafc00058  sw          $zero, 0x58($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e67c) {
            ctx->pc = 0x31E868u;
            goto label_31e868;
        }
    }
    ctx->pc = 0x31E684u;
label_31e684:
    // 0x31e684: 0x0  nop
    ctx->pc = 0x31e684u;
    // NOP
    // 0x31e688: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x31E688u;
    {
        const bool branch_taken_0x31e688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e688) {
            ctx->pc = 0x31E730u;
            goto label_31e730;
        }
    }
    ctx->pc = 0x31E690u;
    // 0x31e690: 0xc0c81a0  jal         func_320680
    ctx->pc = 0x31E690u;
    SET_GPR_U32(ctx, 31, 0x31E698u);
    ctx->pc = 0x31E694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E690u;
            // 0x31e694: 0x2404004b  addiu       $a0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x320680u;
    if (runtime->hasFunction(0x320680u)) {
        auto targetFn = runtime->lookupFunction(0x320680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E698u; }
        if (ctx->pc != 0x31E698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_prob__Fi_0x320680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E698u; }
        if (ctx->pc != 0x31E698u) { return; }
    }
    ctx->pc = 0x31E698u;
label_31e698:
    // 0x31e698: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31E698u;
    {
        const bool branch_taken_0x31e698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e698) {
            ctx->pc = 0x31E730u;
            goto label_31e730;
        }
    }
    ctx->pc = 0x31E6A0u;
    // 0x31e6a0: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x31e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x31e6a4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x31E6A4u;
    {
        const bool branch_taken_0x31e6a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E6A4u;
            // 0x31e6a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6a4) {
            ctx->pc = 0x31E6E0u;
            goto label_31e6e0;
        }
    }
    ctx->pc = 0x31E6ACu;
    // 0x31e6ac: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31e6b0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31E6B0u;
    {
        const bool branch_taken_0x31e6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e6b0) {
            ctx->pc = 0x31E6D8u;
            goto label_31e6d8;
        }
    }
    ctx->pc = 0x31E6B8u;
    // 0x31e6b8: 0xc0c81a0  jal         func_320680
    ctx->pc = 0x31E6B8u;
    SET_GPR_U32(ctx, 31, 0x31E6C0u);
    ctx->pc = 0x31E6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E6B8u;
            // 0x31e6bc: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x320680u;
    if (runtime->hasFunction(0x320680u)) {
        auto targetFn = runtime->lookupFunction(0x320680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E6C0u; }
        if (ctx->pc != 0x31E6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_prob__Fi_0x320680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E6C0u; }
        if (ctx->pc != 0x31E6C0u) { return; }
    }
    ctx->pc = 0x31E6C0u;
label_31e6c0:
    // 0x31e6c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E6C0u;
    {
        const bool branch_taken_0x31e6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E6C0u;
            // 0x31e6c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6c0) {
            ctx->pc = 0x31E6D0u;
            goto label_31e6d0;
        }
    }
    ctx->pc = 0x31E6C8u;
    // 0x31e6c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31E6C8u;
    {
        const bool branch_taken_0x31e6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e6c8) {
            ctx->pc = 0x31E6F0u;
            goto label_31e6f0;
        }
    }
    ctx->pc = 0x31E6D0u;
label_31e6d0:
    // 0x31e6d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31E6D0u;
    {
        const bool branch_taken_0x31e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E6D0u;
            // 0x31e6d4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6d0) {
            ctx->pc = 0x31E6F0u;
            goto label_31e6f0;
        }
    }
    ctx->pc = 0x31E6D8u;
label_31e6d8:
    // 0x31e6d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31E6D8u;
    {
        const bool branch_taken_0x31e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E6D8u;
            // 0x31e6dc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e6d8) {
            ctx->pc = 0x31E6F0u;
            goto label_31e6f0;
        }
    }
    ctx->pc = 0x31E6E0u;
label_31e6e0:
    // 0x31e6e0: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31e6e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E6E4u;
    {
        const bool branch_taken_0x31e6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e6e4) {
            ctx->pc = 0x31E6F0u;
            goto label_31e6f0;
        }
    }
    ctx->pc = 0x31E6ECu;
    // 0x31e6ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31e6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e6f0:
    // 0x31e6f0: 0x8fc30058  lw          $v1, 0x58($fp)
    ctx->pc = 0x31e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x31e6f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x31e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31e6f8: 0xafc30058  sw          $v1, 0x58($fp)
    ctx->pc = 0x31e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 3));
    // 0x31e6fc: 0x8fc30058  lw          $v1, 0x58($fp)
    ctx->pc = 0x31e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x31e700: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E700u;
    {
        const bool branch_taken_0x31e700 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31e700) {
            ctx->pc = 0x31E70Cu;
            goto label_31e70c;
        }
    }
    ctx->pc = 0x31E708u;
    // 0x31e708: 0xafc00058  sw          $zero, 0x58($fp)
    ctx->pc = 0x31e708u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 0));
label_31e70c:
    // 0x31e70c: 0x0  nop
    ctx->pc = 0x31e70cu;
    // NOP
    // 0x31e710: 0x8fc30058  lw          $v1, 0x58($fp)
    ctx->pc = 0x31e710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
    // 0x31e714: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x31e714u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x31e718: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31E718u;
    {
        const bool branch_taken_0x31e718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E718u;
            // 0x31e71c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e718) {
            ctx->pc = 0x31E724u;
            goto label_31e724;
        }
    }
    ctx->pc = 0x31E720u;
    // 0x31e720: 0xafc30058  sw          $v1, 0x58($fp)
    ctx->pc = 0x31e720u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 88), GPR_U32(ctx, 3));
label_31e724:
    // 0x31e724: 0x0  nop
    ctx->pc = 0x31e724u;
    // NOP
    // 0x31e728: 0x14c0004f  bnez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x31E728u;
    {
        const bool branch_taken_0x31e728 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e728) {
            ctx->pc = 0x31E868u;
            goto label_31e868;
        }
    }
    ctx->pc = 0x31E730u;
label_31e730:
    // 0x31e730: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x31e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x31e734: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E734u;
    {
        const bool branch_taken_0x31e734 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x31e734) {
            ctx->pc = 0x31E748u;
            goto label_31e748;
        }
    }
    ctx->pc = 0x31E73Cu;
    // 0x31e73c: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x31e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x31e740: 0x4600049  bltz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x31E740u;
    {
        const bool branch_taken_0x31e740 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x31e740) {
            ctx->pc = 0x31E868u;
            goto label_31e868;
        }
    }
    ctx->pc = 0x31E748u;
label_31e748:
    // 0x31e748: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31e748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31e74c: 0xc7c10070  lwc1        $f1, 0x70($fp)
    ctx->pc = 0x31e74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e750: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e754: 0x0  nop
    ctx->pc = 0x31e754u;
    // NOP
    // 0x31e758: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31e758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e75c: 0x0  nop
    ctx->pc = 0x31e75cu;
    // NOP
    // 0x31e760: 0x45010041  bc1t        . + 4 + (0x41 << 2)
    ctx->pc = 0x31E760u;
    {
        const bool branch_taken_0x31e760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e760) {
            ctx->pc = 0x31E868u;
            goto label_31e868;
        }
    }
    ctx->pc = 0x31E768u;
    // 0x31e768: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x31e768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x31e76c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31E76Cu;
    {
        const bool branch_taken_0x31e76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E76Cu;
            // 0x31e770: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e76c) {
            ctx->pc = 0x31E7A0u;
            goto label_31e7a0;
        }
    }
    ctx->pc = 0x31E774u;
    // 0x31e774: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31e774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31e778: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31E778u;
    {
        const bool branch_taken_0x31e778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e778) {
            ctx->pc = 0x31E7A0u;
            goto label_31e7a0;
        }
    }
    ctx->pc = 0x31E780u;
    // 0x31e780: 0xc0c81a0  jal         func_320680
    ctx->pc = 0x31E780u;
    SET_GPR_U32(ctx, 31, 0x31E788u);
    ctx->pc = 0x31E784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31E780u;
            // 0x31e784: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x320680u;
    if (runtime->hasFunction(0x320680u)) {
        auto targetFn = runtime->lookupFunction(0x320680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E788u; }
        if (ctx->pc != 0x31E788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_prob__Fi_0x320680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31E788u; }
        if (ctx->pc != 0x31E788u) { return; }
    }
    ctx->pc = 0x31E788u;
label_31e788:
    // 0x31e788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E788u;
    {
        const bool branch_taken_0x31e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e788) {
            ctx->pc = 0x31E798u;
            goto label_31e798;
        }
    }
    ctx->pc = 0x31E790u;
    // 0x31e790: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x31E790u;
    {
        const bool branch_taken_0x31e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E790u;
            // 0x31e794: 0x8fa801c0  lw          $t0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e790) {
            ctx->pc = 0x31E7CCu;
            goto label_31e7cc;
        }
    }
    ctx->pc = 0x31E798u;
label_31e798:
    // 0x31e798: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31E798u;
    {
        const bool branch_taken_0x31e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E798u;
            // 0x31e79c: 0x8fa801c4  lw          $t0, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e798) {
            ctx->pc = 0x31E7CCu;
            goto label_31e7cc;
        }
    }
    ctx->pc = 0x31E7A0u;
label_31e7a0:
    // 0x31e7a0: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x31e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x31e7a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E7A4u;
    {
        const bool branch_taken_0x31e7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e7a4) {
            ctx->pc = 0x31E7B4u;
            goto label_31e7b4;
        }
    }
    ctx->pc = 0x31E7ACu;
    // 0x31e7ac: 0x8fa801c0  lw          $t0, 0x1C0($sp)
    ctx->pc = 0x31e7acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x31e7b0: 0x0  nop
    ctx->pc = 0x31e7b0u;
    // NOP
label_31e7b4:
    // 0x31e7b4: 0x0  nop
    ctx->pc = 0x31e7b4u;
    // NOP
    // 0x31e7b8: 0x8fa301bc  lw          $v1, 0x1BC($sp)
    ctx->pc = 0x31e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x31e7bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E7BCu;
    {
        const bool branch_taken_0x31e7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e7bc) {
            ctx->pc = 0x31E7CCu;
            goto label_31e7cc;
        }
    }
    ctx->pc = 0x31E7C4u;
    // 0x31e7c4: 0x8fa801c4  lw          $t0, 0x1C4($sp)
    ctx->pc = 0x31e7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x31e7c8: 0x0  nop
    ctx->pc = 0x31e7c8u;
    // NOP
label_31e7cc:
    // 0x31e7cc: 0x0  nop
    ctx->pc = 0x31e7ccu;
    // NOP
    // 0x31e7d0: 0x5000025  bltz        $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31E7D0u;
    {
        const bool branch_taken_0x31e7d0 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x31E7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E7D0u;
            // 0x31e7d4: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7d0) {
            ctx->pc = 0x31E868u;
            goto label_31e868;
        }
    }
    ctx->pc = 0x31E7D8u;
    // 0x31e7d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x31e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x31e7dc: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x31e7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x31e7e0: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x31e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x31e7e4: 0xc7c00050  lwc1        $f0, 0x50($fp)
    ctx->pc = 0x31e7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e7e8: 0x664821  addu        $t1, $v1, $a2
    ctx->pc = 0x31e7e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31e7ec: 0xc5210050  lwc1        $f1, 0x50($t1)
    ctx->pc = 0x31e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e7f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31e7f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e7f4: 0x0  nop
    ctx->pc = 0x31e7f4u;
    // NOP
    // 0x31e7f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31E7F8u;
    {
        const bool branch_taken_0x31e7f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e7f8) {
            ctx->pc = 0x31E804u;
            goto label_31e804;
        }
    }
    ctx->pc = 0x31E800u;
    // 0x31e800: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x31e800u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_31e804:
    // 0x31e804: 0x0  nop
    ctx->pc = 0x31e804u;
    // NOP
    // 0x31e808: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31e808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31e80c: 0xa3c7005c  sb          $a3, 0x5C($fp)
    ctx->pc = 0x31e80cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 92), (uint8_t)GPR_U32(ctx, 7));
    // 0x31e810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e814: 0xa3c3005d  sb          $v1, 0x5D($fp)
    ctx->pc = 0x31e814u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x31e818: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x31e818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x31e81c: 0xafc80060  sw          $t0, 0x60($fp)
    ctx->pc = 0x31e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 96), GPR_U32(ctx, 8));
    // 0x31e820: 0xafc00064  sw          $zero, 0x64($fp)
    ctx->pc = 0x31e820u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 100), GPR_U32(ctx, 0));
    // 0x31e824: 0xafc00070  sw          $zero, 0x70($fp)
    ctx->pc = 0x31e824u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 0));
    // 0x31e828: 0xafc60074  sw          $a2, 0x74($fp)
    ctx->pc = 0x31e828u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 6));
    // 0x31e82c: 0xe7c00050  swc1        $f0, 0x50($fp)
    ctx->pc = 0x31e82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 80), bits); }
    // 0x31e830: 0xa127005c  sb          $a3, 0x5C($t1)
    ctx->pc = 0x31e830u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 92), (uint8_t)GPR_U32(ctx, 7));
    // 0x31e834: 0xa123005d  sb          $v1, 0x5D($t1)
    ctx->pc = 0x31e834u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 93), (uint8_t)GPR_U32(ctx, 3));
    // 0x31e838: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x31e838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31e83c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31e840: 0xad230060  sw          $v1, 0x60($t1)
    ctx->pc = 0x31e840u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 3));
    // 0x31e844: 0xad200064  sw          $zero, 0x64($t1)
    ctx->pc = 0x31e844u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 0));
    // 0x31e848: 0xad200070  sw          $zero, 0x70($t1)
    ctx->pc = 0x31e848u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 112), GPR_U32(ctx, 0));
    // 0x31e84c: 0xad260074  sw          $a2, 0x74($t1)
    ctx->pc = 0x31e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 6));
    // 0x31e850: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31E850u;
    {
        const bool branch_taken_0x31e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E850u;
            // 0x31e854: 0xe5200050  swc1        $f0, 0x50($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e850) {
            ctx->pc = 0x31E868u;
            goto label_31e868;
        }
    }
    ctx->pc = 0x31E858u;
label_31e858:
    // 0x31e858: 0x93c6005c  lbu         $a2, 0x5C($fp)
    ctx->pc = 0x31e858u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x31e85c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31e860: 0x14c3ff78  bne         $a2, $v1, . + 4 + (-0x88 << 2)
    ctx->pc = 0x31E860u;
    {
        const bool branch_taken_0x31e860 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x31e860) {
            ctx->pc = 0x31E644u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e644;
        }
    }
    ctx->pc = 0x31E868u;
label_31e868:
    // 0x31e868: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x31e868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x31e86c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x31e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x31e870: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x31e870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x31e874: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x31e874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31e878: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31e878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31e87c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x31e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x31e880: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x31e880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31e884: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x31e884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31e888: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x31e888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31e88c: 0x1460fe4f  bnez        $v1, . + 4 + (-0x1B1 << 2)
    ctx->pc = 0x31E88Cu;
    {
        const bool branch_taken_0x31e88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e88c) {
            ctx->pc = 0x31E1CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e1cc;
        }
    }
    ctx->pc = 0x31E894u;
label_31e894:
    // 0x31e894: 0x0  nop
    ctx->pc = 0x31e894u;
    // NOP
    // 0x31e898: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x31e898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31e89c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x31e89cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31e8a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31e8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31e8a4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x31e8a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31e8a8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x31e8a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31e8ac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x31e8acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31e8b0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31e8b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e8b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31e8b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e8b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31e8b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e8bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31e8bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e8c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31e8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31E8C4u;
            // 0x31e8c8: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31E8CCu;
}
