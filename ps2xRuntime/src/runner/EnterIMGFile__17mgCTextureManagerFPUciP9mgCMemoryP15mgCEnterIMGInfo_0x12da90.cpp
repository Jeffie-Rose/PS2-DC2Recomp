#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo
// Address: 0x12da90 - 0x12dff4
void EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90");
#endif

    switch (ctx->pc) {
        case 0x12db00u: goto label_12db00;
        case 0x12db2cu: goto label_12db2c;
        case 0x12db54u: goto label_12db54;
        case 0x12db74u: goto label_12db74;
        case 0x12dbc8u: goto label_12dbc8;
        case 0x12dbecu: goto label_12dbec;
        case 0x12dc1cu: goto label_12dc1c;
        case 0x12dca4u: goto label_12dca4;
        case 0x12dcb0u: goto label_12dcb0;
        case 0x12dd30u: goto label_12dd30;
        case 0x12dd44u: goto label_12dd44;
        case 0x12dd58u: goto label_12dd58;
        case 0x12dd98u: goto label_12dd98;
        case 0x12dde4u: goto label_12dde4;
        case 0x12de5cu: goto label_12de5c;
        case 0x12de9cu: goto label_12de9c;
        case 0x12def8u: goto label_12def8;
        case 0x12df30u: goto label_12df30;
        case 0x12df80u: goto label_12df80;
        default: break;
    }

    ctx->pc = 0x12da90u;

    // 0x12da90: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x12da94: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12da98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x12da98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x12da9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12da9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x12daa0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12daa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12daa4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12daa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12daa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12daa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12daac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12dab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12dab4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12dab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12dab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12dabc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x12dabcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dac0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12dac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dac4: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x12dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x12dac8: 0xafa700bc  sw          $a3, 0xBC($sp)
    ctx->pc = 0x12dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 7));
    // 0x12dacc: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x12daccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dad0: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DAD0u;
    {
        const bool branch_taken_0x12dad0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dad0) {
            ctx->pc = 0x12DAE4u;
            goto label_12dae4;
        }
    }
    ctx->pc = 0x12DAD8u;
    // 0x12dad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12dad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dadc: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x12DADCu;
    {
        const bool branch_taken_0x12dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dadc) {
            ctx->pc = 0x12DFC0u;
            goto label_12dfc0;
        }
    }
    ctx->pc = 0x12DAE4u;
label_12dae4:
    // 0x12dae4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12dae4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dae8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x12dae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x12daec: 0x24a524f8  addiu       $a1, $a1, 0x24F8
    ctx->pc = 0x12daecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9464));
    // 0x12daf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12daf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12daf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12daf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12daf8: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x12DAF8u;
    SET_GPR_U32(ctx, 31, 0x12DB00u);
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB00u; }
        if (ctx->pc != 0x12DB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB00u; }
        if (ctx->pc != 0x12DB00u) { return; }
    }
    ctx->pc = 0x12DB00u;
label_12db00:
    // 0x12db00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DB00u;
    {
        const bool branch_taken_0x12db00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db00) {
            ctx->pc = 0x12DB14u;
            goto label_12db14;
        }
    }
    ctx->pc = 0x12DB08u;
    // 0x12db08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12db08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db0c: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x12DB0Cu;
    {
        const bool branch_taken_0x12db0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db0c) {
            ctx->pc = 0x12DFC0u;
            goto label_12dfc0;
        }
    }
    ctx->pc = 0x12DB14u;
label_12db14:
    // 0x12db14: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x12db14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x12db18: 0x24a52500  addiu       $a1, $a1, 0x2500
    ctx->pc = 0x12db18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9472));
    // 0x12db1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12db1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db20: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x12db20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12db24: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x12DB24u;
    SET_GPR_U32(ctx, 31, 0x12DB2Cu);
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB2Cu; }
        if (ctx->pc != 0x12DB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB2Cu; }
        if (ctx->pc != 0x12DB2Cu) { return; }
    }
    ctx->pc = 0x12DB2Cu;
label_12db2c:
    // 0x12db2c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12DB2Cu;
    {
        const bool branch_taken_0x12db2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12db2c) {
            ctx->pc = 0x12DB38u;
            goto label_12db38;
        }
    }
    ctx->pc = 0x12DB34u;
    // 0x12db34: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12db38:
    // 0x12db38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12db38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db3c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x12db3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x12db40: 0x24a52508  addiu       $a1, $a1, 0x2508
    ctx->pc = 0x12db40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9480));
    // 0x12db44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12db44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db48: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x12db48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12db4c: 0xc049bf2  jal         func_126FC8
    ctx->pc = 0x12DB4Cu;
    SET_GPR_U32(ctx, 31, 0x12DB54u);
    ctx->pc = 0x126FC8u;
    if (runtime->hasFunction(0x126FC8u)) {
        auto targetFn = runtime->lookupFunction(0x126FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB54u; }
        if (ctx->pc != 0x12DB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x126fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB54u; }
        if (ctx->pc != 0x12DB54u) { return; }
    }
    ctx->pc = 0x12DB54u;
label_12db54:
    // 0x12db54: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12DB54u;
    {
        const bool branch_taken_0x12db54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12db54) {
            ctx->pc = 0x12DB60u;
            goto label_12db60;
        }
    }
    ctx->pc = 0x12DB5Cu;
    // 0x12db5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12db5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12db60:
    // 0x12db60: 0x13c0000e  beqz        $fp, . + 4 + (0xE << 2)
    ctx->pc = 0x12DB60u;
    {
        const bool branch_taken_0x12db60 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db60) {
            ctx->pc = 0x12DB9Cu;
            goto label_12db9c;
        }
    }
    ctx->pc = 0x12DB68u;
    // 0x12db68: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12db68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12DB6Cu;
    {
        const bool branch_taken_0x12db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12db6c) {
            ctx->pc = 0x12DB8Cu;
            goto label_12db8c;
        }
    }
    ctx->pc = 0x12DB74u;
label_12db74:
    // 0x12db74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12db74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12db78: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x12db78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x12db7c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x12db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x12db80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12db80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12db84: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x12db84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x12db88: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12db88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_12db8c:
    // 0x12db8c: 0x0  nop
    ctx->pc = 0x12db8cu;
    // NOP
    // 0x12db90: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x12db90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x12db94: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12DB94u;
    {
        const bool branch_taken_0x12db94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12db94) {
            ctx->pc = 0x12DB74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12db74;
        }
    }
    ctx->pc = 0x12DB9Cu;
label_12db9c:
    // 0x12db9c: 0x0  nop
    ctx->pc = 0x12db9cu;
    // NOP
    // 0x12dba0: 0x8fb700c0  lw          $s7, 0xC0($sp)
    ctx->pc = 0x12dba0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12dba4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x12dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x12dba8: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x12dba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbac: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x12dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x12dbb0: 0x16000038  bnez        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x12DBB0u;
    {
        const bool branch_taken_0x12dbb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dbb0) {
            ctx->pc = 0x12DC94u;
            goto label_12dc94;
        }
    }
    ctx->pc = 0x12DBB8u;
    // 0x12dbb8: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x12dbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12dbbc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12dbbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbc0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x12DBC0u;
    {
        const bool branch_taken_0x12dbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dbc0) {
            ctx->pc = 0x12DC60u;
            goto label_12dc60;
        }
    }
    ctx->pc = 0x12DBC8u;
label_12dbc8:
    // 0x12dbc8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12dbcc: 0x2823821  addu        $a3, $s4, $v0
    ctx->pc = 0x12dbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12dbd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12dbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbd4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12dbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12dbd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbdc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x12dbdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbe0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12dbe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbe4: 0xc04b628  jal         func_12D8A0
    ctx->pc = 0x12DBE4u;
    SET_GPR_U32(ctx, 31, 0x12DBECu);
    ctx->pc = 0x12D8A0u;
    if (runtime->hasFunction(0x12D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x12D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DBECu; }
        if (ctx->pc != 0x12DBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcP8TM2_headii_0x12d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DBECu; }
        if (ctx->pc != 0x12DBECu) { return; }
    }
    ctx->pc = 0x12DBECu;
label_12dbec:
    // 0x12dbec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12dbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbf0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12DBF0u;
    {
        const bool branch_taken_0x12dbf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dbf0) {
            ctx->pc = 0x12DC38u;
            goto label_12dc38;
        }
    }
    ctx->pc = 0x12DBF8u;
    // 0x12dbf8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x12dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x12dbfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12dc00: 0x2e2082a  slt         $at, $s7, $v0
    ctx->pc = 0x12dc00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12dc04: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x12DC04u;
    {
        const bool branch_taken_0x12dc04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc04) {
            ctx->pc = 0x12DC38u;
            goto label_12dc38;
        }
    }
    ctx->pc = 0x12DC0Cu;
    // 0x12dc0c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12dc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc10: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12dc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc14: 0xc04b430  jal         func_12D0C0
    ctx->pc = 0x12DC14u;
    SET_GPR_U32(ctx, 31, 0x12DC1Cu);
    ctx->pc = 0x12D0C0u;
    if (runtime->hasFunction(0x12D0C0u)) {
        auto targetFn = runtime->lookupFunction(0x12D0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DC1Cu; }
        if (ctx->pc != 0x12DC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRemainVRAM__17mgCTextureManagerFi_0x12d0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DC1Cu; }
        if (ctx->pc != 0x12DC1Cu) { return; }
    }
    ctx->pc = 0x12DC1Cu;
label_12dc1c:
    // 0x12dc1c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12DC1Cu;
    {
        const bool branch_taken_0x12dc1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12dc1c) {
            ctx->pc = 0x12DC38u;
            goto label_12dc38;
        }
    }
    ctx->pc = 0x12DC24u;
    // 0x12dc24: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12dc24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x12dc28: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x12dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12dc2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12dc30: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x12dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x12dc34: 0xa6170000  sh          $s7, 0x0($s0)
    ctx->pc = 0x12dc34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 23));
label_12dc38:
    // 0x12dc38: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DC38u;
    {
        const bool branch_taken_0x12dc38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc38) {
            ctx->pc = 0x12DC58u;
            goto label_12dc58;
        }
    }
    ctx->pc = 0x12DC40u;
    // 0x12dc40: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x12dc40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12dc44: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12dc48: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x12dc48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12dc4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x12DC4Cu;
    {
        const bool branch_taken_0x12dc4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc4c) {
            ctx->pc = 0x12DC58u;
            goto label_12dc58;
        }
    }
    ctx->pc = 0x12DC54u;
    // 0x12dc54: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x12dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_12dc58:
    // 0x12dc58: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x12dc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12dc5c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12dc5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_12dc60:
    // 0x12dc60: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x12dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x12dc64: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x12dc64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12dc68: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x12DC68u;
    {
        const bool branch_taken_0x12dc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dc68) {
            ctx->pc = 0x12DBC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dbc8;
        }
    }
    ctx->pc = 0x12DC70u;
    // 0x12dc70: 0x13c000d1  beqz        $fp, . + 4 + (0xD1 << 2)
    ctx->pc = 0x12DC70u;
    {
        const bool branch_taken_0x12dc70 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc70) {
            ctx->pc = 0x12DFB8u;
            goto label_12dfb8;
        }
    }
    ctx->pc = 0x12DC78u;
    // 0x12dc78: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x12dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12dc7c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x12dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x12dc80: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x12dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12dc84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12dc88: 0xafc20080  sw          $v0, 0x80($fp)
    ctx->pc = 0x12dc88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 2));
    // 0x12dc8c: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x12DC8Cu;
    {
        const bool branch_taken_0x12dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc8c) {
            ctx->pc = 0x12DFB8u;
            goto label_12dfb8;
        }
    }
    ctx->pc = 0x12DC94u;
label_12dc94:
    // 0x12dc94: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x12dc94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x12dc98: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12dc98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dc9c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x12DC9Cu;
    {
        const bool branch_taken_0x12dc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc9c) {
            ctx->pc = 0x12DD74u;
            goto label_12dd74;
        }
    }
    ctx->pc = 0x12DCA4u;
label_12dca4:
    // 0x12dca4: 0x26d00001  addiu       $s0, $s6, 0x1
    ctx->pc = 0x12dca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x12dca8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12DCA8u;
    {
        const bool branch_taken_0x12dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dca8) {
            ctx->pc = 0x12DD5Cu;
            goto label_12dd5c;
        }
    }
    ctx->pc = 0x12DCB0u;
label_12dcb0:
    // 0x12dcb0: 0x163180  sll         $a2, $s6, 6
    ctx->pc = 0x12dcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x12dcb4: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x12dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x12dcb8: 0x2443002c  addiu       $v1, $v0, 0x2C
    ctx->pc = 0x12dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x12dcbc: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x12dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x12dcc0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12DCC0u;
    {
        const bool branch_taken_0x12dcc0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12dcc0) {
            ctx->pc = 0x12DCCCu;
            goto label_12dccc;
        }
    }
    ctx->pc = 0x12DCC8u;
    // 0x12dcc8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_12dccc:
    // 0x12dccc: 0x0  nop
    ctx->pc = 0x12dcccu;
    // NOP
    // 0x12dcd0: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x12dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x12dcd4: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x12dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x12dcd8: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x12dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x12dcdc: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x12dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x12dce0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12DCE0u;
    {
        const bool branch_taken_0x12dce0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12dce0) {
            ctx->pc = 0x12DCECu;
            goto label_12dcec;
        }
    }
    ctx->pc = 0x12DCE8u;
    // 0x12dce8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_12dcec:
    // 0x12dcec: 0x0  nop
    ctx->pc = 0x12dcecu;
    // NOP
    // 0x12dcf0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x12dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12dcf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12dcf8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x12dcf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12dcfc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x12DCFCu;
    {
        const bool branch_taken_0x12dcfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dcfc) {
            ctx->pc = 0x12DD58u;
            goto label_12dd58;
        }
    }
    ctx->pc = 0x12DD04u;
    // 0x12dd04: 0x2259021  addu        $s2, $s1, $a1
    ctx->pc = 0x12dd04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x12dd08: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x12dd08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12dd0c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x12dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x12dd10: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12DD10u;
    {
        const bool branch_taken_0x12dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12dd10) {
            ctx->pc = 0x12DD58u;
            goto label_12dd58;
        }
    }
    ctx->pc = 0x12DD18u;
    // 0x12dd18: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x12dd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12dd1c: 0x2269821  addu        $s3, $s1, $a2
    ctx->pc = 0x12dd1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x12dd20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12dd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd24: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x12dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12dd28: 0xc049c18  jal         func_127060
    ctx->pc = 0x12DD28u;
    SET_GPR_U32(ctx, 31, 0x12DD30u);
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD30u; }
        if (ctx->pc != 0x12DD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD30u; }
        if (ctx->pc != 0x12DD30u) { return; }
    }
    ctx->pc = 0x12DD30u;
label_12dd30:
    // 0x12dd30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12dd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12dd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd38: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x12dd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12dd3c: 0xc049c18  jal         func_127060
    ctx->pc = 0x12DD3Cu;
    SET_GPR_U32(ctx, 31, 0x12DD44u);
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD44u; }
        if (ctx->pc != 0x12DD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD44u; }
        if (ctx->pc != 0x12DD44u) { return; }
    }
    ctx->pc = 0x12DD44u;
label_12dd44:
    // 0x12dd44: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x12dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12dd48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12dd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd4c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x12dd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x12dd50: 0xc049c18  jal         func_127060
    ctx->pc = 0x12DD50u;
    SET_GPR_U32(ctx, 31, 0x12DD58u);
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD58u; }
        if (ctx->pc != 0x12DD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DD58u; }
        if (ctx->pc != 0x12DD58u) { return; }
    }
    ctx->pc = 0x12DD58u;
label_12dd58:
    // 0x12dd58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12dd58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12dd5c:
    // 0x12dd5c: 0x0  nop
    ctx->pc = 0x12dd5cu;
    // NOP
    // 0x12dd60: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12dd64: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x12dd64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12dd68: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x12DD68u;
    {
        const bool branch_taken_0x12dd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dd68) {
            ctx->pc = 0x12DCB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dcb0;
        }
    }
    ctx->pc = 0x12DD70u;
    // 0x12dd70: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12dd70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_12dd74:
    // 0x12dd74: 0x0  nop
    ctx->pc = 0x12dd74u;
    // NOP
    // 0x12dd78: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12dd7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12dd80: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x12dd80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12dd84: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x12DD84u;
    {
        const bool branch_taken_0x12dd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dd84) {
            ctx->pc = 0x12DCA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dca4;
        }
    }
    ctx->pc = 0x12DD8Cu;
    // 0x12dd8c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12dd8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dd90: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x12DD90u;
    {
        const bool branch_taken_0x12dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dd90) {
            ctx->pc = 0x12DFA8u;
            goto label_12dfa8;
        }
    }
    ctx->pc = 0x12DD98u;
label_12dd98:
    // 0x12dd98: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x12dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x12dd9c: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x12dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12dda0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x12dda0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dda4: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x12dda4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12dda8: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x12dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x12ddac: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12DDACu;
    {
        const bool branch_taken_0x12ddac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12ddac) {
            ctx->pc = 0x12DDECu;
            goto label_12ddec;
        }
    }
    ctx->pc = 0x12DDB4u;
    // 0x12ddb4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x12ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12ddb8: 0x4400079  bltz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x12DDB8u;
    {
        const bool branch_taken_0x12ddb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12ddb8) {
            ctx->pc = 0x12DFA0u;
            goto label_12dfa0;
        }
    }
    ctx->pc = 0x12DDC0u;
    // 0x12ddc0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x12ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x12ddc4: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x12DDC4u;
    {
        const bool branch_taken_0x12ddc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ddc4) {
            ctx->pc = 0x12DFA0u;
            goto label_12dfa0;
        }
    }
    ctx->pc = 0x12DDCCu;
    // 0x12ddcc: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x12ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x12ddd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12ddd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddd4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x12ddd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ddd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12ddd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dddc: 0xc04f630  jal         func_13D8C0
    ctx->pc = 0x12DDDCu;
    SET_GPR_U32(ctx, 31, 0x12DDE4u);
    ctx->pc = 0x13D8C0u;
    if (runtime->hasFunction(0x13D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DDE4u; }
        if (ctx->pc != 0x12DDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadCFGFile__17mgCTextureManagerFPciP9mgCMemoryP15mgCTextureAnime_0x13d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DDE4u; }
        if (ctx->pc != 0x12DDE4u) { return; }
    }
    ctx->pc = 0x12DDE4u;
label_12dde4:
    // 0x12dde4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x12DDE4u;
    {
        const bool branch_taken_0x12dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dde4) {
            ctx->pc = 0x12DFA0u;
            goto label_12dfa0;
        }
    }
    ctx->pc = 0x12DDECu;
label_12ddec:
    // 0x12ddec: 0x0  nop
    ctx->pc = 0x12ddecu;
    // NOP
    // 0x12ddf0: 0x8e330028  lw          $s3, 0x28($s1)
    ctx->pc = 0x12ddf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x12ddf4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x12ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x12ddf8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x12ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12ddfc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x12ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12de00: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x12de00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12de04: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x12de04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12de08: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x12DE08u;
    {
        const bool branch_taken_0x12de08 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de08) {
            ctx->pc = 0x12DE3Cu;
            goto label_12de3c;
        }
    }
    ctx->pc = 0x12DE10u;
    // 0x12de10: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x12de10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x12de14: 0x3c21821  addu        $v1, $fp, $v0
    ctx->pc = 0x12de14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x12de18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12de1c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DE1Cu;
    {
        const bool branch_taken_0x12de1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12de1c) {
            ctx->pc = 0x12DE3Cu;
            goto label_12de3c;
        }
    }
    ctx->pc = 0x12DE24u;
    // 0x12de24: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x12de24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x12de28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12de28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12de2c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x12de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x12de30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12de30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12de34: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x12de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x12de38: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x12de38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_12de3c:
    // 0x12de3c: 0x0  nop
    ctx->pc = 0x12de3cu;
    // NOP
    // 0x12de40: 0x86290030  lh          $t1, 0x30($s1)
    ctx->pc = 0x12de40u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x12de44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12de44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12de48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12de4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de50: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x12de50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de54: 0xc04b628  jal         func_12D8A0
    ctx->pc = 0x12DE54u;
    SET_GPR_U32(ctx, 31, 0x12DE5Cu);
    ctx->pc = 0x12D8A0u;
    if (runtime->hasFunction(0x12D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x12D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE5Cu; }
        if (ctx->pc != 0x12DE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcP8TM2_headii_0x12d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE5Cu; }
        if (ctx->pc != 0x12DE5Cu) { return; }
    }
    ctx->pc = 0x12DE5Cu;
label_12de5c:
    // 0x12de5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12de5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de60: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DE60u;
    {
        const bool branch_taken_0x12de60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de60) {
            ctx->pc = 0x12DE70u;
            goto label_12de70;
        }
    }
    ctx->pc = 0x12DE68u;
    // 0x12de68: 0xde220038  ld          $v0, 0x38($s1)
    ctx->pc = 0x12de68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x12de6c: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x12de6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
label_12de70:
    // 0x12de70: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x12DE70u;
    {
        const bool branch_taken_0x12de70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de70) {
            ctx->pc = 0x12DF80u;
            goto label_12df80;
        }
    }
    ctx->pc = 0x12DE78u;
    // 0x12de78: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x12de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x12de7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12de80: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x12de80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12de84: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x12DE84u;
    {
        const bool branch_taken_0x12de84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12de84) {
            ctx->pc = 0x12DF80u;
            goto label_12df80;
        }
    }
    ctx->pc = 0x12DE8Cu;
    // 0x12de8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12de8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12de90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12de94: 0xc04b430  jal         func_12D0C0
    ctx->pc = 0x12DE94u;
    SET_GPR_U32(ctx, 31, 0x12DE9Cu);
    ctx->pc = 0x12D0C0u;
    if (runtime->hasFunction(0x12D0C0u)) {
        auto targetFn = runtime->lookupFunction(0x12D0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE9Cu; }
        if (ctx->pc != 0x12DE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRemainVRAM__17mgCTextureManagerFi_0x12d0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DE9Cu; }
        if (ctx->pc != 0x12DE9Cu) { return; }
    }
    ctx->pc = 0x12DE9Cu;
label_12de9c:
    // 0x12de9c: 0x4410038  bgez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x12DE9Cu;
    {
        const bool branch_taken_0x12de9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12de9c) {
            ctx->pc = 0x12DF80u;
            goto label_12df80;
        }
    }
    ctx->pc = 0x12DEA4u;
    // 0x12dea4: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x12DEA4u;
    {
        const bool branch_taken_0x12dea4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dea4) {
            ctx->pc = 0x12DED0u;
            goto label_12ded0;
        }
    }
    ctx->pc = 0x12DEACu;
    // 0x12deac: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x12deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x12deb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12deb4: 0x3c21821  addu        $v1, $fp, $v0
    ctx->pc = 0x12deb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x12deb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12debc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12DEBCu;
    {
        const bool branch_taken_0x12debc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12debc) {
            ctx->pc = 0x12DED0u;
            goto label_12ded0;
        }
    }
    ctx->pc = 0x12DEC4u;
    // 0x12dec4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x12dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x12dec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12decc: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x12deccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_12ded0:
    // 0x12ded0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x12ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12ded4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ded8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x12ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x12dedc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x12dedcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12dee0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x12dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12dee4: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x12dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x12dee8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x12dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12deec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12deecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12def0: 0xc04b1e0  jal         func_12C780
    ctx->pc = 0x12DEF0u;
    SET_GPR_U32(ctx, 31, 0x12DEF8u);
    ctx->pc = 0x12C780u;
    if (runtime->hasFunction(0x12C780u)) {
        auto targetFn = runtime->lookupFunction(0x12C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DEF8u; }
        if (ctx->pc != 0x12DEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__15mgCTextureBlockFP10mgCTexture_0x12c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DEF8u; }
        if (ctx->pc != 0x12DEF8u) { return; }
    }
    ctx->pc = 0x12DEF8u;
label_12def8:
    // 0x12def8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x12def8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12defc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12df00: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x12df00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x12df04: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x12df04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12df08: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x12df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x12df0c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x12df0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12df10: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12DF10u;
    {
        const bool branch_taken_0x12df10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12df10) {
            ctx->pc = 0x12DF38u;
            goto label_12df38;
        }
    }
    ctx->pc = 0x12DF18u;
    // 0x12df18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x12df18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12df1c: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x12df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x12df20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x12df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12df24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12df24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12df28: 0xc04b1c8  jal         func_12C720
    ctx->pc = 0x12DF28u;
    SET_GPR_U32(ctx, 31, 0x12DF30u);
    ctx->pc = 0x12C720u;
    if (runtime->hasFunction(0x12C720u)) {
        auto targetFn = runtime->lookupFunction(0x12C720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF30u; }
        if (ctx->pc != 0x12DF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__15mgCTextureBlockFP10mgCTexture_0x12c720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF30u; }
        if (ctx->pc != 0x12DF30u) { return; }
    }
    ctx->pc = 0x12DF30u;
label_12df30:
    // 0x12df30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12DF30u;
    {
        const bool branch_taken_0x12df30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12df30) {
            ctx->pc = 0x12DF64u;
            goto label_12df64;
        }
    }
    ctx->pc = 0x12DF38u;
label_12df38:
    // 0x12df38: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x12df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x12df3c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12DF3Cu;
    {
        const bool branch_taken_0x12df3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12df3c) {
            ctx->pc = 0x12DF60u;
            goto label_12df60;
        }
    }
    ctx->pc = 0x12DF44u;
    // 0x12df44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12df44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12df48: 0xaea201c4  sw          $v0, 0x1C4($s5)
    ctx->pc = 0x12df48u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 452), GPR_U32(ctx, 2));
    // 0x12df4c: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x12df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x12df50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12df50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12df54: 0x8ea201bc  lw          $v0, 0x1BC($s5)
    ctx->pc = 0x12df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 444)));
    // 0x12df58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12df5c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x12df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_12df60:
    // 0x12df60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12df60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12df64:
    // 0x12df64: 0x0  nop
    ctx->pc = 0x12df64u;
    // NOP
    // 0x12df68: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x12df68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x12df6c: 0x24842510  addiu       $a0, $a0, 0x2510
    ctx->pc = 0x12df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9488));
    // 0x12df70: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x12df70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12df74: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x12df74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x12df78: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x12DF78u;
    SET_GPR_U32(ctx, 31, 0x12DF80u);
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF80u; }
        if (ctx->pc != 0x12DF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DF80u; }
        if (ctx->pc != 0x12DF80u) { return; }
    }
    ctx->pc = 0x12DF80u;
label_12df80:
    // 0x12df80: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12DF80u;
    {
        const bool branch_taken_0x12df80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12df80) {
            ctx->pc = 0x12DFA0u;
            goto label_12dfa0;
        }
    }
    ctx->pc = 0x12DF88u;
    // 0x12df88: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x12df88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12df8c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12df90: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x12df90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12df94: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x12DF94u;
    {
        const bool branch_taken_0x12df94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12df94) {
            ctx->pc = 0x12DFA0u;
            goto label_12dfa0;
        }
    }
    ctx->pc = 0x12DF9Cu;
    // 0x12df9c: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x12df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_12dfa0:
    // 0x12dfa0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x12dfa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x12dfa4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12dfa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_12dfa8:
    // 0x12dfa8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x12dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x12dfac: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x12dfacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12dfb0: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x12DFB0u;
    {
        const bool branch_taken_0x12dfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dfb0) {
            ctx->pc = 0x12DD98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12dd98;
        }
    }
    ctx->pc = 0x12DFB8u;
label_12dfb8:
    // 0x12dfb8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12dfbc: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x12dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_12dfc0:
    // 0x12dfc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12dfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12dfc4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x12dfc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12dfc8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x12dfc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12dfcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12dfccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12dfd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12dfd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12dfd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12dfd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12dfd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12dfd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12dfdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12dfdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12dfe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12dfe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dfe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12dfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dfe8: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x12dfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x12dfec: 0x3e00008  jr          $ra
    ctx->pc = 0x12DFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DFF4u;
}
