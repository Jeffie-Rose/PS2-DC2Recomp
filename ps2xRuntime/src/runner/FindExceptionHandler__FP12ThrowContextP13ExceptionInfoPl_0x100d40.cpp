#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FindExceptionHandler__FP12ThrowContextP13ExceptionInfoPl
// Address: 0x100d40 - 0x101064
void FindExceptionHandler__FP12ThrowContextP13ExceptionInfoPl_0x100d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindExceptionHandler__FP12ThrowContextP13ExceptionInfoPl_0x100d40");
#endif

    switch (ctx->pc) {
        case 0x100dfcu: goto label_100dfc;
        case 0x100e3cu: goto label_100e3c;
        case 0x100ec4u: goto label_100ec4;
        case 0x100ed0u: goto label_100ed0;
        case 0x100ee0u: goto label_100ee0;
        case 0x100f00u: goto label_100f00;
        case 0x100f10u: goto label_100f10;
        case 0x100f20u: goto label_100f20;
        case 0x100f38u: goto label_100f38;
        case 0x100f78u: goto label_100f78;
        case 0x100fbcu: goto label_100fbc;
        case 0x100ffcu: goto label_100ffc;
        case 0x101010u: goto label_101010;
        case 0x101024u: goto label_101024;
        default: break;
    }

    ctx->pc = 0x100d40u;

    // 0x100d40: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x100d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x100d44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x100d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x100d48: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x100d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x100d4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x100d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x100d50: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x100d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x100d54: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x100d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x100d58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x100d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x100d5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x100d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x100d60: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x100d60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x100d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x100d68: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x100d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x100d6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x100d70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x100d70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100d78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x100d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100d80: 0x27b200a8  addiu       $s2, $sp, 0xA8
    ctx->pc = 0x100d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x100d84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100d88: 0x26880020  addiu       $t0, $s4, 0x20
    ctx->pc = 0x100d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x100d8c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x100d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x100d90: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x100d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x100d94: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x100d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x100d98: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x100d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x100d9c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x100d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x100da0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x100da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x100da4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x100da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x100da8: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x100da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x100dac: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x100dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x100db0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x100db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x100db4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x100db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100db8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x100db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x100dbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x100dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100dc0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x100dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x100dc4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x100dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x100dc8: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x100dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x100dcc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x100dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x100dd0: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x100dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x100dd4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x100dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x100dd8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x100dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x100ddc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x100ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x100de0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x100de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x100de4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x100de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x100de8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x100de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x100dec: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x100decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x100df0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x100df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x100df4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x100df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x100df8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x100df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_100dfc:
    // 0x100dfc: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x100dfcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x100e00: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x100e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x100e04: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x100e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x100e08: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x100e08u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x100e0c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x100e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x100e10: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x100e10u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x100e14: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100E14u;
    {
        const bool branch_taken_0x100e14 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x100E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E14u;
            // 0x100e18: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e14) {
            ctx->pc = 0x100DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100dfc;
        }
    }
    ctx->pc = 0x100E1Cu;
    // 0x100e1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x100e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100e20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100E20u;
    {
        const bool branch_taken_0x100e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100e20) {
            ctx->pc = 0x100E34u;
            goto label_100e34;
        }
    }
    ctx->pc = 0x100E28u;
    // 0x100e28: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x100e28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100e2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100E2Cu;
    {
        const bool branch_taken_0x100e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E2Cu;
            // 0x100e30: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e2c) {
            ctx->pc = 0x100E38u;
            goto label_100e38;
        }
    }
    ctx->pc = 0x100E34u;
label_100e34:
    // 0x100e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100e38:
    // 0x100e38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x100e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100e3c:
    // 0x100e3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x100e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x100e40: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x100e40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x100e44: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x100E44u;
    {
        const bool branch_taken_0x100e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E44u;
            // 0x100e48: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e44) {
            ctx->pc = 0x101004u;
            goto label_101004;
        }
    }
    ctx->pc = 0x100E4Cu;
    // 0x100e4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x100e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x100e50: 0x2463ee60  addiu       $v1, $v1, -0x11A0
    ctx->pc = 0x100e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962784));
    // 0x100e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100e58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100e5c: 0x400008  jr          $v0
    ctx->pc = 0x100E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100E64u: goto label_100e64;
            case 0x100EF0u: goto label_100ef0;
            case 0x101004u: goto label_101004;
            case 0x101018u: goto label_101018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100E64u;
label_100e64:
    // 0x100e64: 0x0  nop
    ctx->pc = 0x100e64u;
    // NOP
    // 0x100e68: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x100e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100e6c: 0x27a20390  addiu       $v0, $sp, 0x390
    ctx->pc = 0x100e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x100e70: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x100e70u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x100e74: 0x24640005  addiu       $a0, $v1, 0x5
    ctx->pc = 0x100e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x100e78: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x100e78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x100e7c: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x100e7cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x100e80: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x100e80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x100e84: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x100e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x100e88: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x100e88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x100e8c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x100e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x100e90: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x100e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x100e94: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x100e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x100e98: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x100e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x100e9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x100e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x100ea0: 0x8fa20390  lw          $v0, 0x390($sp)
    ctx->pc = 0x100ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x100ea4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100EA4u;
    {
        const bool branch_taken_0x100ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ea4) {
            ctx->pc = 0x100EB4u;
            goto label_100eb4;
        }
    }
    ctx->pc = 0x100EACu;
    // 0x100eac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100EACu;
    {
        const bool branch_taken_0x100eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100EACu;
            // 0x100eb0: 0xafa20390  sw          $v0, 0x390($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100eac) {
            ctx->pc = 0x100EBCu;
            goto label_100ebc;
        }
    }
    ctx->pc = 0x100EB4u;
label_100eb4:
    // 0x100eb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100eb8: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x100eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
label_100ebc:
    // 0x100ebc: 0xc04028c  jal         func_100A30
    ctx->pc = 0x100EBCu;
    SET_GPR_U32(ctx, 31, 0x100EC4u);
    ctx->pc = 0x100EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100EBCu;
            // 0x100ec0: 0x27a50394  addiu       $a1, $sp, 0x394 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 916));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EC4u; }
        if (ctx->pc != 0x100EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EC4u; }
        if (ctx->pc != 0x100EC4u) { return; }
    }
    ctx->pc = 0x100EC4u;
label_100ec4:
    // 0x100ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ec8: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x100EC8u;
    SET_GPR_U32(ctx, 31, 0x100ED0u);
    ctx->pc = 0x100ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100EC8u;
            // 0x100ecc: 0x27a50398  addiu       $a1, $sp, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100ED0u; }
        if (ctx->pc != 0x100ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100ED0u; }
        if (ctx->pc != 0x100ED0u) { return; }
    }
    ctx->pc = 0x100ED0u;
label_100ed0:
    // 0x100ed0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x100ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x100ed4: 0x8fa50390  lw          $a1, 0x390($sp)
    ctx->pc = 0x100ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x100ed8: 0xc0401a0  jal         func_100680
    ctx->pc = 0x100ED8u;
    SET_GPR_U32(ctx, 31, 0x100EE0u);
    ctx->pc = 0x100EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100ED8u;
            // 0x100edc: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100680u;
    if (runtime->hasFunction(0x100680u)) {
        auto targetFn = runtime->lookupFunction(0x100680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EE0u; }
        if (ctx->pc != 0x100EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___throw_catch_compare_0x100680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100EE0u; }
        if (ctx->pc != 0x100EE0u) { return; }
    }
    ctx->pc = 0x100EE0u;
label_100ee0:
    // 0x100ee0: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x100EE0u;
    {
        const bool branch_taken_0x100ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100EE0u;
            // 0x100ee4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ee0) {
            ctx->pc = 0x10101Cu;
            goto label_10101c;
        }
    }
    ctx->pc = 0x100EE8u;
    // 0x100ee8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x100EE8u;
    {
        const bool branch_taken_0x100ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ee8) {
            ctx->pc = 0x10102Cu;
            goto label_10102c;
        }
    }
    ctx->pc = 0x100EF0u;
label_100ef0:
    // 0x100ef0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x100ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100ef4: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x100ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x100ef8: 0xc04028c  jal         func_100A30
    ctx->pc = 0x100EF8u;
    SET_GPR_U32(ctx, 31, 0x100F00u);
    ctx->pc = 0x100EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100EF8u;
            // 0x100efc: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F00u; }
        if (ctx->pc != 0x100F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F00u; }
        if (ctx->pc != 0x100F00u) { return; }
    }
    ctx->pc = 0x100F00u;
label_100f00:
    // 0x100f00: 0x27b70384  addiu       $s7, $sp, 0x384
    ctx->pc = 0x100f00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 900));
    // 0x100f04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f08: 0xc04028c  jal         func_100A30
    ctx->pc = 0x100F08u;
    SET_GPR_U32(ctx, 31, 0x100F10u);
    ctx->pc = 0x100F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F08u;
            // 0x100f0c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F10u; }
        if (ctx->pc != 0x100F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F10u; }
        if (ctx->pc != 0x100F10u) { return; }
    }
    ctx->pc = 0x100F10u;
label_100f10:
    // 0x100f10: 0x27be0388  addiu       $fp, $sp, 0x388
    ctx->pc = 0x100f10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
    // 0x100f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f18: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x100F18u;
    SET_GPR_U32(ctx, 31, 0x100F20u);
    ctx->pc = 0x100F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F18u;
            // 0x100f1c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F20u; }
        if (ctx->pc != 0x100F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F20u; }
        if (ctx->pc != 0x100F20u) { return; }
    }
    ctx->pc = 0x100F20u;
label_100f20:
    // 0x100f20: 0x27a3038c  addiu       $v1, $sp, 0x38C
    ctx->pc = 0x100f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 908));
    // 0x100f24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x100f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x100f28: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x100f28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x100f2c: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x100f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x100f30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x100F30u;
    {
        const bool branch_taken_0x100f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100F30u;
            // 0x100f34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f30) {
            ctx->pc = 0x100F90u;
            goto label_100f90;
        }
    }
    ctx->pc = 0x100F38u;
label_100f38:
    // 0x100f38: 0x92280001  lbu         $t0, 0x1($s1)
    ctx->pc = 0x100f38u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x100f3c: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x100f3cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x100f40: 0x27a203ac  addiu       $v0, $sp, 0x3AC
    ctx->pc = 0x100f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 940));
    // 0x100f44: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x100f44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x100f48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x100f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f4c: 0x92270000  lbu         $a3, 0x0($s1)
    ctx->pc = 0x100f4cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x100f50: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x100f50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x100f54: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x100f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x100f58: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x100f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x100f5c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x100f5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x100f60: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x100f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x100f64: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x100f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x100f68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x100f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x100f6c: 0x8fa503ac  lw          $a1, 0x3AC($sp)
    ctx->pc = 0x100f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 940)));
    // 0x100f70: 0xc0401a0  jal         func_100680
    ctx->pc = 0x100F70u;
    SET_GPR_U32(ctx, 31, 0x100F78u);
    ctx->pc = 0x100F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F70u;
            // 0x100f74: 0x27a603a0  addiu       $a2, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100680u;
    if (runtime->hasFunction(0x100680u)) {
        auto targetFn = runtime->lookupFunction(0x100680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F78u; }
        if (ctx->pc != 0x100F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___throw_catch_compare_0x100680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F78u; }
        if (ctx->pc != 0x100F78u) { return; }
    }
    ctx->pc = 0x100F78u;
label_100f78:
    // 0x100f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100F78u;
    {
        const bool branch_taken_0x100f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100F78u;
            // 0x100f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f78) {
            ctx->pc = 0x100F88u;
            goto label_100f88;
        }
    }
    ctx->pc = 0x100F80u;
    // 0x100f80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x100F80u;
    {
        const bool branch_taken_0x100f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100f80) {
            ctx->pc = 0x100FA0u;
            goto label_100fa0;
        }
    }
    ctx->pc = 0x100F88u;
label_100f88:
    // 0x100f88: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x100f88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x100f8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x100f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_100f90:
    // 0x100f90: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x100f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x100f94: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x100f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100f98: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x100F98u;
    {
        const bool branch_taken_0x100f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100F98u;
            // 0x100f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f98) {
            ctx->pc = 0x100F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100f38;
        }
    }
    ctx->pc = 0x100FA0u;
label_100fa0:
    // 0x100fa0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x100FA0u;
    {
        const bool branch_taken_0x100fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100fa0) {
            ctx->pc = 0x101018u;
            goto label_101018;
        }
    }
    ctx->pc = 0x100FA8u;
    // 0x100fa8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x100fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100fac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x100fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fb4: 0xc04050c  jal         func_101430
    ctx->pc = 0x100FB4u;
    SET_GPR_U32(ctx, 31, 0x100FBCu);
    ctx->pc = 0x100FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100FB4u;
            // 0x100fb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101430u;
    if (runtime->hasFunction(0x101430u)) {
        auto targetFn = runtime->lookupFunction(0x101430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FBCu; }
        if (ctx->pc != 0x100FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnwindStack__FP12ThrowContextP13ExceptionInfoPc_0x101430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FBCu; }
        if (ctx->pc != 0x100FBCu) { return; }
    }
    ctx->pc = 0x100FBCu;
label_100fbc:
    // 0x100fbc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x100fc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fc4: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x100fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x100fc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x100fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fcc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x100fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x100fd0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x100fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x100fd4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x100fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x100fd8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x100fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x100fdc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x100fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x100fe0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x100fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x100fe4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x100fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x100fe8: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x100fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x100fec: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x100fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x100ff0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x100ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x100ff4: 0xc040864  jal         func_102190
    ctx->pc = 0x100FF4u;
    SET_GPR_U32(ctx, 31, 0x100FFCu);
    ctx->pc = 0x100FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100FF4u;
            // 0x100ff8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102190u;
    if (runtime->hasFunction(0x102190u)) {
        auto targetFn = runtime->lookupFunction(0x102190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FFCu; }
        if (ctx->pc != 0x100FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___TransferControl__FP12ThrowContextP13ExceptionInfoPc_0x102190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FFCu; }
        if (ctx->pc != 0x100FFCu) { return; }
    }
    ctx->pc = 0x100FFCu;
label_100ffc:
    // 0x100ffc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x100FFCu;
    {
        const bool branch_taken_0x100ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ffc) {
            ctx->pc = 0x101018u;
            goto label_101018;
        }
    }
    ctx->pc = 0x101004u;
label_101004:
    // 0x101004: 0x0  nop
    ctx->pc = 0x101004u;
    // NOP
    // 0x101008: 0xc040248  jal         func_100920
    ctx->pc = 0x101008u;
    SET_GPR_U32(ctx, 31, 0x101010u);
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101010u; }
        if (ctx->pc != 0x101010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        terminate__3stdFv_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101010u; }
        if (ctx->pc != 0x101010u) { return; }
    }
    ctx->pc = 0x101010u;
label_101010:
    // 0x101010: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x101010u;
    {
        const bool branch_taken_0x101010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101010) {
            ctx->pc = 0x10102Cu;
            goto label_10102c;
        }
    }
    ctx->pc = 0x101018u;
label_101018:
    // 0x101018: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x101018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_10101c:
    // 0x10101c: 0xc040728  jal         func_101CA0
    ctx->pc = 0x10101Cu;
    SET_GPR_U32(ctx, 31, 0x101024u);
    ctx->pc = 0x101CA0u;
    if (runtime->hasFunction(0x101CA0u)) {
        auto targetFn = runtime->lookupFunction(0x101CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101024u; }
        if (ctx->pc != 0x101024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextAction__FP14ActionIterator_0x101ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101024u; }
        if (ctx->pc != 0x101024u) { return; }
    }
    ctx->pc = 0x101024u;
label_101024:
    // 0x101024: 0x1000ff85  b           . + 4 + (-0x7B << 2)
    ctx->pc = 0x101024u;
    {
        const bool branch_taken_0x101024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101024u;
            // 0x101028: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101024) {
            ctx->pc = 0x100E3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_100e3c;
        }
    }
    ctx->pc = 0x10102Cu;
label_10102c:
    // 0x10102c: 0x0  nop
    ctx->pc = 0x10102cu;
    // NOP
    // 0x101030: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x101030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x101034: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x101034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x101038: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x101038u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10103c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x10103cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101040: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x101040u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101044: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x101044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101048: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x101048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10104c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10104cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10105c: 0x3e00008  jr          $ra
    ctx->pc = 0x10105Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10105Cu;
            // 0x101060: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101064u;
}
