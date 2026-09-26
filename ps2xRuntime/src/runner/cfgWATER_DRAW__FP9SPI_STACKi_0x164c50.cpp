#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgWATER_DRAW__FP9SPI_STACKi
// Address: 0x164c50 - 0x164dcc
void cfgWATER_DRAW__FP9SPI_STACKi_0x164c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgWATER_DRAW__FP9SPI_STACKi_0x164c50");
#endif

    switch (ctx->pc) {
        case 0x164c50u: goto label_164c50;
        case 0x164c54u: goto label_164c54;
        case 0x164c58u: goto label_164c58;
        case 0x164c5cu: goto label_164c5c;
        case 0x164c60u: goto label_164c60;
        case 0x164c64u: goto label_164c64;
        case 0x164c68u: goto label_164c68;
        case 0x164c6cu: goto label_164c6c;
        case 0x164c70u: goto label_164c70;
        case 0x164c74u: goto label_164c74;
        case 0x164c78u: goto label_164c78;
        case 0x164c7cu: goto label_164c7c;
        case 0x164c80u: goto label_164c80;
        case 0x164c84u: goto label_164c84;
        case 0x164c88u: goto label_164c88;
        case 0x164c8cu: goto label_164c8c;
        case 0x164c90u: goto label_164c90;
        case 0x164c94u: goto label_164c94;
        case 0x164c98u: goto label_164c98;
        case 0x164c9cu: goto label_164c9c;
        case 0x164ca0u: goto label_164ca0;
        case 0x164ca4u: goto label_164ca4;
        case 0x164ca8u: goto label_164ca8;
        case 0x164cacu: goto label_164cac;
        case 0x164cb0u: goto label_164cb0;
        case 0x164cb4u: goto label_164cb4;
        case 0x164cb8u: goto label_164cb8;
        case 0x164cbcu: goto label_164cbc;
        case 0x164cc0u: goto label_164cc0;
        case 0x164cc4u: goto label_164cc4;
        case 0x164cc8u: goto label_164cc8;
        case 0x164cccu: goto label_164ccc;
        case 0x164cd0u: goto label_164cd0;
        case 0x164cd4u: goto label_164cd4;
        case 0x164cd8u: goto label_164cd8;
        case 0x164cdcu: goto label_164cdc;
        case 0x164ce0u: goto label_164ce0;
        case 0x164ce4u: goto label_164ce4;
        case 0x164ce8u: goto label_164ce8;
        case 0x164cecu: goto label_164cec;
        case 0x164cf0u: goto label_164cf0;
        case 0x164cf4u: goto label_164cf4;
        case 0x164cf8u: goto label_164cf8;
        case 0x164cfcu: goto label_164cfc;
        case 0x164d00u: goto label_164d00;
        case 0x164d04u: goto label_164d04;
        case 0x164d08u: goto label_164d08;
        case 0x164d0cu: goto label_164d0c;
        case 0x164d10u: goto label_164d10;
        case 0x164d14u: goto label_164d14;
        case 0x164d18u: goto label_164d18;
        case 0x164d1cu: goto label_164d1c;
        case 0x164d20u: goto label_164d20;
        case 0x164d24u: goto label_164d24;
        case 0x164d28u: goto label_164d28;
        case 0x164d2cu: goto label_164d2c;
        case 0x164d30u: goto label_164d30;
        case 0x164d34u: goto label_164d34;
        case 0x164d38u: goto label_164d38;
        case 0x164d3cu: goto label_164d3c;
        case 0x164d40u: goto label_164d40;
        case 0x164d44u: goto label_164d44;
        case 0x164d48u: goto label_164d48;
        case 0x164d4cu: goto label_164d4c;
        case 0x164d50u: goto label_164d50;
        case 0x164d54u: goto label_164d54;
        case 0x164d58u: goto label_164d58;
        case 0x164d5cu: goto label_164d5c;
        case 0x164d60u: goto label_164d60;
        case 0x164d64u: goto label_164d64;
        case 0x164d68u: goto label_164d68;
        case 0x164d6cu: goto label_164d6c;
        case 0x164d70u: goto label_164d70;
        case 0x164d74u: goto label_164d74;
        case 0x164d78u: goto label_164d78;
        case 0x164d7cu: goto label_164d7c;
        case 0x164d80u: goto label_164d80;
        case 0x164d84u: goto label_164d84;
        case 0x164d88u: goto label_164d88;
        case 0x164d8cu: goto label_164d8c;
        case 0x164d90u: goto label_164d90;
        case 0x164d94u: goto label_164d94;
        case 0x164d98u: goto label_164d98;
        case 0x164d9cu: goto label_164d9c;
        case 0x164da0u: goto label_164da0;
        case 0x164da4u: goto label_164da4;
        case 0x164da8u: goto label_164da8;
        case 0x164dacu: goto label_164dac;
        case 0x164db0u: goto label_164db0;
        case 0x164db4u: goto label_164db4;
        case 0x164db8u: goto label_164db8;
        case 0x164dbcu: goto label_164dbc;
        case 0x164dc0u: goto label_164dc0;
        case 0x164dc4u: goto label_164dc4;
        case 0x164dc8u: goto label_164dc8;
        default: break;
    }

    ctx->pc = 0x164c50u;

label_164c50:
    // 0x164c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x164c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_164c54:
    // 0x164c54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x164c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_164c58:
    // 0x164c58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x164c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_164c5c:
    // 0x164c5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_164c60:
    // 0x164c60: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x164c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_164c64:
    // 0x164c64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_164c68:
    // 0x164c68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x164c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_164c6c:
    // 0x164c6c: 0xc0518f8  jal         func_1463E0
label_164c70:
    if (ctx->pc == 0x164C70u) {
        ctx->pc = 0x164C70u;
            // 0x164c70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x164C74u;
        goto label_164c74;
    }
    ctx->pc = 0x164C6Cu;
    SET_GPR_U32(ctx, 31, 0x164C74u);
    ctx->pc = 0x164C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164C6Cu;
            // 0x164c70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C74u; }
        if (ctx->pc != 0x164C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C74u; }
        if (ctx->pc != 0x164C74u) { return; }
    }
    ctx->pc = 0x164C74u;
label_164c74:
    // 0x164c74: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_164c78:
    if (ctx->pc == 0x164C78u) {
        ctx->pc = 0x164C7Cu;
        goto label_164c7c;
    }
    ctx->pc = 0x164C74u;
    {
        const bool branch_taken_0x164c74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x164c74) {
            ctx->pc = 0x164C90u;
            goto label_164c90;
        }
    }
    ctx->pc = 0x164C7Cu;
label_164c7c:
    // 0x164c7c: 0x8f878914  lw          $a3, -0x76EC($gp)
    ctx->pc = 0x164c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
label_164c80:
    // 0x164c80: 0x8ce30cec  lw          $v1, 0xCEC($a3)
    ctx->pc = 0x164c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3308)));
label_164c84:
    // 0x164c84: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x164c84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_164c88:
    // 0x164c88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_164c8c:
    if (ctx->pc == 0x164C8Cu) {
        ctx->pc = 0x164C90u;
        goto label_164c90;
    }
    ctx->pc = 0x164C88u;
    {
        const bool branch_taken_0x164c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164c88) {
            ctx->pc = 0x164C98u;
            goto label_164c98;
        }
    }
    ctx->pc = 0x164C90u;
label_164c90:
    // 0x164c90: 0x10000047  b           . + 4 + (0x47 << 2)
label_164c94:
    if (ctx->pc == 0x164C94u) {
        ctx->pc = 0x164C94u;
            // 0x164c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164C98u;
        goto label_164c98;
    }
    ctx->pc = 0x164C90u;
    {
        const bool branch_taken_0x164c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164C90u;
            // 0x164c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c90) {
            ctx->pc = 0x164DB0u;
            goto label_164db0;
        }
    }
    ctx->pc = 0x164C98u;
label_164c98:
    // 0x164c98: 0x8ce40cf4  lw          $a0, 0xCF4($a3)
    ctx->pc = 0x164c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3316)));
label_164c9c:
    // 0x164c9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x164c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164ca0:
    // 0x164ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164ca4:
    // 0x164ca4: 0x1000000c  b           . + 4 + (0xC << 2)
label_164ca8:
    if (ctx->pc == 0x164CA8u) {
        ctx->pc = 0x164CA8u;
            // 0x164ca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164CACu;
        goto label_164cac;
    }
    ctx->pc = 0x164CA4u;
    {
        const bool branch_taken_0x164ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CA4u;
            // 0x164ca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ca4) {
            ctx->pc = 0x164CD8u;
            goto label_164cd8;
        }
    }
    ctx->pc = 0x164CACu;
label_164cac:
    // 0x164cac: 0x8ce80cf8  lw          $t0, 0xCF8($a3)
    ctx->pc = 0x164cacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3320)));
label_164cb0:
    // 0x164cb0: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x164cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_164cb4:
    // 0x164cb4: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x164cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_164cb8:
    // 0x164cb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_164cbc:
    if (ctx->pc == 0x164CBCu) {
        ctx->pc = 0x164CBCu;
            // 0x164cbc: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x164CC0u;
        goto label_164cc0;
    }
    ctx->pc = 0x164CB8u;
    {
        const bool branch_taken_0x164cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x164CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CB8u;
            // 0x164cbc: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cb8) {
            ctx->pc = 0x164CD0u;
            goto label_164cd0;
        }
    }
    ctx->pc = 0x164CC0u;
label_164cc0:
    // 0x164cc0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x164cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_164cc4:
    // 0x164cc4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x164cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_164cc8:
    // 0x164cc8: 0x10000006  b           . + 4 + (0x6 << 2)
label_164ccc:
    if (ctx->pc == 0x164CCCu) {
        ctx->pc = 0x164CCCu;
            // 0x164ccc: 0x1038021  addu        $s0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->pc = 0x164CD0u;
        goto label_164cd0;
    }
    ctx->pc = 0x164CC8u;
    {
        const bool branch_taken_0x164cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CC8u;
            // 0x164ccc: 0x1038021  addu        $s0, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cc8) {
            ctx->pc = 0x164CE4u;
            goto label_164ce4;
        }
    }
    ctx->pc = 0x164CD0u;
label_164cd0:
    // 0x164cd0: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x164cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_164cd4:
    // 0x164cd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x164cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_164cd8:
    // 0x164cd8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x164cd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_164cdc:
    // 0x164cdc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_164ce0:
    if (ctx->pc == 0x164CE0u) {
        ctx->pc = 0x164CE4u;
        goto label_164ce4;
    }
    ctx->pc = 0x164CDCu;
    {
        const bool branch_taken_0x164cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164cdc) {
            ctx->pc = 0x164CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164cac;
        }
    }
    ctx->pc = 0x164CE4u;
label_164ce4:
    // 0x164ce4: 0x0  nop
    ctx->pc = 0x164ce4u;
    // NOP
label_164ce8:
    // 0x164ce8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_164cec:
    if (ctx->pc == 0x164CECu) {
        ctx->pc = 0x164CF0u;
        goto label_164cf0;
    }
    ctx->pc = 0x164CE8u;
    {
        const bool branch_taken_0x164ce8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x164ce8) {
            ctx->pc = 0x164CF8u;
            goto label_164cf8;
        }
    }
    ctx->pc = 0x164CF0u;
label_164cf0:
    // 0x164cf0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_164cf4:
    if (ctx->pc == 0x164CF4u) {
        ctx->pc = 0x164CF4u;
            // 0x164cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164CF8u;
        goto label_164cf8;
    }
    ctx->pc = 0x164CF0u;
    {
        const bool branch_taken_0x164cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164CF0u;
            // 0x164cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cf0) {
            ctx->pc = 0x164DB0u;
            goto label_164db0;
        }
    }
    ctx->pc = 0x164CF8u;
label_164cf8:
    // 0x164cf8: 0x8ce30cf0  lw          $v1, 0xCF0($a3)
    ctx->pc = 0x164cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3312)));
label_164cfc:
    // 0x164cfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x164cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_164d00:
    // 0x164d00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164d04:
    // 0x164d04: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x164d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_164d08:
    // 0x164d08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_164d0c:
    // 0x164d0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x164d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_164d10:
    // 0x164d10: 0xc05191c  jal         func_146470
label_164d14:
    if (ctx->pc == 0x164D14u) {
        ctx->pc = 0x164D14u;
            // 0x164d14: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x164D18u;
        goto label_164d18;
    }
    ctx->pc = 0x164D10u;
    SET_GPR_U32(ctx, 31, 0x164D18u);
    ctx->pc = 0x164D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D10u;
            // 0x164d14: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D18u; }
        if (ctx->pc != 0x164D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D18u; }
        if (ctx->pc != 0x164D18u) { return; }
    }
    ctx->pc = 0x164D18u;
label_164d18:
    // 0x164d18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164d1c:
    // 0x164d1c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_164d20:
    if (ctx->pc == 0x164D20u) {
        ctx->pc = 0x164D20u;
            // 0x164d20: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x164D24u;
        goto label_164d24;
    }
    ctx->pc = 0x164D1Cu;
    {
        const bool branch_taken_0x164d1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D1Cu;
            // 0x164d20: 0x2a420005  slti        $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d1c) {
            ctx->pc = 0x164D84u;
            goto label_164d84;
        }
    }
    ctx->pc = 0x164D24u;
label_164d24:
    // 0x164d24: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x164d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_164d28:
    // 0x164d28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_164d2c:
    if (ctx->pc == 0x164D2Cu) {
        ctx->pc = 0x164D2Cu;
            // 0x164d2c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x164D30u;
        goto label_164d30;
    }
    ctx->pc = 0x164D28u;
    {
        const bool branch_taken_0x164d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D28u;
            // 0x164d2c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d28) {
            ctx->pc = 0x164D80u;
            goto label_164d80;
        }
    }
    ctx->pc = 0x164D30u;
label_164d30:
    // 0x164d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_164d34:
    // 0x164d34: 0x24a53238  addiu       $a1, $a1, 0x3238
    ctx->pc = 0x164d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12856));
label_164d38:
    // 0x164d38: 0xc04a4dc  jal         func_129370
label_164d3c:
    if (ctx->pc == 0x164D3Cu) {
        ctx->pc = 0x164D3Cu;
            // 0x164d3c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x164D40u;
        goto label_164d40;
    }
    ctx->pc = 0x164D38u;
    SET_GPR_U32(ctx, 31, 0x164D40u);
    ctx->pc = 0x164D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D38u;
            // 0x164d3c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129370u;
    if (runtime->hasFunction(0x129370u)) {
        auto targetFn = runtime->lookupFunction(0x129370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D40u; }
        if (ctx->pc != 0x164D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x129370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D40u; }
        if (ctx->pc != 0x164D40u) { return; }
    }
    ctx->pc = 0x164D40u;
label_164d40:
    // 0x164d40: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_164d44:
    if (ctx->pc == 0x164D44u) {
        ctx->pc = 0x164D48u;
        goto label_164d48;
    }
    ctx->pc = 0x164D40u;
    {
        const bool branch_taken_0x164d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164d40) {
            ctx->pc = 0x164D70u;
            goto label_164d70;
        }
    }
    ctx->pc = 0x164D48u;
label_164d48:
    // 0x164d48: 0x82220007  lb          $v0, 0x7($s1)
    ctx->pc = 0x164d48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_164d4c:
    // 0x164d4c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x164d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_164d50:
    // 0x164d50: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x164d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_164d54:
    // 0x164d54: 0x82220008  lb          $v0, 0x8($s1)
    ctx->pc = 0x164d54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_164d58:
    // 0x164d58: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x164d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_164d5c:
    // 0x164d5c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x164d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_164d60:
    // 0x164d60: 0x82220009  lb          $v0, 0x9($s1)
    ctx->pc = 0x164d60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_164d64:
    // 0x164d64: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x164d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_164d68:
    // 0x164d68: 0x10000005  b           . + 4 + (0x5 << 2)
label_164d6c:
    if (ctx->pc == 0x164D6Cu) {
        ctx->pc = 0x164D6Cu;
            // 0x164d6c: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->pc = 0x164D70u;
        goto label_164d70;
    }
    ctx->pc = 0x164D68u;
    {
        const bool branch_taken_0x164d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D68u;
            // 0x164d6c: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d68) {
            ctx->pc = 0x164D80u;
            goto label_164d80;
        }
    }
    ctx->pc = 0x164D70u;
label_164d70:
    // 0x164d70: 0x8f858920  lw          $a1, -0x76E0($gp)
    ctx->pc = 0x164d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_164d74:
    // 0x164d74: 0xc04e7a0  jal         func_139E80
label_164d78:
    if (ctx->pc == 0x164D78u) {
        ctx->pc = 0x164D78u;
            // 0x164d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x164D7Cu;
        goto label_164d7c;
    }
    ctx->pc = 0x164D74u;
    SET_GPR_U32(ctx, 31, 0x164D7Cu);
    ctx->pc = 0x164D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D74u;
            // 0x164d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D7Cu; }
        if (ctx->pc != 0x164D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D7Cu; }
        if (ctx->pc != 0x164D7Cu) { return; }
    }
    ctx->pc = 0x164D7Cu;
label_164d7c:
    // 0x164d7c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x164d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_164d80:
    // 0x164d80: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x164d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_164d84:
    // 0x164d84: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_164d88:
    if (ctx->pc == 0x164D88u) {
        ctx->pc = 0x164D88u;
            // 0x164d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x164D8Cu;
        goto label_164d8c;
    }
    ctx->pc = 0x164D84u;
    {
        const bool branch_taken_0x164d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164D84u;
            // 0x164d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d84) {
            ctx->pc = 0x164DB0u;
            goto label_164db0;
        }
    }
    ctx->pc = 0x164D8Cu;
label_164d8c:
    // 0x164d8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x164d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_164d90:
    // 0x164d90: 0xc051928  jal         func_1464A0
label_164d94:
    if (ctx->pc == 0x164D94u) {
        ctx->pc = 0x164D94u;
            // 0x164d94: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x164D98u;
        goto label_164d98;
    }
    ctx->pc = 0x164D90u;
    SET_GPR_U32(ctx, 31, 0x164D98u);
    ctx->pc = 0x164D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164D90u;
            // 0x164d94: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D98u; }
        if (ctx->pc != 0x164D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164D98u; }
        if (ctx->pc != 0x164D98u) { return; }
    }
    ctx->pc = 0x164D98u;
label_164d98:
    // 0x164d98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x164d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_164d9c:
    // 0x164d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_164da0:
    // 0x164da0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x164da0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_164da4:
    // 0x164da4: 0x320f809  jalr        $t9
label_164da8:
    if (ctx->pc == 0x164DA8u) {
        ctx->pc = 0x164DA8u;
            // 0x164da8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x164DACu;
        goto label_164dac;
    }
    ctx->pc = 0x164DA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x164DACu);
        ctx->pc = 0x164DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164DA4u;
            // 0x164da8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x164DACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x164DACu; }
            if (ctx->pc != 0x164DACu) { return; }
        }
        }
    }
    ctx->pc = 0x164DACu;
label_164dac:
    // 0x164dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164db0:
    // 0x164db0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x164db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_164db4:
    // 0x164db4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x164db4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_164db8:
    // 0x164db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_164dbc:
    // 0x164dbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_164dc0:
    // 0x164dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_164dc4:
    // 0x164dc4: 0x3e00008  jr          $ra
label_164dc8:
    if (ctx->pc == 0x164DC8u) {
        ctx->pc = 0x164DC8u;
            // 0x164dc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x164DCCu;
        goto label_fallthrough_0x164dc4;
    }
    ctx->pc = 0x164DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164DC4u;
            // 0x164dc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x164dc4:
    ctx->pc = 0x164DCCu;
}
